/*
 * @(#) debounce/init.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdlib.h>

#include <nibbler/debounce.h>

#include "debounce_private.h"


void
debounce_init
(
	debounce_t *debounce,
	uint16_t delay,
	uint32_t (*get_time)(void)
)
{
	if(get_time == NULL)
		get_time = DEBOUNCE_DEFAULT_GET_TIME;

	debounce->delay = delay;
	debounce->active = 0;
	debounce->get_time = get_time;
}
