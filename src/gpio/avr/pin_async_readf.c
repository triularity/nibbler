/*
 * @(#) pin_async_readf.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_pin_async_readf
(
	gpio_pin_t pin,
	float *result
)
{
	/*
	 * Temp implementation until real async
	 */
	*result = gpio_pin_readf(pin);
}
