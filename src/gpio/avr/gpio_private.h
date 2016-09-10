/*
 * @(#) gpio_private.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__gpio_private_h
#define	__gpio_private_h

#include <stdint.h>
#include <avr/pgmspace.h>
#include <nibbler/gpio.h>

#include "avr_options.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define	PGM_BYTE(x)		pgm_read_byte(&(x))
#define	PGM_WORD(x)		pgm_read_word(&(x))

/*
 * I/O register conversions
 */
typedef	volatile uint8_t *	gpio_ioptr8_t;
typedef	volatile uint16_t *	gpio_ioptr16_t;

#ifdef	OPT_HIGH_IOM
typedef	uint16_t		gpio_iooff_t;
#define	REG_TO_OFFSET(reg)	((gpio_iooff_t) &(reg))
#define	PGM_IOOFF(x)		PGM_WORD(x)
#else
typedef	uint8_t			gpio_iooff_t;
#define	REG_TO_OFFSET(reg)	((gpio_iooff_t) (uint16_t) &(reg))
#define	PGM_IOOFF(x)		PGM_BYTE(x)
#endif

#define	IOOFF_TO_PTR8(offset)	((gpio_ioptr8_t) (uint16_t) (offset))
#define	IOOFF_TO_PTR16(offset)	((gpio_ioptr16_t) (uint16_t) (offset))

/*
 * No register
 */
#define	GPIO_NO_REGISTER	0

/*
 * Timer type
 */
#define	GPIO_TIMER_TYPE_MASK	0x03

#ifdef	OPT_TIMER_8BIT
#define	GPIO_TIMER_TYPE_8BIT	0x00
#if	!defined(OPT_TIMER_10BIT) && !defined(OPT_TIMER_16BIT)
#define	OPT_TIMER_SINGLETYPE	GPIO_TIMER_TYPE_8BIT
#endif
#endif	/* OPT_TIMER_8BIT */

#ifdef	OPT_TIMER_10BIT
#define	GPIO_TIMER_TYPE_10BIT	0x01
#if	!defined(OPT_TIMER_8BIT) && !defined(OPT_TIMER_10BIT)
#define	OPT_TIMER_SINGLETYPE	GPIO_TIMER_TYPE_10BIT
#endif
#endif	/* OPT_TIMER_10BIT */

#ifdef	OPT_TIMER_16BIT
#define	GPIO_TIMER_TYPE_16BIT	0x02
#if	!defined(OPT_TIMER_8BIT) && !defined(OPT_TIMER_16BIT)
#define	OPT_TIMER_SINGLETYPE	GPIO_TIMER_TYPE_16BIT
#endif
#endif	/* OPT_TIMER_16BIT */


typedef struct _gpio_timer
{
#ifndef	OPT_TIMER_SINGLETYPE
	uint8_t			flags;
#endif
	gpio_iooff_t		tccr;		/* &TCCRx */
	uint8_t			tccr_andmask;	/* TCCR AND bitmask */
	uint8_t			tccr_enable;	/* TCCR enable bits */
	gpio_iooff_t		ocr;		/* &OCRx */
} gpio_timer_t;

/*
 * No ADC channel
 */
#define	GPIO_NO_ADC		0xFF

/*
 * No timer
 */
#define	GPIO_NO_TIMER		0xFF

/*
 * Port data
 */
struct _gpio_port
{
#ifndef	OPT_SINGLE_DIGITAL_PORT
	gpio_iooff_t		ddr;		/* &DDRx */
	gpio_iooff_t		port;		/* &PORTx */
	gpio_iooff_t		pin;		/* &PINx */
#endif
};

struct _gpio_pin
{
	/* Digital */
	uint8_t			bitmask;	/* Register value bitmask */
#ifndef	OPT_SINGLE_DIGITAL_PORT
	struct _gpio_port	p;		/* Port context */
#endif

	/* ADC */
	uint8_t			mux;		/* ADC channel selection */

	/* PWM */
	uint8_t			timer;
};

/*
 * No pin index.
 */
#define	GPIO_NO_PIN_INDEX	0xFF


extern const struct _gpio_pin PROGMEM	_gpio_pins[];
extern const uint8_t PROGMEM		_gpio_analog_to_digital_pins[];
extern const struct _gpio_port PROGMEM	_gpio_ports[];
extern const struct _gpio_timer PROGMEM	_gpio_timers[];


extern uint8_t			_gpio_adc_reference;


gpio_value_t			_gpio_adc_read(uint8_t mux);
void				_gpio_adc_select(uint8_t mux);

void				_gpio_pwm_start(uint8_t index, gpio_value_t value);
void				_gpio_pwm_stop(uint8_t index);


#ifndef	GPIO_VALUE_MAX
#define	GPIO_VALUE_MAX		0xFFFF
#define	GPIO_VALUE_TO_8BIT(v)	((v) >> 8)
#define	GPIO_VALUE_TO_10BIT(v)	((v) >> 6)
#define	GPIO_VALUE_TO_16BIT(v)	(v)
#endif

#ifdef  __cplusplus
}
#endif

#endif	/* !__gpio_private_h */
