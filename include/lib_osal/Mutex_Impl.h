/**
 * @addtogroup OSAL
 * @{
 * @file Mutex_Impl.h
 *
 */

typedef int
(*SeosMutex_LockT)(void);

typedef int
(*SeosMutex_UnlockT)(void);

typedef struct SeosMutex
{
    SeosMutex_LockT     lock;
    SeosMutex_UnlockT   unlock;
}
Mutex;

///@}
