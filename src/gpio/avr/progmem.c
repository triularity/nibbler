/*
 * @(#) progmem.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <avr/pgmspace.h>

#include "gpio_private.h"


static gpio_pin_t		pgm_pin = (gpio_pin_t) 0;
static struct _gpio_pin		ram_pin;

static const gpio_timer_t *	pgm_timer = (gpio_timer_t *) 0;
static gpio_timer_t		ram_timer;


gpio_pin_t
_gpio_pgm_cache_pin
(
	gpio_pin_t pin
)
{
	if(pgm_pin != pin)
	{
		memcpy_P(&ram_pin, pin, sizeof(ram_pin));
		pgm_pin = pin;
	}

	return &ram_pin;
}


const gpio_timer_t *
_gpio_pgm_cache_timer
(
	const gpio_timer_t * timer
)
{
	if(pgm_timer != timer)
	{
		memcpy_P(&ram_timer, timer, sizeof(ram_timer));
		pgm_timer = timer;
	}

	return &ram_timer;
}
