/*
 *  Copyright (C) 2019-2021, HENSOLDT Cyber GmbH
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
