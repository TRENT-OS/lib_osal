#ifndef SYSTEM_IMPL_H
#define SYSTEM_IMPL_H

#ifdef __cplusplus
extern "C" {
#endif

INLINE unsigned long long
System_getTickCount(void)
{
    /// not implemented
    Debug_ASSERT(false);

    return 0;
}

INLINE unsigned long long
System_upTimeMs(void)
{
    /// not implemented
    Debug_ASSERT(false);

    return 0;
}

INLINE void
System_delayTicks(unsigned long ticks)
{
    /// not implemented
    Debug_ASSERT(false);
}

#ifdef __cplusplus
}
#endif

#endif /* SYSTEM_IMPL_H */

