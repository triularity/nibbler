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

/*
 * I/O register conversions
 */
typedef	volatile uint8_t *	gpio_ioreg8_t;
typedef	volatile uint16_t *	gpio_ioreg16_t;

#ifdef	OPT_HIGH_IOM
typedef	uint16_t		gpio_ioaddr_t;
#define	REG_TO_OFFSET(reg)	((gpio_ioaddr_t) &(reg))
#else
typedef	uint8_t			gpio_ioaddr_t;
#define	REG_TO_OFFSET(reg)	((gpio_ioaddr_t) (uint16_t) &(reg))
#endif

#define	OFFSET_TO_REG8(offset)	((gpio_ioreg8_t) (uint16_t) (offset))
#define	OFFSET_TO_REG16(offset)	((gpio_ioreg16_t) (uint16_t) (offset))

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
	gpio_ioaddr_t		tccr;		/* &TCCRx */
	uint8_t			tccr_andmask;	/* TCCR AND bitmask */
	uint8_t			tccr_enable;	/* TCCR enable bits */
	gpio_ioaddr_t		ocr;		/* &OCRx */
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
	gpio_ioaddr_t		ddr;		/* &DDRx */
	gpio_ioaddr_t		port;		/* &PORTx */
	gpio_ioaddr_t		pin;		/* &PINx */
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
