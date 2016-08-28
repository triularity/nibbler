/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: atmega16u4_32u4.avrspec
 *
 * Pin configuration for atmega16u4/atmega32u4.
 */
#if	defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__)

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
	},

	/* timer_3A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR3A),
		(uint8_t) ~((1<<COM3A1)|(1<<COM3A0)),
		(1<<COM3A1),
		REG_TO_OFFSET(OCR3A)
	},

	/* timer_4A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_10BIT,
#endif
		REG_TO_OFFSET(TCCR4A),
		(uint8_t) ~((1<<COM4A1)|(1<<COM4A0)),
		(1<<COM4A1),
		REG_TO_OFFSET(OCR4A)
	},

	/* timer_4D */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_10BIT,
#endif
		REG_TO_OFFSET(TCCR4A),
		(uint8_t) ~((1<<COM4D1)|(1<<COM4D0)),
		(1<<COM4D1),
		REG_TO_OFFSET(OCR4D)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PD2) */
	{
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PD3) */
	{
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PD1) */
	{
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #3 - D3 (PD0/OC0B) */
	{
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		1 /* timer_0B */
	},

	/* #4 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #5 - D5 (PC6/OC3A) */
	{
		(1 << 6), /* DDRC6/PORTC6/PINC6 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		4 /* timer_3A */
	},

	/* #6 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #7 - D7 (PE6) */
	{
		(1 << 6), /* DDRE6/PORTE6/PINE6 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRE),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTE),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #8 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PB7/OC0A/PCINT7) */
	{
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
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
		GPIO_NO_ADC,
		0 /* timer_0A */
	},

	/* #12 -  */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #13 - D13 (PC7/OC4A) */
	{
		(1 << 7), /* DDRC7/PORTC7/PINC7 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		5 /* timer_4A */
	},

	/* #14 - D14 (PB3/PCINT3) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PB1/PCINT1) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PB2/PCINT2) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 - D17 (PB0/PCINT0) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #18 - D18/A0 (PF7/ADC7) */
	{
		(1 << 7), /* DDRF7/PORTF7/PINF7 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		7,
		GPIO_NO_TIMER
	},

	/* #19 - D19/A1 (PF6/ADC6) */
	{
		(1 << 6), /* DDRF6/PORTF6/PINF6 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		6,
		GPIO_NO_TIMER
	},

	/* #20 - D20/A2 (PF5/ADC5) */
	{
		(1 << 5), /* DDRF5/PORTF5/PINF5 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		5,
		GPIO_NO_TIMER
	},

	/* #21 - D21/A3 (PF4/ADC4) */
	{
		(1 << 4), /* DDRF4/PORTF4/PINF4 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		4,
		GPIO_NO_TIMER
	},

	/* #22 - D22/A4 (PF1/ADC1) */
	{
		(1 << 1), /* DDRF1/PORTF1/PINF1 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		1,
		GPIO_NO_TIMER
	},

	/* #23 - D23/A5 (PF0/ADC0) */
	{
		(1 << 0), /* DDRF0/PORTF0/PINF0 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRF),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTF),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINF)
#endif
		},
		0,
		GPIO_NO_TIMER
	},

	/* #24 - D24/A6 (PD4/ADC8) */
	{
		(1 << 4), /* DDRD4/PORTD4/PIND4 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		32,
		GPIO_NO_TIMER
	},

	/* #25 - D25/A7 (PD7/ADC10/OC4D) */
	{
		(1 << 7), /* DDRD7/PORTD7/PIND7 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		34,
		6 /* timer_4D */
	},

	/* #26 - D26/A8 (PB4/ADC11/PCINT4) */
	{
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
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
		35,
		GPIO_NO_TIMER
	},

	/* #27 - D27/A9 (PB5/ADC12/OC1A/PCINT5) */
	{
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
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
		36,
		2 /* timer_1A */
	},

	/* #28 - D28/A10 (PB6/ADC13/OC1B/PCINT6) */
	{
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
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
		37,
		3 /* timer_1B */
	},

	/* #29 - D29/A11 (PD6/ADC9) */
	{
		(1 << 6), /* DDRD6/PORTD6/PIND6 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		33,
		GPIO_NO_TIMER
	},

	/* #30 - D30 (PD5) */
	{
		(1 << 5), /* DDRD5/PORTD5/PIND5 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PIND)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #31 - D31 (PE2) */
	{
		(1 << 2), /* DDRE2/PORTE2/PINE2 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRE),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTE),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #32 - A12 (ADC_TMP) */
	{
		0,
		{
#ifndef	OPT_SINGLE_DDR
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PORT
			GPIO_NO_REGISTER,
#endif
#ifndef	OPT_SINGLE_PIN
			GPIO_NO_REGISTER
#endif
		},
		39,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	18,	/* A0 -> D18 */
	19,	/* A1 -> D19 */
	20,	/* A2 -> D20 */
	21,	/* A3 -> D21 */
	22,	/* A4 -> D22 */
	23,	/* A5 -> D23 */
	24,	/* A6 -> D24 */
	25,	/* A7 -> D25 */
	26,	/* A8 -> D26 */
	27,	/* A9 -> D27 */
	28,	/* A10 -> D28 */
	29,	/* A11 -> D29 */
	32	/* A12 */
};

#endif	/* __AVR_ATmega16U4__ || __AVR_ATmega32U4__ */
