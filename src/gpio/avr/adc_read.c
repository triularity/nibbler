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


gpio_value_t
_gpio_adc_read
(
	uint8_t mux
)
{
#ifdef	ADSC
	gpio_value_t	value;


	/*
	 * XXX - Wait for a running async read to finish
	 */


	/*
	 * Selection/setup
	 */
	_gpio_adc_select(mux);

	/*
	 * Start conversion
	 */
	ADCSRA |= (1<<ADSC);

	/*
	 * Wait for it to complete
	 */
	while((ADCSRA & (1<<ADSC)) != 0)
		/* loop */;

	/*
	 * MUST read ADCL first, per AVR specs
	 */
	value = ADCL;
	value |= (ADCH << 8);

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
