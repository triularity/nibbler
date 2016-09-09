/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   atmega16_16a.avrspec
 *
 * Pin configuration for atmega16/atmega16a.
 */
#if	defined(__AVR_ATmega16__) || defined(__AVR_ATmega16A__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;

const gpio_timer_t PROGMEM	_gpio_timers[] =
{
	/* timer_0 */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0),
		(uint8_t) ~((1<<COM01)|(1<<COM00)),
		(1<<COM01),
		REG_TO_OFFSET(OCR0)
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
	},

	/* timer_2 */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR2),
		(uint8_t) ~((1<<COM21)|(1<<COM20)),
		(1<<COM21),
		REG_TO_OFFSET(OCR2)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0/A0 (PA0/ADC0) */
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

	/* #1 - D1/A1 (PA1/ADC1) */
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
		GPIO_NO_TIMER
	},

	/* #2 - D2/A2 (PA2/ADC2) */
	{
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		2,
		GPIO_NO_TIMER
	},

	/* #3 - D3/A3 (PA3/ADC3) */
	{
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		3,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A4 (PA4/ADC4) */
	{
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		4,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A5 (PA5/ADC5) */
	{
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		5,
		GPIO_NO_TIMER
	},

	/* #6 - D6/A6 (PA6/ADC6) */
	{
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		6,
		GPIO_NO_TIMER
	},

	/* #7 - D7/A7 (PA7/ADC7) */
	{
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRA),
			REG_TO_OFFSET(PORTA),
			REG_TO_OFFSET(PINA)
		},
#endif
		7,
		GPIO_NO_TIMER
	},

	/* #8 - D8 (PB0) */
	{
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 - D9 (PB1) */
	{
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PB2) */
	{
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PB3/OC0) */
	{
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		0 /* timer_0 */
	},

	/* #12 - D12 (PB4) */
	{
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #13 - D13 (PB5) */
	{
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #14 - D14 (PB6) */
	{
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PB7) */
	{
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRB),
			REG_TO_OFFSET(PORTB),
			REG_TO_OFFSET(PINB)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PC0) */
	{
		(1 << 0), /* DDRC0/PORTC0/PINC0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 - D17 (PC1) */
	{
		(1 << 1), /* DDRC1/PORTC1/PINC1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #18 - D18 (PC2) */
	{
		(1 << 2), /* DDRC2/PORTC2/PINC2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #19 - D19 (PC3) */
	{
		(1 << 3), /* DDRC3/PORTC3/PINC3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #20 - D20 (PC4) */
	{
		(1 << 4), /* DDRC4/PORTC4/PINC4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #21 - D21 (PC5) */
	{
		(1 << 5), /* DDRC5/PORTC5/PINC5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #22 - D22 (PD0) */
	{
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #23 - D23 (PD1) */
	{
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #24 - D24 (PD2) */
	{
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #25 - D25 (PD3) */
	{
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #26 - D26 (PD4/OC1B) */
	{
		(1 << 4), /* DDRD4/PORTD4/PIND4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		2 /* timer_1B */
	},

	/* #27 - D27 (PD5/OC1A) */
	{
		(1 << 5), /* DDRD5/PORTD5/PIND5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		1 /* timer_1A */
	},

	/* #28 - D28 (PD6) */
	{
		(1 << 6), /* DDRD6/PORTD6/PIND6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #29 - D29 (PD7/OC2) */
	{
		(1 << 7), /* DDRD7/PORTD7/PIND7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRD),
			REG_TO_OFFSET(PORTD),
			REG_TO_OFFSET(PIND)
		},
#endif
		GPIO_NO_ADC,
		3 /* timer_2 */
	},

	/* #30 - D30 (PC6/TOSC1) */
	{
#if	defined(WITHOUT_EXTERNAL_OSCILLATOR)
		(1 << 6), /* DDRC6/PORTC6/PINC6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_EXTERNAL_OSCILLATOR */
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
#endif	/* WITHOUT_EXTERNAL_OSCILLATOR */
	},

	/* #31 - D31 (PC7/TOSC2) */
	{
#if	defined(WITHOUT_EXTERNAL_OSCILLATOR)
		(1 << 7), /* DDRC7/PORTC7/PINC7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_EXTERNAL_OSCILLATOR */
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
#endif	/* WITHOUT_EXTERNAL_OSCILLATOR */
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

#endif	/* __AVR_ATmega16__ || __AVR_ATmega16A__ */
