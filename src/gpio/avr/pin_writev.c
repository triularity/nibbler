/*
 * @(#) pin_writev.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <util/atomic.h>
#include <avr/pgmspace.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"
#include "debug.h"


void
gpio_pin_writev
(
	gpio_pin_t pin,
	gpio_value_t value
)
{
	gpio_state_t		state;
	uint8_t			timer;
	uint8_t			bitmask;

#ifdef	OPT_SINGLE_PORT
#define	_PORT	OPT_SINGLE_PORT
#else
	gpio_ioptr8_t		port;
#define	_PORT	*port
#endif


//_gpio_pin_dump(pin);

	if(value == 0)
	{
_nibbler_println(" *** Low");
		state = GPIO_LOW;
	}
	else if(value == GPIO_VALUE_MAX)
	{
_nibbler_println(" *** High");
		state = GPIO_HIGH;
	}
	else if((timer = PGM_BYTE(pin->timer)) != GPIO_NO_TIMER)
	{
		_gpio_pwm_start(timer, value);

		/*
		 * Force digital port LOW
		 */
		state = GPIO_LOW;
	}
	else
	{
_nibbler_println(" *** Snap");
		/*
		 * Snap to digital HIGH/LOW
		 */
		state = (value > (GPIO_VALUE_MAX / 2));
	}

	if((bitmask = PGM_BYTE(pin->bitmask)) != 0)
	{
#ifndef	OPT_SINGLE_PORT
		port = IOOFF_TO_PTR8(PGM_IOOFF(pin->p.port));
#endif

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			if(state)
				_PORT |= bitmask;
			else
				_PORT &= ~bitmask;
		}
	}
}
