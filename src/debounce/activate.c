/*
 * @(#) debounce/activate.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/debounce.h>


uint8_t
debounce_activate
(
	debounce_t *debounce
)
{
	uint32_t	now;


	now = debounce->get_time();

	if(debounce->active != 0)
	{
		if((now - debounce->start_time) < debounce->delay)
			return 0;
	}

	debounce->start_time = now;
	debounce->active = 1;

	return 1;
}
