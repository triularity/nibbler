/*
 * @(#) get_port.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_port_t
gpio_get_port
(
	uint8_t portno
)
{
	if(portno >= GPIO_PORT_COUNT)
		return GPIO_NO_PORT;

	return (gpio_port_t) &_gpio_ports[portno];
}
