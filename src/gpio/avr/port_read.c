/*
 * @(#) port_read.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_port_read
(
	gpio_port_t port
)
{
#ifndef	OPT_SINGLE_PIN
	return *(IOOFF_TO_PTR8(PGM_IOOFF(port->pin)));
#else
	(void) port; /* Quiet unused parameter */
	return OPT_SINGLE_PIN;
#endif
}
