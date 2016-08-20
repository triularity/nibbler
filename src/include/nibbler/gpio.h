/*
 * @(#) nibbler/gpio.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__nibbler__gpio_h
#define	__nibbler__gpio_h

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif

#define	GPIO_API_VERSION	1

/*
 * Pin modes
 */
#define	GPIO_MODE_INPUT		0x00	/* Input */
#define	GPIO_MODE_OUTPUT	0x01	/* Output */
#define	GPIO_MODE_PULLUP	0x02	/* Internal pullup */
#define	GPIO_MODE_INPUT_PULLUP	0x03	/* Input with internal pullup */
#define	GPIO_MODE_POWERDOWN	0xFF	/* Best low power mode */

/*
 * Digital state
 */
typedef	uint8_t			gpio_state_t;

#define	GPIO_LOW		0x00
#define	GPIO_HIGH		0x01

/*
 * Analog value
 */
typedef	uint16_t		gpio_value_t;

/*
 * Resolved pin
 */
typedef	struct _gpio_pin *	gpio_pin_t;

#define	GPIO_NO_PIN		((gpio_pin_t) 0)


void				gpio_init(void);

gpio_pin_t			gpio_get_analog(uint8_t pinno);
uint8_t				gpio_get_analog_count(void);
gpio_pin_t			gpio_get_digital(uint8_t pinno);
uint8_t				gpio_get_digital_count(void);

gpio_value_t			gpio_get_max_value(void);

uint8_t				gpio_pin_async_done(gpio_pin_t pin);
void				gpio_pin_async_readf(gpio_pin_t pin, float *result);
void				gpio_pin_async_readv(gpio_pin_t pin, gpio_value_t *result);

uint8_t				gpio_pin_mode(gpio_pin_t pin, uint8_t mode);
gpio_state_t			gpio_pin_read(gpio_pin_t pin);
float				gpio_pin_readf(gpio_pin_t pin);
gpio_value_t			gpio_pin_readv(gpio_pin_t pin);
void				gpio_pin_write(gpio_pin_t pin, gpio_state_t state);
void				gpio_pin_writef(gpio_pin_t pin, float value);
void				gpio_pin_writev(gpio_pin_t pin, gpio_value_t value);

void				gpio_set_reference(uint8_t reference);

#ifdef  __cplusplus
}
#endif

#endif	/* !__nibbler__gpio_h */
