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
	gpio_iooff_t		offset;
	uint8_t			bitmask;
	uint8_t			mux;
	gpio_ioptr8_t		reg;


	if((offset = PGM_IOOFF(pin->pin)) != GPIO_NO_REGISTER)
	{
		reg = IOOFF_TO_PTR8(offset);
		bitmask = PGM_BYTE(pin->bitmask);

		return (*reg & bitmask) != 0;
	}
	else if((mux = PGM_BYTE(pin->mux)) != GPIO_NO_ADC)
	{
		return _gpio_adc_read(mux) > (GPIO_VALUE_MAX / 2);
	}
	else
	{
		return GPIO_LOW;
	}
}
