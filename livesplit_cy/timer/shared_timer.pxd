from livesplit_cy.timer.timer cimport Timer, TimerRefMut, TimerRef
cimport c_shared_timer as impl

cdef class SharedTimerRef(object):
    cdef impl.SharedTimer ptr

    @staticmethod
    cdef SharedTimerRef from_ptr(impl.SharedTimerRef ptr)

cdef class SharedTimerRefMut(SharedTimerRef):
    @staticmethod
    cdef SharedTimerRefMut from_ptr(impl.SharedTimerRefMut ptr)

cdef class SharedTimer(SharedTimerRefMut):
    @staticmethod
    cdef SharedTimer from_ptr(impl.SharedTimer ptr)


cdef class TimerReadLockRef(object):
    cdef impl.TimerReadLock ptr

    @staticmethod
    cdef TimerReadLockRef from_ptr(impl.TimerReadLockRef ptr)

cdef class TimerReadLockRefMut(TimerReadLockRef):
    @staticmethod
    cdef TimerReadLockRefMut from_ptr(impl.TimerReadLockRefMut ptr)

cdef class TimerReadLock(TimerReadLockRefMut):
    @staticmethod
    cdef TimerReadLock from_ptr(impl.TimerReadLock ptr)


cdef class TimerWriteLockRef(object):
    cdef impl.TimerWriteLock ptr

    @staticmethod
    cdef TimerWriteLockRef from_ptr(impl.TimerWriteLockRef ptr)

cdef class TimerWriteLockRefMut(TimerWriteLockRef):
    @staticmethod
    cdef TimerWriteLockRefMut from_ptr(impl.TimerWriteLockRefMut ptr)

cdef class TimerWriteLock(TimerWriteLockRefMut):
    @staticmethod
    cdef TimerWriteLock from_ptr(impl.TimerWriteLock ptr)
