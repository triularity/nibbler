/*
 * @(#) gpio_private.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__gpio_private_h
#define	__gpio_private_h

#include <stdint.h>
#include <avr/pgmspace.h>
#include <nibbler/gpio.h>

#include "avr_options.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define	PGM_PTR(x)		((void *) pgm_read_word(&(x)))
#define	PGM_BYTE(x)		pgm_read_byte(&(x))
#define	PGM_WORD(x)		pgm_read_word(&(x))

/*
 * I/O register conversions
 */
typedef	volatile uint8_t *	gpio_ioptr8_t;
typedef	volatile uint16_t *	gpio_ioptr16_t;

#ifdef	OPT_HIGH_IOM
typedef	uint16_t		gpio_iooff_t;
#define	REG_TO_OFFSET(reg)	((gpio_iooff_t) &(reg))
#define	PGM_IOOFF(x)		PGM_WORD(x)
#else
typedef	uint8_t			gpio_iooff_t;
#define	REG_TO_OFFSET(reg)	((gpio_iooff_t) (uint16_t) &(reg))
#define	PGM_IOOFF(x)		PGM_BYTE(x)
#endif

#define	IOOFF_TO_PTR8(offset)	((gpio_ioptr8_t) (uint16_t) (offset))
#define	IOOFF_TO_PTR16(offset)	((gpio_ioptr16_t) (uint16_t) (offset))

/*
 * No register
 */
#define	GPIO_NO_REGISTER	0

/*
 * Timer type
 */
#ifndef	WITHOUT_HIRES_TIMERS
#define	GPIO_TIMER_TYPE_MASK	0x03
#define	GPIO_TIMER_TYPE_8BIT	0x00
#define	GPIO_TIMER_TYPE_10BIT	0x01
#define	GPIO_TIMER_TYPE_16BIT	0x02
#endif

typedef struct _gpio_timer
{
#ifndef	WITHOUT_HIRES_TIMERS
	uint8_t			flags;
#endif
	gpio_iooff_t		tccr;		/* &TCCRx */
	uint8_t			tccr_andmask;	/* TCCR AND bitmask */
	uint8_t			tccr_enable;	/* TCCR enable bits */
	gpio_iooff_t		ocr;		/* &OCRx */
} gpio_timer_t;

/*
 * No ADC channel
 */
#define	GPIO_NO_ADC		0xFF

/*
 * No timer
 */
#define	GPIO_NO_TIMER		((gpio_timer_t *) 0)

struct _gpio_pin
{
	/* Digital */
	gpio_iooff_t		ddr;		/* &DDRx */
	gpio_iooff_t		port;		/* &PORTx */
	gpio_iooff_t		pin;		/* &PINx */
	uint8_t			bitmask;	/* Register value bitmask */

	/* ADC */
	uint8_t			mux;		/* ADC channel selection */

	/* PWM */
	const gpio_timer_t *	timer;
};

/*
 * No pin index.
 */
#define	GPIO_NO_PIN_INDEX	0xFF


extern const struct _gpio_pin PROGMEM	_gpio_pins[];
extern const uint8_t PROGMEM		_gpio_analog_to_digital_pins[];


extern uint8_t			_gpio_adc_reference;


gpio_value_t			_gpio_adc_read(uint8_t mux);
void				_gpio_adc_select(uint8_t mux);

void				_gpio_pwm_start(const gpio_timer_t *timer, gpio_value_t value);
void				_gpio_pwm_stop(const gpio_timer_t *timer);

gpio_pin_t			_gpio_pgm_cache_pin(gpio_pin_t pin);
const gpio_timer_t *		_gpio_pgm_cache_timer(const gpio_timer_t * timer);


#ifndef	GPIO_VALUE_MAX
#define	GPIO_VALUE_MAX		0xFFFF
#define	GPIO_VALUE_TO_8BIT(v)	((v) >> 8)
#define	GPIO_VALUE_TO_10BIT(v)	((v) >> 6)
#define	GPIO_VALUE_TO_16BIT(v)	(v)
#endif

#ifdef  __cplusplus
}
#endif

#endif	/* !__gpio_private_h */
