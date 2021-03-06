/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   atmega640_1280_1281_2560_2561.avrspec
 *
 * Pin configuration for atmega1281.
 */
#if	defined(__AVR_ATmega1281__)

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

	/* timer_2A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR2A),
		(uint8_t) ~((1<<COM2A1)|(1<<COM2A0)),
		(1<<COM2A1),
		REG_TO_OFFSET(OCR2A)
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

	/* timer_3B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR3A),
		(uint8_t) ~((1<<COM3B1)|(1<<COM3B0)),
		(1<<COM3B1),
		REG_TO_OFFSET(OCR3B)
	},

	/* timer_3C */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR3A),
		(uint8_t) ~((1<<COM3C1)|(1<<COM3C0)),
		(1<<COM3C1),
		REG_TO_OFFSET(OCR3C)
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
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC)
	},
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND)
	},
	{
		REG_TO_OFFSET(DDRE),
		REG_TO_OFFSET(PORTE),
		REG_TO_OFFSET(PINE)
	},
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF)
	},
	{
		REG_TO_OFFSET(DDRG),
		REG_TO_OFFSET(PORTG),
		REG_TO_OFFSET(PING)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PE0/PCINT8) */
	{
		(1 << 0), /* DDRE0/PORTE0/PINE0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PE1) */
	{
		(1 << 1), /* DDRE1/PORTE1/PINE1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PE4/OC3B) */
	{
		(1 << 4), /* DDRE4/PORTE4/PINE4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[6] - &_gpio_timers[0] /* timer_3B */
	},

	/* #3 - D3 (PE5/OC3C) */
	{
		(1 << 5), /* DDRE5/PORTE5/PINE5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[7] - &_gpio_timers[0] /* timer_3C */
	},

	/* #4 - D4 (PG5/OC0B) */
	{
		(1 << 5), /* DDRG5/PORTG5/PING5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[1] - &_gpio_timers[0] /* timer_0B */
	},

	/* #5 - D5 (PE3/OC3A) */
	{
		(1 << 3), /* DDRE3/PORTE3/PINE3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		&_gpio_timers[5] - &_gpio_timers[0] /* timer_3A */
	},

	/* #6 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #7 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #8 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PB4/OC2A/PCINT4) */
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
		&_gpio_timers[4] - &_gpio_timers[0] /* timer_2A */
	},

	/* #11 - D11 (PB5/OC1A/PCINT5) */
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
		&_gpio_timers[2] - &_gpio_timers[0] /* timer_1A */
	},

	/* #12 - D12 (PB6/OC1B/PCINT6) */
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
		&_gpio_timers[3] - &_gpio_timers[0] /* timer_1B */
	},

	/* #13 - D13 (PB7/OC0A/PCINT7) */
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
		&_gpio_timers[0] - &_gpio_timers[0] /* timer_0A */
	},

	/* #14 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #18 - D18 (PD3) */
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

	/* #19 - D19 (PD2) */
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

	/* #20 - D20 (PD1) */
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

	/* #21 - D21 (PD0) */
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

	/* #22 - D22 (PA0) */
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

	/* #23 - D23 (PA1) */
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

	/* #24 - D24 (PA2) */
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

	/* #25 - D25 (PA3) */
	{
		(1 << 3), /* DDRA3/PORTA3/PINA3 */
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

	/* #26 - D26 (PA4) */
	{
		(1 << 4), /* DDRA4/PORTA4/PINA4 */
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

	/* #27 - D27 (PA5) */
	{
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
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

	/* #28 - D28 (PA6) */
	{
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
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

	/* #29 - D29 (PA7) */
	{
		(1 << 7), /* DDRA7/PORTA7/PINA7 */
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

	/* #30 - D30 (PC7) */
	{
		(1 << 7), /* DDRC7/PORTC7/PINC7 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #31 - D31 (PC6) */
	{
		(1 << 6), /* DDRC6/PORTC6/PINC6 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #32 - D32 (PC5) */
	{
		(1 << 5), /* DDRC5/PORTC5/PINC5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #33 - D33 (PC4) */
	{
		(1 << 4), /* DDRC4/PORTC4/PINC4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #34 - D34 (PC3) */
	{
		(1 << 3), /* DDRC3/PORTC3/PINC3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #35 - D35 (PC2) */
	{
		(1 << 2), /* DDRC2/PORTC2/PINC2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #36 - D36 (PC1) */
	{
		(1 << 1), /* DDRC1/PORTC1/PINC1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #37 - D37 (PC0) */
	{
		(1 << 0), /* DDRC0/PORTC0/PINC0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRC),
			REG_TO_OFFSET(PORTC),
			REG_TO_OFFSET(PINC)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #38 - D38 (PD7) */
	{
		(1 << 7), /* DDRD7/PORTD7/PIND7 */
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

	/* #39 - D39 (PG2) */
	{
		(1 << 2), /* DDRG2/PORTG2/PING2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #40 - D40 (PG1) */
	{
		(1 << 1), /* DDRG1/PORTG1/PING1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #41 - D41 (PG0) */
	{
		(1 << 0), /* DDRG0/PORTG0/PING0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #42 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #43 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #44 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #45 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #46 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #47 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #48 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #49 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #50 - D50 (PB3/PCINT3) */
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
		GPIO_NO_TIMER
	},

	/* #51 - D51 (PB2/PCINT2) */
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
		GPIO_NO_TIMER
	},

	/* #52 - D52 (PB1/PCINT1) */
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

	/* #53 - D53 (PB0/PCINT0) */
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

	/* #54 - D54/A0 (PF0/ADC0) */
	{
		(1 << 0), /* DDRF0/PORTF0/PINF0 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		0,
		GPIO_NO_TIMER
	},

	/* #55 - D55/A1 (PF1/ADC1) */
	{
		(1 << 1), /* DDRF1/PORTF1/PINF1 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		1,
		GPIO_NO_TIMER
	},

	/* #56 - D56/A2 (PF2/ADC2) */
	{
		(1 << 2), /* DDRF2/PORTF2/PINF2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		2,
		GPIO_NO_TIMER
	},

	/* #57 - D57/A3 (PF3/ADC3) */
	{
		(1 << 3), /* DDRF3/PORTF3/PINF3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		3,
		GPIO_NO_TIMER
	},

	/* #58 - D58/A4 (PF4/ADC4) */
	{
		(1 << 4), /* DDRF4/PORTF4/PINF4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		4,
		GPIO_NO_TIMER
	},

	/* #59 - D59/A5 (PF5/ADC5) */
	{
		(1 << 5), /* DDRF5/PORTF5/PINF5 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		5,
		GPIO_NO_TIMER
	},

	/* #60 - D60/A6 (PF6/ADC6) */
	{
		(1 << 6), /* DDRF6/PORTF6/PINF6 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		6,
		GPIO_NO_TIMER
	},

	/* #61 - D61/A7 (PF7/ADC7) */
	{
		(1 << 7), /* DDRF7/PORTF7/PINF7 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
#endif
		},
		7,
		GPIO_NO_TIMER
	},

	/* #62 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #63 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #64 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #65 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #66 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #67 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #68 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #69 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #70 - D70 (PD4) */
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

	/* #71 - D71 (PD5) */
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
		GPIO_NO_TIMER
	},

	/* #72 - D72 (PD6) */
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
	},

	/* #73 - D73 (PE2) */
	{
		(1 << 2), /* DDRE2/PORTE2/PINE2 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #74 - D74 (PE6) */
	{
		(1 << 6), /* DDRE6/PORTE6/PINE6 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #75 - D75 (PE7) */
	{
		(1 << 7), /* DDRE7/PORTE7/PINE7 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #76 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #77 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #78 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #79 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #80 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #81 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #82 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #83 */
	{
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #84 - D84 (PG3/TOSC2) */
	{
#if	defined(WITHOUT_EXTERNAL_OSCILLATOR)
		(1 << 3), /* DDRG3/PORTG3/PING3 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_EXTERNAL_OSCILLATOR */
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* WITHOUT_EXTERNAL_OSCILLATOR */
	},

	/* #85 - D85 (PG4/TOSC1) */
	{
#if	defined(WITHOUT_EXTERNAL_OSCILLATOR)
		(1 << 4), /* DDRG4/PORTG4/PING4 */
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_EXTERNAL_OSCILLATOR */
		0,
		{
#ifndef	OPT_SINGLE_DIGITAL_PORT
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER,
			GPIO_NO_REGISTER
#endif
		},
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#endif	/* WITHOUT_EXTERNAL_OSCILLATOR */
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
	54,	/* A0 -> D54 */
	55,	/* A1 -> D55 */
	56,	/* A2 -> D56 */
	57,	/* A3 -> D57 */
	58,	/* A4 -> D58 */
	59,	/* A5 -> D59 */
	60,	/* A6 -> D60 */
	61	/* A7 -> D61 */
};

#endif	/* __AVR_ATmega1281__ */
