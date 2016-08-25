/*
 * @(#) adc_select.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <avr/io.h>
#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"
#include "debug.h"

/*
 * REFSn
 */
#define	_MK_REFS0(ref)		( ((ref) & 0x01)       << REFS0)
#define	_MK_REFS1(ref)		((((ref) & 0x02) >> 1) << REFS1)
#define	_MK_REFS2(ref)		((((ref) & 0x04) >> 2) << REFS2)

#if	defined(REFS1) && (REFS1 != (REFS0 + 1))
#warning	Non-contiguous REFS1/REFS0 bits has not been tested
#define	_MK_REFS0_1(ref)	(_MK_REFS1(ref)|_MK_REFS0(ref))
#else
#define	_MK_REFS0_1(ref)	( ((ref) & 0x03)       << REFS0)
#endif

#ifdef	REFS3
#error	REFS3 is not supported yet
#endif

#if	defined(REFS2)
#define	_MK_REFS(ref)	(_MK_REFS0_1(ref)|_MK_REFS2(ref))
#endif

#if	defined(REFS1)
#define	_MK_REFSL(ref)	_MK_REFS0_1(ref)
#elif	defined(REFS0)
#define	_MK_REFSL(ref)	_MK_REFS0(ref)
#endif

/*
 * MUXn
 */
#ifdef	MUX6
#error	MUX6 is not supported yet
#endif

#ifdef	MUX5
#define	MUX_MASKH	(1<<MUX5)
#endif

#ifdef	MUX4
#define	MUX_MASKL	((1<<MUX4)|(1<<MUX3)|(1<<MUX2)|(1<<MUX1)|(1<<MUX0))
#elif	defined(MUX3)
#define	MUX_MASKL	((1<<MUX3)|(1<<MUX2)|(1<<MUX1)|(1<<MUX0))
#elif	defined(MUX2)
#define	MUX_MASKL	((1<<MUX2)|(1<<MUX1)|(1<<MUX0))
#elif	defined(MUX1)
#define	MUX_MASKL	((1<<MUX1)|(1<<MUX0))
#elif	defined(MUX0)
#define	MUX_MASKL	(1<<MUX0)
#endif

/*
 * REFS Register(s)
 */
#if	defined(OPT_ADCSRB_REFS2)
#define	_ADCSRB_ADD_REFS(x,refs)	(((x)&~REFS2)|(((refs)<<REFS2)&REFS2))
#define	_ADMUX_MK_REFS(ref)		_MK_REFSL(ref)
#elif	defined(OPT_ADMUX_REFS2)
#define	_ADCSRB_ADD_REFS(x,refs)	(x)
#define	_ADMUX_MK_REFS(ref)		_MK_REFS(ref)
#elif	!defined(REFS2)
#define	_ADCSRB_ADD_REFS(x,refs)	(x)
#define	_ADMUX_MK_REFS(ref)		_MK_REFSL(ref)
#else
#error	REFS2 defined with unmapped register
#endif

/*
 * MUX Register(s)
 */
#if	defined(OPT_ADCSRB_MUX5)
#define	_ADCSRB_ADD_MUX(x,mux)	(((x) & ~MUX_MASKH)|(((mux)<<MUX5) & MUX_MASKH))
#define	_ADMUX_ADD_MUX(x,mux)	((x)|(((mux)<<MUX0) & MUX_MASKL))
#elif	defined(OPT_ADMUX_MUX5)
#define	_ADCSRB_ADD_MUX(x,mux)	(x)
#define	_ADMUX_ADD_MUX(x,mux)	((x)|(((mux)<<MUX0) & (MUX_MASKH|MUX_MASKL)))
#elif	!defined(MUX5)
#define	_ADCSRB_ADD_MUX(x,mux)	(x)
#define	_ADMUX_ADD_MUX(x,mux)	((x)|(((mux)<<MUX0) & MUX_MASKL))
#else
#error	MUX5 defined with unmapped register
#endif

/*
 * ADLAR Register
 */
#if	defined(OPT_ADCSRB_ADLAR)
#define	_ADCSRB_ADD_ADLAR(x)	((x)|(1<<ADLAR))
#define	_ADMUX_ADD_ADLAR(x)	(x)
#elif	defined(OPT_ADMUX_ADLAR)
#define	_ADCSRB_ADD_ADLAR(x)	(x)
#define	_ADMUX_ADD_ADLAR(x)	((x)|(1<<ADLAR))
#elif	!defined(ADLAR)
#define	_ADCSRB_ADD_ADLAR(x)	(x)
#define	_ADMUX_ADD_ADLAR(x)	(x)
#else
#error	ADLAR defined with unmapped register
#endif


void
_gpio_adc_select
(
	uint8_t mux
)
{
#ifdef	ADSC	/* ADC Supported */
#ifdef	ADMUXA

	/*
	 * Only known case [ATTiny828] (as of avr-libc-1.8.1)
	 */
#ifdef	__AVR_ATTiny828__
	ADMUXA = (mux << MUX0) & MUX_MASKL;

	ADMUXB = ((_gpio_adc_reference & 0x01) << REFS)
		|((mux << MUX5) & MUX_MASKH);
#else
#error	Unknown core with ADMUXA
#endif

#else	/* ADMUXA */
//_nibbler_println("");
//_nibbler_print("_gpio_adc_reference = ");
//_nibbler_printhexln(_gpio_adc_reference);
//_nibbler_print("mux = ");
//_nibbler_printhexln(mux);

	ADMUX = _ADMUX_ADD_ADLAR(
		_ADMUX_ADD_MUX(_ADMUX_MK_REFS(_gpio_adc_reference), mux));
//_nibbler_print("ADMUX = 0x");
//_nibbler_printhexln(ADMUX);

#ifdef	ADCSRB
	/* This may become 'ADCSRB = ADCSRB' if no-op macros aren't filtered */
#if	_ADCSRB_ADD_ADLAR(_ADCSRB_ADD_MUX(_ADCSRB_ADD_REFS(0,1),1)) != 0
	ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
	{
		ADCSRB = _ADCSRB_ADD_ADLAR(
			_ADCSRB_ADD_MUX(
				_ADCSRB_ADD_REFS(ADCSRB, _gpio_adc_reference),
				mux));
	}
//_nibbler_print("ADCSRB = 0x");
//_nibbler_printhexln(ADCSRB);
#endif
#endif	/* ADCSRB */

#endif	/* ADMUXA */
#else	/* ADSC */
	(void) mux; /* Quiet unused parameter */
#endif	/* ADSC */
}
