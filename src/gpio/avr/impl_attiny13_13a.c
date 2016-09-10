/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   attiny13_13a.avrspec
 *
 * Pin configuration for attiny13/attiny13a.
 */
#if	defined(__AVR_ATtiny13__) || defined(__AVR_ATtiny13A__)

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
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
		(1<<COM0A1),
		REG_TO_OFFSET(OCR0A)
	},

	/* timer_0B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
		(1<<COM0B1),
		REG_TO_OFFSET(OCR0B)
	}
};


const struct _gpio_port PROGMEM	_gpio_ports[GPIO_PORT_COUNT] =
{
	{
#ifndef	OPT_SINGLE_DIGITAL_PORT
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB)
#endif
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PB0/OC0A/PCINT0) */
	{
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[0] - &_gpio_timers[0] /* timer_0A */
	},

	/* #1 - D1 (PB1/OC0B/PCINT1) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[1] - &_gpio_timers[0] /* timer_0B */
	},

	/* #2 - D2/A1 (PB2/ADC1/PCINT2) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		1,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A3 (PB3/ADC3/PCINT3) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		3,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A2 (PB4/ADC2/PCINT4) */
	{
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		2,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A0 (PB5/ADC0/PCINT5) */
	{
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		0,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	5,	/* A0 -> D5 */
	2,	/* A1 -> D2 */
	4,	/* A2 -> D4 */
	3	/* A3 -> D3 */
};

#endif	/* __AVR_ATtiny13__ || __AVR_ATtiny13A__ */
