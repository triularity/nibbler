/*
 * @(#) pin_writev.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

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
	const gpio_timer_t *	timer;
	gpio_state_t		state;
	gpio_iooff_t		offset;
	gpio_ioptr8_t		port;
	uint8_t			bitmask;


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
	else if((timer = PGM_PTR(pin->timer)) != GPIO_NO_TIMER)
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

	if((offset = PGM_IOOFF(pin->port)) != GPIO_NO_REGISTER)
	{
		port = IOOFF_TO_PTR8(offset);
		bitmask = PGM_BYTE(pin->bitmask);

		if(state)
			*port |= bitmask;
		else
			*port &= ~bitmask;
	}
}
