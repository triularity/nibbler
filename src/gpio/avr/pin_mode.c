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
	gpio_iooff_t		offset;
	gpio_ioptr8_t		ddr;
	uint8_t			bit;
	const gpio_timer_t *	timer;
	gpio_ioptr8_t		tccr;
	gpio_ioptr8_t		port;
	uint8_t			tccr_andmask;


	if((offset = PGM_IOOFF(pin->ddr)) == GPIO_NO_REGISTER)
		return;

	ddr = IOOFF_TO_PTR8(offset);
	bit = PGM_BYTE(pin->bitmask);

	/*
	 * Input+Pullup is best option for AVR
	 */
	if(mode == GPIO_MODE_POWERDOWN)
		mode = GPIO_MODE_INPUT_PULLUP;

	if(mode & GPIO_MODE_OUTPUT)
	{
		*ddr |= bit;
	}
	else
	{
		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = PGM_PTR(pin->timer)) != GPIO_NO_TIMER)
		{
			tccr = IOOFF_TO_PTR8(timer->tccr);
			tccr_andmask = timer->tccr_andmask;
			*tccr &= tccr_andmask;
		}

		*ddr &= ~bit;

		/* +Pullup */
		if(mode & GPIO_MODE_PULLUP)
		{
			port = IOOFF_TO_PTR8(PGM_IOOFF(pin->port));
			*port &= ~bit;
		}
	}

	return 1;
}
