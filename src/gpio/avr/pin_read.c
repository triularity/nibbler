/*
 * @(#) pin_read.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_state_t
gpio_pin_read
(
	gpio_pin_t pin
)
{
	uint8_t		bitmask;
	uint8_t		mux;

#ifdef	OPT_SINGLE_PIN
#define	_PIN	OPT_SINGLE_PIN
#else
	gpio_ioptr8_t	reg;
#define	_PIN	*reg
#endif


	if((bitmask = PGM_BYTE(pin->bitmask)) != 0)
	{
#ifndef	OPT_SINGLE_PIN
		reg = IOOFF_TO_PTR8(PGM_IOOFF(pin->pin));
#endif

		return (_PIN & bitmask) != 0;
	}
	else if((mux = PGM_BYTE(pin->mux)) != GPIO_NO_ADC)
	{
		return _gpio_adc_read(mux) > (GPIO_VALUE_MAX / 2);
	}
	else
	{
		/* No input */
		return GPIO_LOW;
	}
}
