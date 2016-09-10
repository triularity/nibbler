/*
 * @(#) port_write.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_port_write
(
	gpio_port_t port,
	uint8_t value
)
{
#ifndef	OPT_SINGLE_PIN
	*(IOOFF_TO_PTR8(PGM_IOOFF(port->pin))) = value;
#else
	(void) port; /* Quiet unused parameter */
	OPT_SINGLE_PIN = value;
#endif
}
