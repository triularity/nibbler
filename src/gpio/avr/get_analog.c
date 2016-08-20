/*
 * @(#) get_analog.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_pin_t
gpio_get_analog
(
	uint8_t pinno
)
{
	uint8_t		index;


	if(pinno >= GPIO_ANALOG_PIN_COUNT)
		return GPIO_NO_PIN;

	index = pgm_read_byte_near(&_gpio_analog_to_digital_pins[pinno]);

	return (gpio_pin_t) &_gpio_pins[index];
}
