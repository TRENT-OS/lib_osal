/*
 *  Copyright (C) 2019, Hensoldt Cyber GmbH
 */
/**
 * @addtogroup OSAL
 * @{
 * @file Mutex.h
 *
 */

#pragma once

#include "lib_osal/Mutex_Impl.h"
#include <stdbool.h>

/**
 * Mutex constructor.
 *
 * @param mutex the mutex object to initialize.
 * @return true if the construction was successful, false in case of error.
 *
 * @memberof Mutex
 */
bool
Mutex_ctor(Mutex* self);

/**
 * Mutex destructor.
 * Releases the resources used by this object.
 *
 * @param mutex the object to destroy.
 *
 * @note it is an error to destroy a mutex with pending tasks.
 *
 * @memberof Mutex
 */
void
Mutex_dtor(Mutex* self);

/**
 * Lock attempt.
 *
 * This method gains the exclusive lock for the mutex. If the mutex is already
 * locked by another task then this function is blocking until the mutex is
 * released by its current owner.
 *
 * The same task can lock the mutex multiple times without suspending. Thoug
 * for each lock a corresponding release must be issued.
 *
 * @param mutex the mutex to lock.
 *
 * @note if the mutex is never released by the current owner, then this method
 *       could wait forever.
 *
 *
 * @memberof Mutex
 */
void
Mutex_acquire(Mutex* self);

/**
 * Release a currently owned mutex.
 *
 * This method releases a mutex previously locked by a call to Mutex_acquire().
 *
 * @param mutex the mutex to release.
 *
 * @note a mutex must be released by the same task one time for each
 *       Mutex_acquire() issued on the mutex.
 *
 * @memberof Mutex
 */
void
Mutex_release(Mutex* self);

/**
 * Tries to acquire the mutex without blocking if no resources are available.
 *
 * @param mutex the mutex to acquire.
 * @return true if the mutex is acquired, false otherwise.
 *
 * @memberof Mutex
 */
bool
Mutex_tryAcquire(Mutex* self);

///@}

