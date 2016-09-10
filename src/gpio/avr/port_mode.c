/*
 * @(#) port_mode.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_port_mode
(
	gpio_port_t port,
	uint8_t bitmask,
	uint8_t mode
)
{
#ifdef	OPT_SINGLE_DIGITAL_PORT
#define	_DDR	OPT_SINGLE_DDR
#define	_PORT	OPT_SINGLE_PORT
#else
	gpio_ioptr8_t	ddr;
	gpio_ioptr8_t	reg_port;

#define	_DDR	*ddr
#define	_PORT	*reg_port
#endif


#ifndef	OPT_SINGLE_DDR
	ddr = IOOFF_TO_PTR8(PGM_IOOFF(port->ddr));
#else
	(void) port; /* Quiet unused parameter */
#endif

	/*
	 * Input+Pullup is best low power option for AVR
	 */
	if(mode == GPIO_MODE_POWERDOWN)
		mode = GPIO_MODE_INPUT_PULLUP;

	if(mode & GPIO_MODE_OUTPUT)
	{
		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			_DDR |= bitmask;
		}
	}
	else
	{
#ifndef	OPT_SINGLE_PORT
		reg_port = IOOFF_TO_PTR8(PGM_IOOFF(port->port));
#endif

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			_DDR &= ~bitmask;

			/* +Pullup? */
			if(mode & GPIO_MODE_PULLUP)
				_PORT |= bitmask;
			else
				_PORT &= ~bitmask;
		}
	}

	return 1;
}
