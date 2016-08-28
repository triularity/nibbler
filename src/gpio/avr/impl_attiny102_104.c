/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny102_104.avrspec
 *
 * Pin configuration for attiny102/attiny104.
 */
#if	defined(__AVR_ATtiny102__) || defined(__AVR_ATtiny104__)

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
	/* #0 - D0/A0 (PA0/ADC0/PCINT0) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		0,
		GPIO_NO_TIMER
	},

	/* #1 - D1/A1 (PA1/ADC1/OC0B/PCINT1) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		1,
		2 /* timer_0B */
	},

	/* #2 - D2/A2 (PB1/ADC5/OC0A/PCINT9) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		5,
		0 /* timer_0A */
	},

	/* #3 - D3/A3 (PB2/ADC6/PCINT10) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		6,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A4 (PB3/ADC7/PCINT11) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		7,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A5 (PB0/ADC4/PCINT8) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		4,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
	},

	/* #6 - D6 (PA2/PCINT2) */
	{
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #7 - D7/A6 (PA5/ADC2/PCINT5) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		2,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
	},

	/* #8 - D8/A7 (PA6/ADC3/PCINT6) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		3,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
	},

	/* #9 - D9 (PA3/PCINT3) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
	},

	/* #10 - D10 (PA4/PCINT4) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
	},

	/* #11 - D11 (PA7/PCINT7) */
	{
#if	!defined(__AVR_ATtiny102__)
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATtiny102__ */
		0,
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* !__AVR_ATtiny102__ */
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
	7,	/* A6 -> D7 */
	8	/* A7 -> D8 */
};

#endif	/* __AVR_ATtiny102__ || __AVR_ATtiny104__ */
