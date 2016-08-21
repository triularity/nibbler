/*
 * @(#) debounce/clear.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/debounce.h>


void
debounce_clear
(
	debounce_t *debounce
)
{
	debounce->active = 0;
}
