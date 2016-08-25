/*
 * @(#) pwm_start.c
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#include <stdint.h>
#include <util/atomic.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"


void
_gpio_pwm_start
(
	uint8_t index,
	gpio_value_t value
)
{
	const gpio_timer_t *	timer;
	gpio_ioptr8_t		tccr;
	gpio_ioptr8_t		ocr;
	uint8_t			tccr_andmask;
	uint8_t			tccr_enable;
#ifndef	WITHOUT_HIRES_TIMERS
	uint16_t		duty;
#endif


	timer = &_gpio_timers[index];
//_gpio_timer_dump(timer);

	tccr = IOOFF_TO_PTR8(PGM_IOOFF(timer->tccr));
	tccr_andmask = PGM_BYTE(timer->tccr_andmask);
	tccr_enable = PGM_BYTE(timer->tccr_enable);

	ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
	{
		*tccr = (*tccr & tccr_andmask) | tccr_enable;
	}

	ocr = IOOFF_TO_PTR8(PGM_IOOFF(timer->ocr));

#ifndef	WITHOUT_HIRES_TIMERS
	switch(PGM_BYTE(timer->flags) & GPIO_TIMER_TYPE_MASK)
	{
		case GPIO_TIMER_TYPE_8BIT:
#endif	/* !WITHOUT_HIRES_TIMERS */
			*ocr = (uint8_t) GPIO_VALUE_TO_8BIT(value);
#ifndef	WITHOUT_HIRES_TIMERS
			break;

		case GPIO_TIMER_TYPE_10BIT:
			duty = GPIO_VALUE_TO_10BIT(value);

			ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
			{
				/* MUST write high byte first, per AVR specs */
				*ocr = (uint8_t) (duty >> 8);
				*(ocr+1) = (uint8_t) (duty & 0xFF);
			}
			break;

		case GPIO_TIMER_TYPE_16BIT:
			duty = GPIO_VALUE_TO_16BIT(value);

			ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
			{
				/* MUST write high byte first, per AVR specs */
				*ocr = (uint8_t) (duty >> 8);
				*(ocr+1) = (uint8_t) (duty & 0xFF);
			}
			break;
	}
#endif	/* !WITHOUT_HIRES_TIMERS */
}
