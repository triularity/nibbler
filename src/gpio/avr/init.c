/*
 * @(#) init.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <avr/io.h>
#include <nibbler/gpio.h>


void
gpio_init
(
	void
)
{
#ifdef	PUD
	/* Make sure pullups aren't globally disabled */

	/*
	 * Let's thank Atmel for moving PUD to another register with no
	 * apparent generic way to know this during compile time.
	 * Some kind of macro (e.g. PUD_IN_SFIOR) would have been nice!
	 *
	 * Anything with SFIOR defined, _except_ ATTiny15 (maybe others?),
	 * uses it instead of MCUCR.
	 */
#if	defined(SFIOR) && !defined(__AVR_ATTiny15__)
	SFIOR &= ~PUD;
#else
	MCUCR &= ~PUD;
#endif
#endif	/* PUD */

	/*
	 * Enable all per-port pullups
	 */
#ifdef	PUEA
	PUEA = 0xFF
#endif

#ifdef	PUEB
	PUEB = 0xFF
#endif

#ifdef	PUEC
	PUEC = 0xFF
#endif

#ifdef	PUED
	PUED = 0xFF
#endif

#ifdef	PUEE
	PUEE = 0xFF
#endif
}
