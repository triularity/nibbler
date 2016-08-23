/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: attiny2313a_4313.avrspec
 *
 * Pin configuration for attiny2313a/attiny4313.
 */
#if	defined(__AVR_ATtiny2313A__) || defined(__AVR_ATtiny4313__)

#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#include "gpio_private.h"


uint8_t			_gpio_adc_reference = 0;

static const gpio_timer_t PROGMEM	_gpio_timers[] =
{
	/* timer_0A */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0A1)|(1<<COM0A0)),
		(1<<COM0A1),
		REG_TO_OFFSET(OCR0A)
	},
	/* timer_0B */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR0A),
		(uint8_t) ~((1<<COM0B1)|(1<<COM0B0)),
		(1<<COM0B1),
		REG_TO_OFFSET(OCR0B)
	},
	/* timer_1A */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1A1)|(1<<COM1A0)),
		(1<<COM1A1),
		REG_TO_OFFSET(OCR1A)
	},
	/* timer_1B */
	{
#ifndef	WITHOUT_HIRES_TIMERS
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR1A),
		(uint8_t) ~((1<<COM1B1)|(1<<COM1B0)),
		(1<<COM1B1),
		REG_TO_OFFSET(OCR1B)
	}
};

#define	timer_0A	_gpio_timers[0]
#define	timer_0B	_gpio_timers[1]
#define	timer_1A	_gpio_timers[2]
#define	timer_1B	_gpio_timers[3]


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PA0/PCINT8) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PA1/PCINT9) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PA2/PCINT10) */
	{
		REG_TO_OFFSET(DDRA),
		REG_TO_OFFSET(PORTA),
		REG_TO_OFFSET(PINA),
		(1 << 2), /* DDRA2/PORTA2/PINA2 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #3 - D3 (PB0/PCINT0) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 0), /* DDRB0/PORTB0/PINB0 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #4 - D4 (PB1/PCINT1) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 1), /* DDRB1/PORTB1/PINB1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #5 - D5 (PB2/OC0A/PCINT2) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 2), /* DDRB2/PORTB2/PINB2 */
		GPIO_NO_ADC,
		&timer_0A
	},

	/* #6 - D6 (PB3/OC1A/PCINT3) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 3), /* DDRB3/PORTB3/PINB3 */
		GPIO_NO_ADC,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_1A
#else
		GPIO_NO_TIMER
#endif
	},

	/* #7 - D7 (PB4/OC1B/PCINT4) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 4), /* DDRB4/PORTB4/PINB4 */
		GPIO_NO_ADC,
#ifndef	WITHOUT_HIRES_TIMERS
		&timer_1B
#else
		GPIO_NO_TIMER
#endif
	},

	/* #8 - D8 (PB5/PCINT5) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 5), /* DDRB5/PORTB5/PINB5 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #9 - D9 (PB6/PCINT6) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 6), /* DDRB6/PORTB6/PINB6 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #10 - D10 (PB7/PCINT7) */
	{
		REG_TO_OFFSET(DDRB),
		REG_TO_OFFSET(PORTB),
		REG_TO_OFFSET(PINB),
		(1 << 7), /* DDRB7/PORTB7/PINB7 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #11 - D11 (PD0/PCINT11) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 0), /* DDRD0/PORTD0/PIND0 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #12 - D12 (PD1/PCINT12) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 1), /* DDRD1/PORTD1/PIND1 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #13 - D13 (PD2/PCINT13) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 2), /* DDRD2/PORTD2/PIND2 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #14 - D14 (PD3/PCINT14) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 3), /* DDRD3/PORTD3/PIND3 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #15 - D15 (PD4/PCINT15) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 4), /* DDRD4/PORTD4/PIND4 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #16 - D16 (PD5/OC0B/PCINT16) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 5), /* DDRD5/PORTD5/PIND5 */
		GPIO_NO_ADC,
		&timer_0B
	},

	/* #17 - D17 (PD6/PCINT17) */
	{
		REG_TO_OFFSET(DDRD),
		REG_TO_OFFSET(PORTD),
		REG_TO_OFFSET(PIND),
		(1 << 6), /* DDRD6/PORTD6/PIND6 */
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	}
};


const uint8_t PROGMEM		_gpio_analog_to_digital_pins[GPIO_ANALOG_PIN_COUNT] =
{
};

#endif	/* __AVR_ATtiny2313A__ || __AVR_ATtiny4313__ */
