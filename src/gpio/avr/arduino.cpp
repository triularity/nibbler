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
#ifdef	Serial
	Serial.print(msg);
#endif
}


void
_nibbler_println
(
	const char *msg
)
{
#ifdef	Serial
	Serial.println(msg);
#endif
}


void
_nibbler_printhex
(
	uint16_t value
)
{
#ifdef	Serial
	Serial.print(value, HEX);
#endif
}


void
_nibbler_printhexln
(
	uint16_t value
)
{
#ifdef	Serial
	Serial.println(value, HEX);
#endif
}


void
_gpio_timer_dump
(
	const gpio_timer_t *timer
)
{
#ifdef	Serial
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
#endif	/* Serial */
}


void
_gpio_pin_dump
(
	gpio_pin_t pin
)
{
#ifdef	Serial
	Serial.println();
	Serial.print("PIN[0x");
	Serial.print((uint16_t) pin, HEX);
	Serial.println("]:");

	Serial.print("  bitmask = 0x");
	Serial.println(PGM_BYTE(pin->bitmask), HEX);

#ifndef OPT_SINGLE_DIGITAL_PORT
	Serial.print("  p.ddr = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->p.ddr)), HEX);
	Serial.print("  p.port = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->p.port)), HEX);
	Serial.print("  p.pin = 0x");
	Serial.println((uint16_t) IOOFF_TO_PTR8(PGM_IOOFF(pin->p.pin)), HEX);
#endif

	Serial.print("  mux = ");
	Serial.println(PGM_BYTE(pin->mux));
	Serial.print("  timer = ");
	Serial.println(PGM_BYTE(pin->timer), HEX);
#endif	/* Serial */
}

#endif	/* ARDUINO */
