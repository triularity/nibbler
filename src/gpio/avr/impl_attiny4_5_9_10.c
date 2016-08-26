/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny4_5_9_10.avrspec
 *
 * Pin configuration for attiny4/attiny5/attiny9/attiny10.
 */
#if	defined(__AVR_ATtiny4__) || defined(__AVR_ATtiny5__) || defined(__AVR_ATtiny9__) || defined(__AVR_ATtiny10__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;

const gpio_timer_t PROGMEM	_gpio_timers[] =
{
	/* timer_0A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
		(1<<COM0A1),
		REG_TO_OFFSET(OCR0A)
	},

	/* timer_0B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
		(1<<COM0B1),
		REG_TO_OFFSET(OCR0B)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0/A0 (PB0/ADC0/OC0A/PCINT0) */
	{
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINB)
#endif
		},
		0,
		0 /* timer_0A */
	},

	/* #1 - D1/A1 (PB1/ADC1/OC0B/PCINT1) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINB)
#endif
		},
		1,
		1 /* timer_0B */
	},

	/* #2 - D2/A2 (PB2/ADC2/PCINT2) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINB)
#endif
		},
		2,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A3 (PB3/ADC3/PCINT3) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINB)
#endif
		},
		3,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	0,	/* A0 -> D0 */
	1,	/* A1 -> D1 */
	2,	/* A2 -> D2 */
	3	/* A3 -> D3 */
};

#endif	/* __AVR_ATtiny4__ || __AVR_ATtiny5__ || __AVR_ATtiny9__ || __AVR_ATtiny10__ */
