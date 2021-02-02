/*
 *  Copyright (C) 2019, HENSOLDT Cyber GmbH
 */
/**
 * @addtogroup lib_osal
 * @{
 * @file Mutex_Impl.h
 *
 */
#pragma once

typedef int (*SeosMutex_LockT)(void);

typedef int (*SeosMutex_UnlockT)(void);

typedef struct SeosMutex
{
    SeosMutex_LockT lock;
    SeosMutex_UnlockT unlock;
} Mutex;

///@}
