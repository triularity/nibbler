/*
 * @(#) init.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <avr/io.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


void
gpio_init
(
	void
)
{
	/*
	 * Make sure pullups aren't globally disabled
	 */
#if	defined(OPT_SFIOR_PUD)
	SFIOR &= ~(1<<PUD);
#elif	defined(OPT_MCUCR_PUD)
	MCUCR &= ~(1<<PUD);
#elif	defined(PUD)
#error	PUD defined with unmapped register
#endif

	/*
	 * Enable all per-port pullups
	 */
#ifdef	PUEA
	PUEA = 0xFF;
#endif

#ifdef	PUEB
	PUEB = 0xFF;
#endif

#ifdef	PUEC
	PUEC = 0xFF;
#endif

#ifdef	PUED
	PUED = 0xFF;
#endif

#ifdef	PUEE
#error	PUEE is not supported yet
#endif
}
