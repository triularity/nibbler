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


static const gpio_timer_t PROGMEM	timer_0A =
{
#ifndef	WITHOUT_HIRES_TIMERS
	GPIO_TIMER_TYPE_8BIT,
#endif
	REG_TO_OFFSET(TCCR0A),
	(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
	(1<<COM0A1),
	REG_TO_OFFSET(OCR0A)
};

static const gpio_timer_t PROGMEM	timer_0B =
{
#ifndef	WITHOUT_HIRES_TIMERS
	GPIO_TIMER_TYPE_8BIT,
#endif
	REG_TO_OFFSET(TCCR0A),
	(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
	(1<<COM0B1),
	REG_TO_OFFSET(OCR0B)
};

#ifndef	WITHOUT_HIRES_TIMERS
static const gpio_timer_t PROGMEM	timer_1A =
{
	GPIO_TIMER_TYPE_16BIT,
	REG_TO_OFFSET(TCCR1A),
	(uint8_t) ~((1<<COM1A1)|(1<<COM1A0)),
	(1<<COM1A1),
	REG_TO_OFFSET(OCR1A)
};
#endif	/* !WITHOUT_HIRES_TIMERS */

#ifndef	WITHOUT_HIRES_TIMERS
static const gpio_timer_t PROGMEM	timer_1B =
{
	GPIO_TIMER_TYPE_16BIT,
	REG_TO_OFFSET(TCCR1A),
	(uint8_t) ~((1<<COM1B1)|(1<<COM1B0)),
	(1<<COM1B1),
	REG_TO_OFFSET(OCR1B)
};
#endif	/* !WITHOUT_HIRES_TIMERS */

#ifndef	WITHOUT_HIRES_TIMERS
static const gpio_timer_t PROGMEM	timer_3A =
{
	GPIO_TIMER_TYPE_16BIT,
	REG_TO_OFFSET(TCCR3A),
	(uint8_t) ~((1<<COM3A1)|(1<<COM3A0)),
	(1<<COM3A1),
	REG_TO_OFFSET(OCR3A)
};
#endif	/* !WITHOUT_HIRES_TIMERS */

#ifndef	WITHOUT_HIRES_TIMERS
static const gpio_timer_t PROGMEM	timer_4A =
{
	GPIO_TIMER_TYPE_10BIT,
	REG_TO_OFFSET(TCCR4A),
	(uint8_t) ~((1<<COM4A1)|(1<<COM4A0)),
	(1<<COM4A1),
	REG_TO_OFFSET(OCR4A)
};
#endif	/* !WITHOUT_HIRES_TIMERS */

#ifndef	WITHOUT_HIRES_TIMERS
static const gpio_timer_t PROGMEM	timer_4D =
{
	GPIO_TIMER_TYPE_10BIT,
	REG_TO_OFFSET(TCCR4A),
	(uint8_t) ~((1<<COM4D1)|(1<<COM4D0)),
	(1<<COM4D1),
	REG_TO_OFFSET(OCR4D)
};
#endif	/* !WITHOUT_HIRES_TIMERS */


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PD2) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PD3) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PD1) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #3 - D3 (PD0/OC0B) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
		GPIO_NO_ADC,
		&timer_0B
	},

	/* #4 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #5 - D5 (PC6/OC3A) */
	{
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		(1 << 6), /* DDRC6/PORTC6/PINC6 */
		GPIO_NO_ADC,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_3A
#else
		GPIO_NO_TIMER
#endif
	},

	/* #6 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #7 - D7 (PE6) */
	{
		REG_TO_OFFSET(DDRE),
		REG_TO_OFFSET(PORTE),
		REG_TO_OFFSET(PINE),
		(1 << 6), /* DDRE6/PORTE6/PINE6 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #8 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PB7/OC0A/PCINT7) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
		GPIO_NO_ADC,
		&timer_0A
	},

	/* #12 -  */
	{
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		GPIO_NO_REGISTER,
		0,
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #13 - D13 (PC7/OC4A) */
	{
		REG_TO_OFFSET(DDRC),
		REG_TO_OFFSET(PORTC),
		REG_TO_OFFSET(PINC),
		(1 << 7), /* DDRC7/PORTC7/PINC7 */
		GPIO_NO_ADC,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_4A
#else
		GPIO_NO_TIMER
#endif
	},

	/* #14 - D14 (PB3/PCINT3) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PB1/PCINT1) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PB2/PCINT2) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #17 - D17 (PB0/PCINT0) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #18 - D18/A0 (PF7/ADC7) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 7), /* DDRF7/PORTF7/PINF7 */
		7,
		GPIO_NO_TIMER
	},

	/* #19 - D19/A1 (PF6/ADC6) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 6), /* DDRF6/PORTF6/PINF6 */
		6,
		GPIO_NO_TIMER
	},

	/* #20 - D20/A2 (PF5/ADC5) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 5), /* DDRF5/PORTF5/PINF5 */
		5,
		GPIO_NO_TIMER
	},

	/* #21 - D21/A3 (PF4/ADC4) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 4), /* DDRF4/PORTF4/PINF4 */
		4,
		GPIO_NO_TIMER
	},

	/* #22 - D22/A4 (PF1/ADC1) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 1), /* DDRF1/PORTF1/PINF1 */
		1,
		GPIO_NO_TIMER
	},

	/* #23 - D23/A5 (PF0/ADC0) */
	{
		REG_TO_OFFSET(DDRF),
		REG_TO_OFFSET(PORTF),
		REG_TO_OFFSET(PINF),
		(1 << 0), /* DDRF0/PORTF0/PINF0 */
		0,
		GPIO_NO_TIMER
	},

	/* #24 - D24/A6 (PD4/ADC8) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 4), /* DDRD4/PORTD4/PIND4 */
		32,
		GPIO_NO_TIMER
	},

	/* #25 - D25/A7 (PD7/ADC10/OC4D) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 7), /* DDRD7/PORTD7/PIND7 */
		34,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_4D
#else
		GPIO_NO_TIMER
#endif
	},

	/* #26 - D26/A8 (PB4/ADC11/PCINT4) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
		35,
		GPIO_NO_TIMER
	},

	/* #27 - D27/A9 (PB5/ADC12/OC1A/PCINT5) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
		36,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_1A
#else
		GPIO_NO_TIMER
#endif
	},

	/* #28 - D28/A10 (PB6/ADC13/OC1B/PCINT6) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
		37,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_1B
#else
		GPIO_NO_TIMER
#endif
	},

	/* #29 - D29/A11 (PD6/ADC9) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 6), /* DDRD6/PORTD6/PIND6 */
		33,
		GPIO_NO_TIMER
	},

	/* #30 - D30 (PD5) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 5), /* DDRD5/PORTD5/PIND5 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #31 - D31 (PE2) */
	{
		REG_TO_OFFSET(DDRE),
		REG_TO_OFFSET(PORTE),
		REG_TO_OFFSET(PINE),
		(1 << 2), /* DDRE2/PORTE2/PINE2 */
		GPIO_NO_ADC,
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
	29	/* A11 -> D29 */
};

#endif	/* __AVR_ATmega16U4__ || __AVR_ATmega32U4__ */
