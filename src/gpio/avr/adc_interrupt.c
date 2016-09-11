/*
 * @(#) adc_interrupt.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <avr/interrupt.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


#ifdef	ADSC

#if	defined(ADCSRA)
#define	_ADCSR	ADCSRA
#elif	defined(ADCSR)
#define	_ADCSR	ADCSR
#else
#error	ADCSR/ADCSRA not found
#endif

volatile gpio_pin_t	_gpio_adc_async_pin = GPIO_NO_PIN;

adc_async_t		_gpio_adc_async_callback;


ISR(ADC_vect)
{
	gpio_value_t	value;


	if(_ADCSR & (1<<ADSC))
	{
		/*
		 * Disable ADC interrupts and acknowledge flag
		 */
		_ADCSR &= ~(1<<ADIE);
		_ADCSR |= (1<<ADIF);

		if(_gpio_adc_async_callback != (adc_async_t) 0)
		{
			value = ADC;

			/* Repeat the upper bits to fill low zeros */
			value |= (value >> 10);

			_gpio_adc_async_callback(value);
			_gpio_adc_async_pin = GPIO_NO_PIN;
		}
	}
}

#endif	/* ADSC */
