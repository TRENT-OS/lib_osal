/*
 *  Copyright (C) 2019, HENSOLDT Cyber GmbH
 */
#include "lib_osal/Mutex.h"
#include "lib_debug/Debug.h"

bool
Mutex_ctor(Mutex* self)
{
    return true;
}

void
Mutex_dtor(Mutex* self)
{
    return;
}

void
Mutex_acquire(Mutex* self)
{
    int err = self->lock();
    Debug_ASSERT(!err);
}

void
Mutex_release(Mutex* self)
{
    int err = self->unlock();
    Debug_ASSERT(!err);
}
