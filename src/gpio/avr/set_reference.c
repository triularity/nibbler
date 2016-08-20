/*
 * @(#) set_reference.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_set_reference
(
	uint8_t reference
)
{
	_gpio_adc_reference = reference;
}
