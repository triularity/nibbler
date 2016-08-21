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
	Serial.println((uint8_t) PGM_BYTE(timer->flags), HEX);
	Serial.print("  tccr        = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(timer->tccr)), HEX);
	Serial.print("  tccr_andmask = 0x");
	Serial.println((uint8_t) PGM_BYTE(timer->tccr_andmask), HEX);
	Serial.print("  tccr_enable  = 0x");
	Serial.println((uint8_t) PGM_BYTE(timer->tccr_enable), HEX);
	Serial.print("  ocr         = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(timer->ocr)), HEX);
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
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->ddr)), HEX);
	Serial.print("  port = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->port)), HEX);
	Serial.print("  pin = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->pin)), HEX);
	Serial.print("  bitmask = 0x");
	Serial.println(PGM_BYTE(pin->bitmask), HEX);
	Serial.print("  mux = ");
	Serial.println(PGM_BYTE(pin->mux));
	Serial.print("  timer = 0x");
	Serial.println((uint16_t) PGM_PTR(pin->timer), HEX);
}

#endif	/* ARDUINO */
