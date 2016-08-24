/*
 * @(#) pin_async_readv.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_pin_async_readv
(
	gpio_pin_t pin,
	gpio_value_t *result
)
{
	/*
	 * Temp implementation until real async
	 */
	*result = gpio_pin_readv(pin);
}
