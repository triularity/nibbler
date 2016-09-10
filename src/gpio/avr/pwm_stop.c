/*
 * @(#) pwm_stop.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


void
_gpio_pwm_stop
(
	uint8_t offset
)
{
	const gpio_timer_t *	timer;
	gpio_ioptr8_t		tccr;
	uint8_t			tccr_andmask;


	timer = (const gpio_timer_t *) (((char *) _gpio_timers) + offset);
//_gpio_timer_dump(timer);

	tccr = IOOFF_TO_PTR8(PGM_IOOFF(timer->tccr));
	tccr_andmask = PGM_BYTE(timer->tccr_andmask);

	ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
	{
		*tccr &= tccr_andmask;
	}
}
