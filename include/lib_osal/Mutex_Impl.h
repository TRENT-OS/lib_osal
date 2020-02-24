/*
 *  Copyright (C) 2019, Hensoldt Cyber GmbH
 */
/**
 * @addtogroup OSAL
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
