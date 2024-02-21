/*
 * Copyright (C) 2019-2024, HENSOLDT Cyber GmbH
 * 
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * For commercial licensing, contact: info.cyber@hensoldt.net
 */

/**
 * @addtogroup lib_osal
 * @{
 * @file Mutex_Impl.h
 *
 */
#pragma once

typedef int (*OS_Mutex_LockT)(void);

typedef int (*OS_Mutex_UnlockT)(void);

typedef struct OS_Mutex
{
    OS_Mutex_LockT lock;
    OS_Mutex_UnlockT unlock;
} Mutex;

///@}
