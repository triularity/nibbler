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
	uint8_t			bitmask;
	uint8_t			timer;

#ifdef	OPT_SINGLE_DDR
#define	_DDR	OPT_SINGLE_DDR
#else
	gpio_ioptr8_t		ddr;
#define	_DDR	*ddr
#endif

#ifdef	OPT_SINGLE_PORT
#define	_PORT	OPT_SINGLE_PORT
#else
	gpio_ioptr8_t		port;
#define	_PORT	*port
#endif


	/*
	 * Not a digital pin?
	 */
	if((bitmask = PGM_BYTE(pin->bitmask)) == 0)
		return 0;

#ifndef	OPT_SINGLE_DDR
	ddr = IOOFF_TO_PTR8(PGM_IOOFF(pin->ddr));
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
		/*
		 * Turn off the PWM timer (in case it is running)
		 */
		if((timer = PGM_BYTE(pin->timer)) != GPIO_NO_TIMER)
			_gpio_pwm_stop(timer);

#ifndef	OPT_SINGLE_PORT
		port = IOOFF_TO_PTR8(PGM_IOOFF(pin->port));
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
