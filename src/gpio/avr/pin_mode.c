/*
 * @(#) pin_mode.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_pin_mode
(
	gpio_pin_t pin,
	uint8_t mode
)
{
	uint8_t		bitmask;


	/*
	 * Not a digital pin?
	 */
	if((bitmask = PGM_BYTE(pin->bitmask)) == 0)
		return 0;

	return gpio_port_mode(&pin->p, bitmask, mode);
}
