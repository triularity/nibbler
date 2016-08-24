/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny24a_44a_84a.avrspec
 *
 * Pin configuration for attiny24a/attiny44a/attiny84a.
 */
#if	defined(__AVR_ATtiny24A__) || defined(__AVR_ATtiny44A__) || defined(__AVR_ATtiny84A__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;

const gpio_timer_t PROGMEM	_gpio_timers[] =
{
	/* timer_0A */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
		(1<<COM0A1),
		REG_TO_OFFSET(OCR0A)
	},
	/* timer_0B */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
		(1<<COM0B1),
		REG_TO_OFFSET(OCR0B)
	},
	/* timer_1A */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1A1)|(1<<COM1A0)),
		(1<<COM1A1),
		REG_TO_OFFSET(OCR1A)
	},
	/* timer_1B */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1B1)|(1<<COM1B0)),
		(1<<COM1B1),
		REG_TO_OFFSET(OCR1B)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0/A0 (PA0/ADC0/PCINT0) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
		0,
		GPIO_NO_TIMER
	},

	/* #1 - D1/A1 (PA1/ADC1/PCINT1) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
		1,
		GPIO_NO_TIMER
	},

	/* #2 - D2/A2 (PA2/ADC2/PCINT2) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
		2,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A3 (PA3/ADC3/PCINT3) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
		3,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A4 (PA4/ADC4/PCINT4) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
		4,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A5 (PA5/ADC5/OC1B/PCINT5) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
		5,
#ifndef	WITHOUT_HIRES_TIMERS
		3 /* timer_1B */
#else
		GPIO_NO_TIMER
#endif
	},

	/* #6 - D6/A6 (PA6/ADC6/OC1A/PCINT6) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
		6,
#ifndef	WITHOUT_HIRES_TIMERS
		2 /* timer_1A */
#else
		GPIO_NO_TIMER
#endif
	},

	/* #7 - D7/A7 (PA7/ADC7/OC0B/PCINT7) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
		7,
		1 /* timer_0B */
	},

	/* #8 - D8 (PB2/OC0A/PCINT10) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		GPIO_NO_ADC,
		0 /* timer_0A */
	},

	/* #9 - D9 (PB1/PCINT9) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PB0/PCINT8) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PB3/PCINT11) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	0,	/* A0 -> D0 */
	1,	/* A1 -> D1 */
	2,	/* A2 -> D2 */
	3,	/* A3 -> D3 */
	4,	/* A4 -> D4 */
	5,	/* A5 -> D5 */
	6,	/* A6 -> D6 */
	7	/* A7 -> D7 */
};

#endif	/* __AVR_ATtiny24A__ || __AVR_ATtiny44A__ || __AVR_ATtiny84A__ */
