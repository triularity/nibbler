/*
 * @(#) pin_write.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_pin_write
(
	gpio_pin_t pin,
	gpio_state_t state
)
{
	uint8_t		bitmask;
	uint8_t		timer;

#ifdef	OPT_SINGLE_PORT
#define	_PORT	OPT_SINGLE_PORT
#else
	gpio_ioptr8_t	port;
#define	_PORT	*port
#endif


//_gpio_pin_dump(pin);
	/*
	 * Not a digital pin?
	 */
	if((bitmask = PGM_BYTE(pin->bitmask)) != 0)
	{
#ifndef	OPT_SINGLE_PORT
		port = IOOFF_TO_PTR8(PGM_IOOFF(pin->port));
#endif

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			if(state)
				_PORT |= bitmask;
			else
				_PORT &= ~bitmask;
		}

		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = PGM_BYTE(pin->timer)) != GPIO_NO_TIMER)
			_gpio_pwm_stop(timer);
	}
	else
	{
		/*
		 * TODO?
		 * - In the unlikely event that there is no PORT register,
		 * - but there is a timer, we could set the PWM to 100%
		 * - duty when HIGH.
		 */
	}
}
