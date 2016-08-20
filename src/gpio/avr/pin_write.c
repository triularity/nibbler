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
	gpio_iooff_t		offset;
	gpio_ioptr8_t		port;
	uint8_t			bitmask;
	const gpio_timer_t *	timer;


//_gpio_pin_dump(pin);
	if((offset = PGM_IOOFF(pin->port)) != GPIO_NO_REGISTER)
	{
		port = IOOFF_TO_PTR8(offset);
		bitmask = PGM_BYTE(pin->bitmask);

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			if(state)
				*port |= bitmask;
			else
				*port &= ~bitmask;
		}

		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = PGM_PTR(pin->timer)) != GPIO_NO_TIMER)
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
