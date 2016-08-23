/*
 * @(#) pin_readv.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <nibbler/gpio.h>

#include "gpio_private.h"


gpio_value_t
gpio_pin_readv
(
	gpio_pin_t pin
)
{
	uint8_t		mux;
	uint8_t		bitmask;

#ifdef	OPT_SINGLE_PIN
#define	_PIN	OPT_SINGLE_PIN
#else
	gpio_ioptr8_t	reg;
#define	_PIN	*reg
#endif


	if((mux = PGM_BYTE(pin->mux)) != GPIO_NO_ADC)
	{
		return _gpio_adc_read(mux);
	}
	else if((bitmask = PGM_BYTE(pin->bitmask)) != 0)
	{
#ifndef	OPT_SINGLE_PIN
		reg = IOOFF_TO_PTR8(PGM_IOOFF(pin->pin));
#endif

		return (_PIN & bitmask) ? GPIO_VALUE_MAX : 0;
	}
	else
	{
		/* No input */
		return GPIO_LOW;
	}
}
