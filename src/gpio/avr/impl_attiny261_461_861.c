/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny261_461_861.avrspec
 *
 * Pin configuration for attiny261/attiny461/attiny861.
 */
#if	defined(__AVR_ATtiny261__) || defined(__AVR_ATtiny461__) || defined(__AVR_ATtiny861__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;

const gpio_timer_t PROGMEM	_gpio_timers[] =
{
	/* timer_1A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_10BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1A1)|(1<<COM1A0)),
		(1<<COM1A1),
		REG_TO_OFFSET(OCR1A)
	},

	/* timer_1B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_10BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1B1)|(1<<COM1B0)),
		(1<<COM1B1),
		REG_TO_OFFSET(OCR1B)
	},

	/* timer_1D */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_10BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1D1)|(1<<COM1D0)),
		(1<<COM1D1),
		REG_TO_OFFSET(OCR1D)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0/A0 (PA0/ADC0/PCINT0) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		0,
		GPIO_NO_TIMER
	},

	/* #1 - D1/A1 (PA1/ADC1/PCINT1) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		1,
		GPIO_NO_TIMER
	},

	/* #2 - D2/A2 (PA2/ADC2/PCINT2) */
	{
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		2,
		GPIO_NO_TIMER
	},

	/* #3 - D3 (PA3/PCINT3) */
	{
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A3 (PA4/ADC3/PCINT4) */
	{
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		3,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A4 (PA5/ADC4/PCINT5) */
	{
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		4,
		GPIO_NO_TIMER
	},

	/* #6 - D6/A5 (PA6/ADC5/PCINT6) */
	{
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		5,
		GPIO_NO_TIMER
	},

	/* #7 - D7/A6 (PA7/ADC6/PCINT7) */
	{
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINA),
#endif
		6,
		GPIO_NO_TIMER
	},

	/* #8 - D8 (PB0/PCINT8) */
	{
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 - D9 (PB1/OC1A/PCINT9) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		GPIO_NO_ADC,
		0 /* timer_1A */
	},

	/* #10 - D10 (PB2/PCINT10) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PB3/OC1B/PCINT11) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		GPIO_NO_ADC,
		1 /* timer_1B */
	},

	/* #12 - D12/A7 (PB4/ADC7/PCINT12) */
	{
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		7,
		GPIO_NO_TIMER
	},

	/* #13 - D13/A8 (PB5/ADC8/OC1D/PCINT13) */
	{
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		8,
		2 /* timer_1D */
	},

	/* #14 - D14/A9 (PB6/ADC9/PCINT14) */
	{
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		9,
		GPIO_NO_TIMER
	},

	/* #15 - D15/A10 (PB7/ADC10/PCINT15) */
	{
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRB),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTB),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINB),
#endif
		10,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	0,	/* A0 -> D0 */
	1,	/* A1 -> D1 */
	2,	/* A2 -> D2 */
	4,	/* A3 -> D4 */
	5,	/* A4 -> D5 */
	6,	/* A5 -> D6 */
	7,	/* A6 -> D7 */
	12,	/* A7 -> D12 */
	13,	/* A8 -> D13 */
	14,	/* A9 -> D14 */
	15	/* A10 -> D15 */
};

#endif	/* __AVR_ATtiny261__ || __AVR_ATtiny461__ || __AVR_ATtiny861__ */
