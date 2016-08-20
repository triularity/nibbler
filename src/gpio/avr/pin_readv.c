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
	gpio_iooff_t	offset;
	gpio_ioptr8_t	reg;
	uint8_t		bitmask;


	if((mux = PGM_BYTE(pin->mux)) != GPIO_NO_ADC)
	{
		return _gpio_adc_read(mux);
	}
	else if((offset = PGM_IOOFF(pin->pin)) != GPIO_NO_REGISTER)
	{
		reg = IOOFF_TO_PTR8(offset);
		bitmask = PGM_BYTE(pin->bitmask);

		return (*reg & bitmask) ? GPIO_VALUE_MAX : 0;
	}
	else
	{
		/* No input */
		return GPIO_LOW;
	}
}
