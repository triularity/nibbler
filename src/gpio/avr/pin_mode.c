/*
 * @(#) pin_mode.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


uint8_t
gpio_pin_mode
(
	gpio_pin_t pin,
	uint8_t mode
)
{
	gpio_ioreg8_t		ddr;
	uint8_t			bit;
	const gpio_timer_t *	timer;
	gpio_ioreg8_t		tccr;
	gpio_ioreg8_t		port;
	uint8_t			tccr_andmask;


	pin = _gpio_pgm_cache_pin(pin);

	/*
	 * Input+Pullup is best option for AVR
	 */
	if(mode == GPIO_MODE_POWERDOWN)
		mode = GPIO_MODE_INPUT_PULLUP;

	ddr = OFFSET_TO_REG8(pin->ddr);
	bit = pin->bitmask;

	if(mode & GPIO_MODE_OUTPUT)
	{
		*ddr |= bit;
	}
	else
	{
		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = pin->timer) != GPIO_NO_TIMER)
		{
			tccr = OFFSET_TO_REG8(timer->tccr);
			tccr_andmask = timer->tccr_andmask;
			*tccr &= tccr_andmask;
		}

		*ddr &= ~bit;

		/* +Pullup */
		if(mode & GPIO_MODE_PULLUP)
		{
			port = OFFSET_TO_REG8(pin->port);
			*port &= ~bit;
		}
	}

	return 1;
}
