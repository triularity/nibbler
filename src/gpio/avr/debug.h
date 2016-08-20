/*
 * @(#) debug.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__debug_h
#define	__debug_h

#include <stdint.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"

#ifdef  __cplusplus
extern "C" {
#endif

void				_gpio_pin_dump(gpio_pin_t pin);
void				_gpio_timer_dump(const gpio_timer_t *timer);

/*
 * Temp Serial.print() wrappers
 */
void				_nibbler_print(const char *msg);
void				_nibbler_println(const char *msg);
void				_nibbler_printhex(uint16_t value);
void				_nibbler_printhexln(uint16_t value);

#ifdef  __cplusplus
}
#endif

#endif	/* !__debug_h */
