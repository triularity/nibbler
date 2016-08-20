/*
 * @(#) arduino.cpp
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifdef	ARDUINO
#include <stdint.h>
#include <Arduino.h>
#include <nibbler/gpio.h>

#include "gpio_private.h"
#include "debug.h"


void
_nibbler_print
(
	const char *msg
)
{
	Serial.print(msg);
}


void
_nibbler_println
(
	const char *msg
)
{
	Serial.println(msg);
}


void
_nibbler_printhex
(
	uint16_t value
)
{
	Serial.print(value, HEX);
}


void
_nibbler_printhexln
(
	uint16_t value
)
{
	Serial.println(value, HEX);
}


void
_gpio_timer_dump
(
	const gpio_timer_t *timer
)
{
	Serial.println();
	Serial.print("TIMER[0x");
	Serial.print((uint16_t) timer, HEX);
	Serial.println("]:");

	Serial.print("  flags       = 0x");
	Serial.println((uint8_t) timer->flags, HEX);
	Serial.print("  tccr        = 0x");
	Serial.println((uint16_t) OFFSET_TO_REG8(timer->tccr), HEX);
	Serial.print("  tccr_andmask = 0x");
	Serial.println((uint8_t) timer->tccr_andmask, HEX);
	Serial.print("  tccr_enable  = 0x");
	Serial.println((uint8_t) timer->tccr_enable, HEX);
	Serial.print("  ocr         = 0x");
	Serial.println((uint16_t) OFFSET_TO_REG8(timer->ocr), HEX);
}


void
_gpio_pin_dump
(
	gpio_pin_t pin
)
{
	Serial.println();
	Serial.print("PIN[0x");
	Serial.print((uint16_t) pin, HEX);
	Serial.println("]:");

	Serial.print("  ddr = 0x");
	Serial.println((uint16_t) OFFSET_TO_REG8(pin->ddr), HEX);
	Serial.print("  port = 0x");
	Serial.println((uint16_t) OFFSET_TO_REG8(pin->port), HEX);
	Serial.print("  pin = 0x");
	Serial.println((uint16_t) OFFSET_TO_REG8(pin->pin), HEX);
	Serial.print("  bitmask = 0x");
	Serial.println(pin->bitmask, HEX);
	Serial.print("  mux = ");
	Serial.println(pin->mux);
	Serial.print("  timer = 0x");
	Serial.println((uint16_t) pin->timer, HEX);
}

#endif	/* ARDUINO */
