/*
 * @(#) get_digital_count.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_get_digital_count(void)
{
	return GPIO_PIN_COUNT;
}
