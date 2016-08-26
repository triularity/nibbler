/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny48_88.avrspec
 *
 * Pin configuration for attiny48/attiny88.
 */
#if	defined(__AVR_ATtiny48__) || defined(__AVR_ATtiny88__)

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
	/* #0 - D0 (PB0/PCINT0) */
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

	/* #1 - D1 (PB1/OC1A/PCINT1) */
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
		0 /* timer_1A */
	},

	/* #2 - D2 (PB2/OC1B/PCINT2) */
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
		1 /* timer_1B */
	},

	/* #3 - D3 (PB3/PCINT3) */
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

	/* #4 - D4 (PB4/PCINT4) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #5 - D5 (PB5/PCINT5) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #6 - D6 (PB6/PCINT6) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #7 - D7 (PB7/PCINT7) */
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
		GPIO_NO_TIMER
	},

	/* #8 - D8 (PC6/PCINT14) */
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
		GPIO_NO_TIMER
	},

	/* #9 - D9 (PC7/PCINT15) */
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
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PD0/PCINT16) */
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
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PD1/PCINT17) */
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

	/* #12 - D12 (PD2/PCINT18) */
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

	/* #13 - D13 (PD3/PCINT19) */
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

	/* #14 - D14 (PD4/PCINT20) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PD5/PCINT21) */
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

	/* #16 - D16 (PD7/PCINT23) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 - D17/A0 (PC0/ADC0/PCINT8) */
	{
		(1 << 0), /* DDRC0/PORTC0/PINC0 */
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
		0,
		GPIO_NO_TIMER
	},

	/* #18 - D18/A1 (PC1/ADC1/PCINT9) */
	{
		(1 << 1), /* DDRC1/PORTC1/PINC1 */
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
		1,
		GPIO_NO_TIMER
	},

	/* #19 - D19/A2 (PC2/ADC2/PCINT10) */
	{
		(1 << 2), /* DDRC2/PORTC2/PINC2 */
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
		2,
		GPIO_NO_TIMER
	},

	/* #20 - D20/A3 (PC3/ADC3/PCINT11) */
	{
		(1 << 3), /* DDRC3/PORTC3/PINC3 */
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
		3,
		GPIO_NO_TIMER
	},

	/* #21 - D21/A4 (PC4/ADC4/PCINT12) */
	{
		(1 << 4), /* DDRC4/PORTC4/PINC4 */
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
		4,
		GPIO_NO_TIMER
	},

	/* #22 - D22/A5 (PC5/ADC5/PCINT13) */
	{
		(1 << 5), /* DDRC5/PORTC5/PINC5 */
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
		5,
		GPIO_NO_TIMER
	},

	/* #23 - D23/A6 (PA0/ADC6/PCINT24) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINA)
#endif
		},
		6,
		GPIO_NO_TIMER
	},

	/* #24 - D24/A7 (PA1/ADC7/PCINT25) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
		{
#ifndef	OPT_SINGLE_DDR
			REG_TO_OFFSET(DDRA),
#endif
#ifndef	OPT_SINGLE_PORT
			REG_TO_OFFSET(PORTA),
#endif
#ifndef	OPT_SINGLE_PIN
			REG_TO_OFFSET(PINA)
#endif
		},
		7,
		GPIO_NO_TIMER
	},

	/* #25 - D25 (PD6/PCINT22) */
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
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	17,	/* A0 -> D17 */
	18,	/* A1 -> D18 */
	19,	/* A2 -> D19 */
	20,	/* A3 -> D20 */
	21,	/* A4 -> D21 */
	22,	/* A5 -> D22 */
	23,	/* A6 -> D23 */
	24	/* A7 -> D24 */
};

#endif	/* __AVR_ATtiny48__ || __AVR_ATtiny88__ */
