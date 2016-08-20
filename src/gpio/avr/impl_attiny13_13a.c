/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Pin configuration for attiny13/attiny13a.
 */
#if	defined(__AVR_ATtiny13__) || defined(__AVR_ATtiny13A__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;


static const gpio_timer_t PROGMEM	timer_0A =
{
#ifndef	WITHOUT_HIRES_TIMERS
	GPIO_TIMER_TYPE_8BIT,
#endif
	REG_TO_OFFSET(TCCR0A),
	(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
	(1<<COM0A1),
	REG_TO_OFFSET(OCR0A)
};

static const gpio_timer_t PROGMEM	timer_0B =
{
#ifndef	WITHOUT_HIRES_TIMERS
	GPIO_TIMER_TYPE_8BIT,
#endif
	REG_TO_OFFSET(TCCR0A),
	(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
	(1<<COM0B1),
	REG_TO_OFFSET(OCR0B)
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PB0/OC0A/PCINT0) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		GPIO_NO_ADC,
		&timer_0A
	},

	/* #1 - D1 (PB1/OC0B/PCINT1) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		GPIO_NO_ADC,
		&timer_0B
	},

	/* #2 - D2/A1 (PB2/ADC1/PCINT2) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		1,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A3 (PB3/ADC3/PCINT3) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		3,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A2 (PB4/ADC2/PCINT4) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
		2,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A0 (PB5/ADC0/PCINT5) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
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
