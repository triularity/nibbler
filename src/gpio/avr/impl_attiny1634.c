/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny1634.avrspec
 *
 * Pin configuration for attiny1634.
 */
#if	defined(__AVR_ATtiny1634__)

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
	},
	/* timer_1A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1A1)|(1<<COM1A0)),
		(1<<COM1A1),
		REG_TO_OFFSET(OCR1A)
	},
	/* timer_1B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
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
	/* #0 - D0 (PA0/PCINT0) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PA1/PCINT1) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PA2/PCINT2) */
	{
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A0 (PA3/ADC0/PCINT3) */
	{
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		0,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A1 (PA4/ADC1/PCINT4) */
	{
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		1,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A2 (PA5/ADC2/OC0B/PCINT5) */
	{
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		2,
		1 /* timer_0B */
	},

	/* #6 - D6/A3 (PA6/ADC3/OC1B/PCINT6) */
	{
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		3,
		3 /* timer_1B */
	},

	/* #7 - D7/A4 (PA7/ADC4/PCINT7) */
	{
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		4,
		GPIO_NO_TIMER
	},

	/* #8 - D8/A5 (PB0/ADC5/PCINT8) */
	{
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		5,
		GPIO_NO_TIMER
	},

	/* #9 - D9/A6 (PB1/ADC6/PCINT9) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		6,
		GPIO_NO_TIMER
	},

	/* #10 - D10/A7 (PB2/ADC7/PCINT10) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		7,
		GPIO_NO_TIMER
	},

	/* #11 - D11/A8 (PB3/ADC8/OC1A/PCINT11) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		8,
		2 /* timer_1A */
	},

	/* #12 - D12/A9 (PC0/ADC9/OC0A/PCINT12) */
	{
		(1 << 0), /* DDRC0/PORTC0/PINC0 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		9,
		0 /* timer_0A */
	},

	/* #13 - D13/A10 (PC1/ADC10/PCINT13) */
	{
		(1 << 1), /* DDRC1/PORTC1/PINC1 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		10,
		GPIO_NO_TIMER
	},

	/* #14 - D14/A11 (PC2/ADC11/PCINT14) */
	{
		(1 << 2), /* DDRC2/PORTC2/PINC2 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		11,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PC4/PCINT16) */
	{
		(1 << 4), /* DDRC4/PORTC4/PINC4 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PC5/PCINT17) */
	{
		(1 << 5), /* DDRC5/PORTC5/PINC5 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 - D17 (PC3/PCINT15) */
	{
		(1 << 3), /* DDRC3/PORTC3/PINC3 */
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	3,	/* A0 -> D3 */
	4,	/* A1 -> D4 */
	5,	/* A2 -> D5 */
	6,	/* A3 -> D6 */
	7,	/* A4 -> D7 */
	8,	/* A5 -> D8 */
	9,	/* A6 -> D9 */
	10,	/* A7 -> D10 */
	11,	/* A8 -> D11 */
	12,	/* A9 -> D12 */
	13,	/* A10 -> D13 */
	14	/* A11 -> D14 */
};

#endif	/* __AVR_ATtiny1634__ */
