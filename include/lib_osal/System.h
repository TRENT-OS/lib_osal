/*
 *  Copyright (C) 2019, Hensoldt Cyber GmbH
 */

#pragma once

/* Includes ------------------------------------------------------------------*/

#include <stdbool.h>

/** This also defines
 * System_BEGIN_CRITICAL_SECTION
 * System_END_CRITICAL_SECTION
 *
 */
#include "lib_osal/System_Impl.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

unsigned long
System_getTicksPerMs(unsigned long ms);

unsigned long long
System_getTickCount(void);

unsigned long long
System_upTimeMs(void);

/**
 * @brief delay in Millis, ms maybe translated in tick thru an integer division
 * in this case if div result is == 0 the behaviour is not specified and impl
 * dependent
 * @see System_safeDlyMs
 */
void System_delayMs(unsigned long ms);

void System_delayTicks(unsigned long ticks);
