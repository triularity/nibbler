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
	uint8_t offset,
	gpio_value_t value
)
{
#if	defined(OPT_TIMER_8BIT) || defined(OPT_TIMER_10BIT) || defined(OPT_TIMER_16BIT)
	const gpio_timer_t *	timer;
	gpio_ioptr8_t		tccr;
	gpio_ioptr8_t		ocr;
	uint8_t			tccr_andmask;
	uint8_t			tccr_enable;

#if	defined(OPT_TIMER_10BIT) || defined(OPT_TIMER_16BIT)
	uint16_t		duty;
#endif


	timer = (const gpio_timer_t *) (((char *) _gpio_timers) + offset);
//_gpio_timer_dump(timer);

	tccr = IOOFF_TO_PTR8(PGM_IOOFF(timer->tccr));
	tccr_andmask = PGM_BYTE(timer->tccr_andmask);
	tccr_enable = PGM_BYTE(timer->tccr_enable);

	ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
	{
		*tccr = (*tccr & tccr_andmask) | tccr_enable;
	}

	ocr = IOOFF_TO_PTR8(PGM_IOOFF(timer->ocr));

#ifdef	OPT_TIMER_SINGLETYPE
	switch(OPT_TIMER_SINGLETYPE)
#else
	switch(PGM_BYTE(timer->flags) & GPIO_TIMER_TYPE_MASK)
#endif
	{
#ifdef	OPT_TIMER_8BIT
		case GPIO_TIMER_TYPE_8BIT:
			*ocr = (uint8_t) GPIO_VALUE_TO_8BIT(value);
			break;
#endif

#ifdef	OPT_TIMER_10BIT
		case GPIO_TIMER_TYPE_10BIT:
			duty = GPIO_VALUE_TO_10BIT(value);

			ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
			{
				/* MUST write high byte first, per AVR specs */
				*ocr = (uint8_t) (duty >> 8);
				*(ocr+1) = (uint8_t) (duty & 0xFF);
			}
			break;
#endif	/* OPT_TIMER_10BIT */

#ifdef	OPT_TIMER_16BIT
		case GPIO_TIMER_TYPE_16BIT:
			duty = GPIO_VALUE_TO_16BIT(value);

			ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
			{
				/* MUST write high byte first, per AVR specs */
				*ocr = (uint8_t) (duty >> 8);
				*(ocr+1) = (uint8_t) (duty & 0xFF);
			}
			break;
#endif	/* OPT_TIMER_16BIT */
	}
#endif	/* OPT_TIMER_8BIT || OPT_TIMER_10BIT || OPT_TIMER_16BIT */
}
