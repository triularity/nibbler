/*
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Make changes to: atmega640_1280_1281_2560_2561.avrspec
 *
 * Pin configuration for atmega640/atmega1280/atmega1281/atmega2560/atmega2561.
 */
#if	defined(__AVR_ATmega640__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__) || defined(__AVR_ATmega2560__) || defined(__AVR_ATmega2561__)

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

	/* timer_2B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_8BIT,
#endif
		REG_TO_OFFSET(TCCR2A),
		(uint8_t) ~((1<<COM2B1)|(1<<COM2B0)),
		(1<<COM2B1),
		REG_TO_OFFSET(OCR2B)
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
	},

	/* timer_4A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR4A),
		(uint8_t) ~((1<<COM4A1)|(1<<COM4A0)),
		(1<<COM4A1),
		REG_TO_OFFSET(OCR4A)
	},

	/* timer_4B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR4A),
		(uint8_t) ~((1<<COM4B1)|(1<<COM4B0)),
		(1<<COM4B1),
		REG_TO_OFFSET(OCR4B)
	},

	/* timer_4C */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR4A),
		(uint8_t) ~((1<<COM4C1)|(1<<COM4C0)),
		(1<<COM4C1),
		REG_TO_OFFSET(OCR4C)
	},

	/* timer_5A */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR5A),
		(uint8_t) ~((1<<COM5A1)|(1<<COM5A0)),
		(1<<COM5A1),
		REG_TO_OFFSET(OCR5A)
	},

	/* timer_5B */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR5A),
		(uint8_t) ~((1<<COM5B1)|(1<<COM5B0)),
		(1<<COM5B1),
		REG_TO_OFFSET(OCR5B)
	},

	/* timer_5C */
	{
#ifndef	OPT_TIMER_SINGLETYPE
		GPIO_TIMER_TYPE_16BIT,
#endif
		REG_TO_OFFSET(TCCR5A),
		(uint8_t) ~((1<<COM5C1)|(1<<COM5C0)),
		(1<<COM5C1),
		REG_TO_OFFSET(OCR5C)
	}
};


const struct _gpio_pin PROGMEM	_gpio_pins[GPIO_PIN_COUNT] =
{
	/* #0 - D0 (PE0/PCINT8) */
	{
		(1 << 0), /* DDRE0/PORTE0/PINE0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #1 - D1 (PE1) */
	{
		(1 << 1), /* DDRE1/PORTE1/PINE1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #2 - D2 (PE4/OC3B) */
	{
		(1 << 4), /* DDRE4/PORTE4/PINE4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		7 /* timer_3B */
	},

	/* #3 - D3 (PE5/OC3C) */
	{
		(1 << 5), /* DDRE5/PORTE5/PINE5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		8 /* timer_3C */
	},

	/* #4 - D4 (PG5/OC0B) */
	{
		(1 << 5), /* DDRG5/PORTG5/PING5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		1 /* timer_0B */
	},

	/* #5 - D5 (PE3/OC3A) */
	{
		(1 << 3), /* DDRE3/PORTE3/PINE3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		6 /* timer_3A */
	},

	/* #6 - D6 (PH3/OC4A) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 3), /* DDRH3/PORTH3/PINH3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		9 /* timer_4A */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #7 - D7 (PH4/OC4B) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 4), /* DDRH4/PORTH4/PINH4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		10 /* timer_4B */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #8 - D8 (PH5/OC4C) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 5), /* DDRH5/PORTH5/PINH5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		11 /* timer_4C */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #9 - D9 (PH6/OC2B) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 6), /* DDRH6/PORTH6/PINH6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		5 /* timer_2B */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #10 - D10 (PB4/OC2A/PCINT4) */
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
		4 /* timer_2A */
	},

	/* #11 - D11 (PB5/OC1A/PCINT5) */
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
		2 /* timer_1A */
	},

	/* #12 - D12 (PB6/OC1B/PCINT6) */
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
		3 /* timer_1B */
	},

	/* #13 - D13 (PB7/OC0A/PCINT7) */
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
		0 /* timer_0A */
	},

	/* #14 - D14 (PJ1/PCINT10) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 1), /* DDRJ1/PORTJ1/PINJ1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #15 - D15 (PJ0/PCINT9) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 0), /* DDRJ0/PORTJ0/PINJ0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #16 - D16 (PH1) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 1), /* DDRH1/PORTH1/PINH1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #17 - D17 (PH0) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 0), /* DDRH0/PORTH0/PINH0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #18 - D18 (PD3) */
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

	/* #19 - D19 (PD2) */
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

	/* #20 - D20 (PD1) */
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

	/* #21 - D21 (PD0) */
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

	/* #22 - D22 (PA0) */
	{
		(1 << 0), /* DDRA0/PORTA0/PINA0 */
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

	/* #23 - D23 (PA1) */
	{
		(1 << 1), /* DDRA1/PORTA1/PINA1 */
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

	/* #24 - D24 (PA2) */
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

	/* #25 - D25 (PA3) */
	{
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
	},

	/* #26 - D26 (PA4) */
	{
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
	},

	/* #27 - D27 (PA5) */
	{
		(1 << 5), /* DDRA5/PORTA5/PINA5 */
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

	/* #28 - D28 (PA6) */
	{
		(1 << 6), /* DDRA6/PORTA6/PINA6 */
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

	/* #29 - D29 (PA7) */
	{
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
	},

	/* #30 - D30 (PC7) */
	{
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
	},

	/* #31 - D31 (PC6) */
	{
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
	},

	/* #32 - D32 (PC5) */
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

	/* #33 - D33 (PC4) */
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

	/* #34 - D34 (PC3) */
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

	/* #35 - D35 (PC2) */
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

	/* #36 - D36 (PC1) */
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

	/* #37 - D37 (PC0) */
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

	/* #38 - D38 (PD7) */
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
		GPIO_NO_TIMER
	},

	/* #39 - D39 (PG2) */
	{
		(1 << 2), /* DDRG2/PORTG2/PING2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #40 - D40 (PG1) */
	{
		(1 << 1), /* DDRG1/PORTG1/PING1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #41 - D41 (PG0) */
	{
		(1 << 0), /* DDRG0/PORTG0/PING0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #42 - D42 (PL7) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 7), /* DDRL7/PORTL7/PINL7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #43 - D43 (PL6) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 6), /* DDRL6/PORTL6/PINL6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #44 - D44 (PL5/OC5C) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 5), /* DDRL5/PORTL5/PINL5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		14 /* timer_5C */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #45 - D45 (PL4/OC5B) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 4), /* DDRL4/PORTL4/PINL4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		13 /* timer_5B */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #46 - D46 (PL3/OC5A) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 3), /* DDRL3/PORTL3/PINL3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		12 /* timer_5A */
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #47 - D47 (PL2) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 2), /* DDRL2/PORTL2/PINL2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #48 - D48 (PL1) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 1), /* DDRL1/PORTL1/PINL1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #49 - D49 (PL0) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 0), /* DDRL0/PORTL0/PINL0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRL),
			REG_TO_OFFSET(PORTL),
			REG_TO_OFFSET(PINL)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #50 - D50 (PB3/PCINT3) */
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
		GPIO_NO_TIMER
	},

	/* #51 - D51 (PB2/PCINT2) */
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

	/* #52 - D52 (PB1/PCINT1) */
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

	/* #53 - D53 (PB0/PCINT0) */
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

	/* #54 - D54/A0 (PF0/ADC0) */
	{
		(1 << 0), /* DDRF0/PORTF0/PINF0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		0,
		GPIO_NO_TIMER
	},

	/* #55 - D55/A1 (PF1/ADC1) */
	{
		(1 << 1), /* DDRF1/PORTF1/PINF1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		1,
		GPIO_NO_TIMER
	},

	/* #56 - D56/A2 (PF2/ADC2) */
	{
		(1 << 2), /* DDRF2/PORTF2/PINF2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		2,
		GPIO_NO_TIMER
	},

	/* #57 - D57/A3 (PF3/ADC3) */
	{
		(1 << 3), /* DDRF3/PORTF3/PINF3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		3,
		GPIO_NO_TIMER
	},

	/* #58 - D58/A4 (PF4/ADC4) */
	{
		(1 << 4), /* DDRF4/PORTF4/PINF4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		4,
		GPIO_NO_TIMER
	},

	/* #59 - D59/A5 (PF5/ADC5) */
	{
		(1 << 5), /* DDRF5/PORTF5/PINF5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		5,
		GPIO_NO_TIMER
	},

	/* #60 - D60/A6 (PF6/ADC6) */
	{
		(1 << 6), /* DDRF6/PORTF6/PINF6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		6,
		GPIO_NO_TIMER
	},

	/* #61 - D61/A7 (PF7/ADC7) */
	{
		(1 << 7), /* DDRF7/PORTF7/PINF7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRF),
			REG_TO_OFFSET(PORTF),
			REG_TO_OFFSET(PINF)
		},
#endif
		7,
		GPIO_NO_TIMER
	},

	/* #62 - D62/A8 (PK0/ADC8/PCINT16) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 0), /* DDRK0/PORTK0/PINK0 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		32,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #63 - D63/A9 (PK1/ADC9/PCINT17) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 1), /* DDRK1/PORTK1/PINK1 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		33,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #64 - D64/A10 (PK2/ADC10/PCINT18) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 2), /* DDRK2/PORTK2/PINK2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		34,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #65 - D65/A11 (PK3/ADC11/PCINT19) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 3), /* DDRK3/PORTK3/PINK3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		35,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #66 - D66/A12 (PK4/ADC12/PCINT20) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 4), /* DDRK4/PORTK4/PINK4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		36,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #67 - D67/A13 (PK5/ADC13/PCINT21) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 5), /* DDRK5/PORTK5/PINK5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		37,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #68 - D68/A14 (PK6/ADC14/PCINT22) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 6), /* DDRK6/PORTK6/PINK6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		38,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #69 - D69/A15 (PK7/ADC15/PCINT23) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 7), /* DDRK7/PORTK7/PINK7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRK),
			REG_TO_OFFSET(PORTK),
			REG_TO_OFFSET(PINK)
		},
#endif
		39,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #70 - D70 (PD4) */
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
		GPIO_NO_TIMER
	},

	/* #71 - D71 (PD5) */
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
		GPIO_NO_TIMER
	},

	/* #72 - D72 (PD6) */
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

	/* #73 - D73 (PE2) */
	{
		(1 << 2), /* DDRE2/PORTE2/PINE2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #74 - D74 (PE6) */
	{
		(1 << 6), /* DDRE6/PORTE6/PINE6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #75 - D75 (PE7) */
	{
		(1 << 7), /* DDRE7/PORTE7/PINE7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRE),
			REG_TO_OFFSET(PORTE),
			REG_TO_OFFSET(PINE)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
	},

	/* #76 - D76 (PH2) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 2), /* DDRH2/PORTH2/PINH2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #77 - D77 (PH7) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 7), /* DDRH7/PORTH7/PINH7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRH),
			REG_TO_OFFSET(PORTH),
			REG_TO_OFFSET(PINH)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #78 - D78 (PJ2/PCINT11) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 2), /* DDRJ2/PORTJ2/PINJ2 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #79 - D79 (PJ3/PCINT12) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 3), /* DDRJ3/PORTJ3/PINJ3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #80 - D80 (PJ4/PCINT13) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 4), /* DDRJ4/PORTJ4/PINJ4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #81 - D81 (PJ5/PCINT14) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 5), /* DDRJ5/PORTJ5/PINJ5 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #82 - D82 (PJ6/PCINT15) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 6), /* DDRJ6/PORTJ6/PINJ6 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #83 - D83 (PJ7) */
	{
#if	!defined(__AVR_ATmega1281__) && !defined(__AVR_ATmega2561__)
		(1 << 7), /* DDRJ7/PORTJ7/PINJ7 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRJ),
			REG_TO_OFFSET(PORTJ),
			REG_TO_OFFSET(PINJ)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
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
#endif	/* !__AVR_ATmega1281__ && !__AVR_ATmega2561__ */
	},

	/* #84 - D84 (PG3/TOSC2) */
	{
#if	defined(WITHOUT_CRYSTAL_OSCILLATOR)
		(1 << 3), /* DDRG3/PORTG3/PING3 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_CRYSTAL_OSCILLATOR */
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
#endif	/* WITHOUT_CRYSTAL_OSCILLATOR */
	},

	/* #85 - D85 (PG4/TOSC1) */
	{
#if	defined(WITHOUT_CRYSTAL_OSCILLATOR)
		(1 << 4), /* DDRG4/PORTG4/PING4 */
#ifndef	OPT_SINGLE_DIGITAL_PORT
		{
			REG_TO_OFFSET(DDRG),
			REG_TO_OFFSET(PORTG),
			REG_TO_OFFSET(PING)
		},
#endif
		GPIO_NO_ADC,
		GPIO_NO_TIMER
#else	/* WITHOUT_CRYSTAL_OSCILLATOR */
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
#endif	/* WITHOUT_CRYSTAL_OSCILLATOR */
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
	61,	/* A7 -> D61 */
	62,	/* A8 -> D62 */
	63,	/* A9 -> D63 */
	64,	/* A10 -> D64 */
	65,	/* A11 -> D65 */
	66,	/* A12 -> D66 */
	67,	/* A13 -> D67 */
	68,	/* A14 -> D68 */
	69	/* A15 -> D69 */
};

#endif	/* __AVR_ATmega640__ || __AVR_ATmega1280__ || __AVR_ATmega1281__ || __AVR_ATmega2560__ || __AVR_ATmega2561__ */
