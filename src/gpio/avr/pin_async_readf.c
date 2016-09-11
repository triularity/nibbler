/*
 * @(#) pin_async_readf.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"

#ifdef	ADSC

#ifdef	ADCSRA
#define	_ADCSR	ADCSRA
#else
#define	_ADCSR	ADCSR
#endif

static float *		result_ptr;

static
void
async_callback(gpio_value_t value)
{
	*result_ptr = (float) value / (float) GPIO_VALUE_MAX;
}
#endif	/* ADSC */


uint8_t
gpio_pin_async_readf
(
	gpio_pin_t pin,
	float *resultp
)
{
#ifdef	ADSC
	uint8_t		mux;


	/*
	 * If interrupts disabled then fail to avoid deadlock
	 */
	if((SREG & (1<<SREG_I)) == 0)
		return 0;

	if((mux = PGM_BYTE(pin->mux)) != GPIO_NO_ADC)
	{
		/*
		 * Block until not busy
		 */
		while(_gpio_adc_async_pin != GPIO_NO_PIN)
		{
			__asm__(
				"nop\n\t"
				"nop\n\t"
				"nop\n\t"
				"nop\n\t");
		}

		result_ptr = resultp;

		ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
		{
			_gpio_adc_async_pin = pin;
			_gpio_adc_async_callback = async_callback;

			/*
			 * Selection/setup
			 */
			_gpio_adc_select(mux);

			/*
			 * Start conversion
			 */
			_ADCSR |= (1<<ADIE);
			_ADCSR |= (1<<ADSC);
		}

		return 1;
	}
#endif	/* ADSC */

	/*
	 * Non-ADC
	 */
	*resultp = gpio_pin_readf(pin);
	return 1;
}
