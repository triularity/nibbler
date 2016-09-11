/*
 * @(#) pin_readf.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


float
gpio_pin_readf
(
	gpio_pin_t pin
)
{
	return (float) gpio_pin_readv(pin) / (float) GPIO_VALUE_MAX;
}
