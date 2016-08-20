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
	gpio_ioreg8_t		pin_reg;


	pin = _gpio_pgm_cache_pin(pin);

	if(pin->pin != GPIO_NO_REGISTER)
	{
		pin_reg = OFFSET_TO_REG8(pin->pin);

		return (*pin_reg & pin->bitmask) != 0;
	}
	else if(pin->mux != GPIO_NO_ADC)
	{
		return _gpio_adc_read(pin->mux) > (GPIO_VALUE_MAX / 2);
	}
	else
	{
		return GPIO_LOW;
	}
}
