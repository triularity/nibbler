/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   attiny2313a_4313.avrspec
 *
 * Pin configuration for attiny2313a/attiny4313.
 */
#if	defined(__AVR_ATtiny2313A__) || defined(__AVR_ATtiny4313__)

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


const struct _gpio_port PROGMEM	_gpio_ports[GPIO_PORT_COUNT] =
{
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA)
	},
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB)
	},
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PA0/PCINT8) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PA1/PCINT9) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PA2/PCINT10) */
	{
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #3 - D3 (PB0/PCINT0) */
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
		GPIO_NO_TIMER
	},

	/* #4 - D4 (PB1/PCINT1) */
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
		GPIO_NO_TIMER
	},

	/* #5 - D5 (PB2/OC0A/PCINT2) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
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

	/* #6 - D6 (PB3/OC1A/PCINT3) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[2] - &_gpio_timers[0] /* timer_1A */
	},

	/* #7 - D7 (PB4/OC1B/PCINT4) */
	{
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[3] - &_gpio_timers[0] /* timer_1B */
	},

	/* #8 - D8 (PB5/PCINT5) */
	{
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 - D9 (PB6/PCINT6) */
	{
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PB7/PCINT7) */
	{
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PD0/PCINT11) */
	{
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #12 - D12 (PD1/PCINT12) */
	{
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #13 - D13 (PD2/PCINT13) */
	{
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #14 - D14 (PD3/PCINT14) */
	{
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PD4/PCINT15) */
	{
		(1 << 4), /* DDRD4/PORTD4/PIND4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PD5/OC0B/PCINT16) */
	{
		(1 << 5), /* DDRD5/PORTD5/PIND5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[1] - &_gpio_timers[0] /* timer_0B */
	},

	/* #17 - D17 (PD6/PCINT17) */
	{
		(1 << 6), /* DDRD6/PORTD6/PIND6 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
};

#endif	/* __AVR_ATtiny2313A__ || __AVR_ATtiny4313__ */
