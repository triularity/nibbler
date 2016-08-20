/*
 * @(#) pin_writef.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_pin_writef
(
	gpio_pin_t pin,
	float value
)
{
	if(value >= 1.0f)
	{
		gpio_pin_write(pin, GPIO_HIGH);
	}
	else if(value <= 0.0f)
	{
		gpio_pin_write(pin, GPIO_LOW);
	}
	else
	{
		gpio_pin_writev(
			pin, (gpio_value_t) ((value * GPIO_VALUE_MAX) + 0.5f));
	}
}
