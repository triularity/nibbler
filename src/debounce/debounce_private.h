/*
 * @(#) debounce_private.h
 *
 * Copyright (c) 2016, Chad M. Fraleigh.  All rights reserved.
 * http://www.triularity.org/
 */

#ifndef	__debounce_private_h
#define	__debounce_private_h

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#endif

#define	DEBOUNCE_DEFAULT_GET_TIME	millis

uint32_t			millis(void);

#ifdef  __cplusplus
}
#endif

#endif	/* !__debounce_private_h */
