cdef extern from "livesplit_core.h":
    struct SharedTimer_s
    ctypedef SharedTimer_s* SharedTimer
    ctypedef SharedTimer_s* SharedTimerRefMut
    ctypedef const SharedTimer_s* SharedTimerRef
    # Avoid circular import:
    struct Timer_s
    ctypedef Timer_s* Timer
    ctypedef Timer_s* TimerRefMut
    ctypedef const Timer_s TimerRef
    # Utility classes:
    struct TimerReadLock_s
    ctypedef TimerReadLock_s* TimerReadLock
    ctypedef TimerReadLock_s* TimerReadLockRefMut
    ctypedef const TimerReadLock_s* TimerReadLockRef
    struct TimerWriteLock_s
    ctypedef TimerWriteLock_s* TimerWriteLock
    ctypedef TimerWriteLock_s* TimerWriteLockRefMut
    ctypedef const TimerWriteLock_s* TimerWriteLockRef

    # SharedTimer methods:
    void SharedTimer_drop(SharedTimer self)
    # SharedTimerRef methods:
    SharedTimer SharedTimer_share(SharedTimerRef self)
    TimerReadLock SharedTimer_read(SharedTimerRef self)
    TimerWriteLock SharedTimer_write(SharedTimerRef self)
    void SharedTimer_replace_inner(SharedTimerRef self, Timer timer)

    # TimerReadLock methods:
    void TimerReadLock_drop(TimerReadLock self)
    # TimerReadLockRef methods:
    TimerRef TimerReadLock_timer(TimerReadLockRef self)

    # TimerWriteLock methods:
    void TimerWriteLock_drop(TimerWriteLock self)
    # TimerWriteLockRefMut methods:
    TimerRefMut TimerWriteLock_timer(TimerWriteLockRefMut self)
