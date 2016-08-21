/*
 * @(#) nibbler/debounce.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__nibbler__debounce_h
#define	__nibbler__debounce_h

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif

#define	DEBOUNCE_API_VERSION	1

#define	DEBOUNCE_MAX_DELAY	0xFFFF

typedef struct debounce_t
{
	uint32_t	start_time;
	uint32_t	(*get_time)(void);
	uint16_t	delay;
	uint8_t		active;
} debounce_t;


void				debounce_init(
					debounce_t *db,
					uint16_t delay,
					uint32_t (*get_time)(void));

uint8_t				debounce_activate(debounce_t *db);

void				debounce_clear(debounce_t *db);

#ifdef  __cplusplus
}
#endif

#endif	/* !__nibbler__debounce_h */
