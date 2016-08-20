/*
 * @(#) get_digital.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_pin_t
gpio_get_digital
(
	uint8_t pinno
)
{
	if(pinno >= GPIO_PIN_COUNT)
		return GPIO_NO_PIN;

	return (gpio_pin_t) &_gpio_pins[pinno];
}
