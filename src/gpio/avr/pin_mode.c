/*
 * @(#) pin_mode.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_pin_mode
(
	gpio_pin_t pin,
	uint8_t mode
)
{
	gpio_iooff_t		offset;
	gpio_ioptr8_t		ddr;
	uint8_t			bit;
	const gpio_timer_t *	timer;
	gpio_ioptr8_t		port;


	/*
	 * Not a digital pin?
	 */
	if((offset = PGM_IOOFF(pin->ddr)) == GPIO_NO_REGISTER)
		return 0;

	ddr = IOOFF_TO_PTR8(offset);
	bit = PGM_BYTE(pin->bitmask);

	/*
	 * Input+Pullup is best low power option for AVR
	 */
	if(mode == GPIO_MODE_POWERDOWN)
		mode = GPIO_MODE_INPUT_PULLUP;

	if(mode & GPIO_MODE_OUTPUT)
	{
		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			*ddr |= bit;
		}
	}
	else
	{
		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = PGM_PTR(pin->timer)) != GPIO_NO_TIMER)
			_gpio_pwm_stop(timer);

		port = IOOFF_TO_PTR8(PGM_IOOFF(pin->port));

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			*ddr &= ~bit;

			/* +Pullup? */
			if(mode & GPIO_MODE_PULLUP)
				*port |= bit;
			else
				*port &= ~bit;
		}
	}

	return 1;
}
