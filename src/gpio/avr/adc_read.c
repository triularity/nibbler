/*
 * @(#) adc_read.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <avr/io.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"

#ifdef	ADCSRA
#define	_ADCSR	ADCSRA
#else
#define	_ADCSR	ADCSR
#endif


gpio_value_t
_gpio_adc_read
(
	uint8_t mux
)
{
#ifdef	ADSC
	gpio_value_t	value;


	if(_gpio_adc_async_pin != GPIO_NO_PIN)
	{
		/*
		 * If interrupts disabled and busy then "fail" with no-value
		 * to avoid deadlock
		 */
		if((SREG & (1<<SREG_I)) == 0)
			return 0;

		/*
		 * Block while ADC busy
		 */
		while(_gpio_adc_async_pin != GPIO_NO_PIN)
		{
			__asm__(
				"nop\n\t"
				"nop\n\t"
				"nop\n\t"
				"nop\n\t");
		}
	}

	/*
	 * Selection/setup
	 */
	_gpio_adc_select(mux);

	/*
	 * Start conversion
	 */
	_ADCSR |= (1<<ADSC);

	/*
	 * Wait for it to complete
	 */
	while((_ADCSR & (1<<ADSC)) != 0)
		/* loop */;

	value = ADC;

	/* Repeat the upper bits to fill low zeros */
	value |= (value >> 10);

	return value;

#else	/* ADSC */
	(void) mux; /* Quiet unused parameter */

	/*
	 * No ADC
	 */
	return 0;

#endif	/* ADSC */
}
