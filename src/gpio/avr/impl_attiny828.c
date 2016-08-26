/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny828.avrspec
 *
 * Pin configuration for attiny828.
 */
#if	defined(__AVR_ATtiny828__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;


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

	/* #3 - D3/A3 (PA3/ADC3/PCINT3) */
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
		3,
		GPIO_NO_TIMER
	},

	/* #4 - D4/A4 (PA4/ADC4/PCINT4) */
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
		4,
		GPIO_NO_TIMER
	},

	/* #5 - D5/A5 (PA5/ADC5/PCINT5) */
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
		5,
		GPIO_NO_TIMER
	},

	/* #6 - D6/A6 (PA6/ADC6/PCINT6) */
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
		6,
		GPIO_NO_TIMER
	},

	/* #7 - D7/A7 (PA7/ADC7/PCINT7) */
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
		7,
		GPIO_NO_TIMER
	},

	/* #8 - D8/A8 (PB0/ADC8/PCINT8) */
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
		8,
		GPIO_NO_TIMER
	},

	/* #9 - D9/A9 (PB1/ADC9/PCINT9) */
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
		9,
		GPIO_NO_TIMER
	},

	/* #10 - D10/A10 (PB2/ADC10/PCINT10) */
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
		10,
		GPIO_NO_TIMER
	},

	/* #11 - D11/A11 (PB3/ADC11/PCINT11) */
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
		11,
		GPIO_NO_TIMER
	},

	/* #12 - D12/A12 (PB4/ADC12/PCINT12) */
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
		12,
		GPIO_NO_TIMER
	},

	/* #13 - D13/A13 (PB5/ADC13/PCINT13) */
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
		13,
		GPIO_NO_TIMER
	},

	/* #14 - D14/A14 (PB6/ADC14/PCINT14) */
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
		14,
		GPIO_NO_TIMER
	},

	/* #15 - D15/A15 (PB7/ADC15/PCINT15) */
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
		15,
		GPIO_NO_TIMER
	},

	/* #16 - D16/A16 (PC0/ADC16/PCINT16) */
	{
		(1 << 0), /* DDRC0/PORTC0/PINC0 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		16,
		GPIO_NO_TIMER
	},

	/* #17 - D17/A17 (PC1/ADC17/PCINT17) */
	{
		(1 << 1), /* DDRC1/PORTC1/PINC1 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		17,
		GPIO_NO_TIMER
	},

	/* #18 - D18/A18 (PC2/ADC18/PCINT18) */
	{
		(1 << 2), /* DDRC2/PORTC2/PINC2 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		10,
		GPIO_NO_TIMER
	},

	/* #19 - D19/A19 (PC3/ADC19/PCINT19) */
	{
		(1 << 3), /* DDRC3/PORTC3/PINC3 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		19,
		GPIO_NO_TIMER
	},

	/* #20 - D20/A20 (PC4/ADC20/PCINT20) */
	{
		(1 << 4), /* DDRC4/PORTC4/PINC4 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		20,
		GPIO_NO_TIMER
	},

	/* #21 - D21/A21 (PC5/ADC21/PCINT21) */
	{
		(1 << 5), /* DDRC5/PORTC5/PINC5 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		21,
		GPIO_NO_TIMER
	},

	/* #22 - D22/A22 (PC6/ADC22/PCINT22) */
	{
		(1 << 6), /* DDRC6/PORTC6/PINC6 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		22,
		GPIO_NO_TIMER
	},

	/* #23 - D23/A23 (PC7/ADC23/PCINT23) */
	{
		(1 << 7), /* DDRC7/PORTC7/PINC7 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRC),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTC),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PINC),
#endif
		23,
		GPIO_NO_TIMER
	},

	/* #24 - D24/A24 (PD0/ADC24/PCINT24) */
	{
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PIND),
#endif
		24,
		GPIO_NO_TIMER
	},

	/* #25 - D25/A25 (PD1/ADC25/PCINT25) */
	{
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PIND),
#endif
		25,
		GPIO_NO_TIMER
	},

	/* #26 - D26/A26 (PD2/ADC26/PCINT26) */
	{
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PIND),
#endif
		26,
		GPIO_NO_TIMER
	},

	/* #27 - D27/A27 (PD3/ADC27/PCINT27) */
	{
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
#ifndef	OPT_SINGLE_DDR
		REG_TO_OFFSET(DDRD),
#endif
#ifndef	OPT_SINGLE_PORT
		REG_TO_OFFSET(PORTD),
#endif
#ifndef	OPT_SINGLE_PIN
		REG_TO_OFFSET(PIND),
#endif
		27,
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
	7,	/* A7 -> D7 */
	8,	/* A8 -> D8 */
	9,	/* A9 -> D9 */
	10,	/* A10 -> D10 */
	11,	/* A11 -> D11 */
	12,	/* A12 -> D12 */
	13,	/* A13 -> D13 */
	14,	/* A14 -> D14 */
	15,	/* A15 -> D15 */
	16,	/* A16 -> D16 */
	17,	/* A17 -> D17 */
	18,	/* A18 -> D18 */
	19,	/* A19 -> D19 */
	20,	/* A20 -> D20 */
	21,	/* A21 -> D21 */
	22,	/* A22 -> D22 */
	23,	/* A23 -> D23 */
	24,	/* A24 -> D24 */
	25,	/* A25 -> D25 */
	26,	/* A26 -> D26 */
	27	/* A27 -> D27 */
};

#endif	/* __AVR_ATtiny828__ */
