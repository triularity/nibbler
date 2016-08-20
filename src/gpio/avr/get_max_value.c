/*
 * @(#) get_max_value.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_value_t
gpio_get_max_value(void)
{
	return GPIO_VALUE_MAX;
}
