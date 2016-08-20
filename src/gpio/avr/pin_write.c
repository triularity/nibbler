/*
 * @(#) pin_write.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_pin_write
(
	gpio_pin_t pin,
	gpio_state_t state
)
{
	const gpio_timer_t *	timer;
	gpio_ioreg8_t		port;


	pin = _gpio_pgm_cache_pin(pin);
//_gpio_pin_dump(pin);

	if(pin->port != GPIO_NO_REGISTER)
	{
		port = OFFSET_TO_REG8(pin->port);

		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = pin->timer) != GPIO_NO_TIMER)
			_gpio_pwm_stop(timer);

		if(state)
			*port |= pin->bitmask;
		else
			*port &= ~pin->bitmask;
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
