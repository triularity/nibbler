/*
 * @(#) pin_async_done.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_pin_async_done
(
	gpio_pin_t pin
)
{
	(void) pin; /* Quiet unused parameter */

	return (_gpio_adc_async_pin == GPIO_NO_PIN);
}
