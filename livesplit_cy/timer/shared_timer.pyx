cdef class SharedTimerRef(object):
    @staticmethod
    cdef SharedTimerRef from_ptr(impl.SharedTimerRef ptr):
        cdef SharedTimerRef inst = SharedTimerRef.__new__(SharedTimerRef)
        inst.ptr = <impl.SharedTimer>ptr
        return inst

    def share(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return SharedTimer.from_ptr(impl.SharedTimer_share(self.ptr))

    def read(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimerReadLock.from_ptr(impl.SharedTimer_read(self.ptr))

    def write(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimerWriteLock.from_ptr(impl.SharedTimer_write(self.ptr))

    def replace_inner(self, Timer timer not None):
        if self.ptr is NULL or timer.ptr is NULL:
            raise ValueError("pointer is null")
        impl.SharedTimer_replace_inner(self.ptr, timer.ptr)

cdef class SharedTimerRefMut(SharedTimerRef):
    @staticmethod
    cdef SharedTimerRefMut from_ptr(impl.SharedTimerRefMut ptr):
        cdef SharedTimerRefMut inst
        inst = SharedTimerRefMut.__new__(SharedTimerRefMut)
        inst.ptr = <impl.SharedTimer>ptr
        return inst

cdef class SharedTimer(SharedTimerRefMut):
    @staticmethod
    cdef SharedTimer from_ptr(impl.SharedTimer ptr):
        cdef SharedTimer inst = SharedTimer.__new__(SharedTimer)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.SharedTimer_drop(self.ptr)
            self.ptr = NULL


cdef class TimerReadLockRef(object):
    @staticmethod
    cdef TimerReadLockRef from_ptr(impl.TimerReadLockRef ptr):
        cdef TimerReadLockRef inst
        inst = TimerReadLockRef.__new__(TimerReadLockRef)
        inst.ptr = <impl.TimerReadLock>ptr
        return inst

    def timer(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimerRef.from_ptr(impl.TimerReadLock_timer(self.ptr))

cdef class TimerReadLockRefMut(TimerReadLockRef):
    @staticmethod
    cdef TimerReadLockRefMut from_ptr(impl.TimerReadLockRefMut ptr):
        cdef TimerReadLockRefMut inst
        inst = TimerReadLockRefMut.__new__(TimerReadLockRefMut)
        inst.ptr = <impl.TimerReadLock>ptr
        return inst

cdef class TimerReadLock(TimerReadLockRefMut):
    @staticmethod
    cdef TimerReadLock from_ptr(impl.TimerReadLock ptr):
        cdef TimerReadLock inst = TimerReadLock.__new__(TimerReadLock)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.TimerReadLock_drop(self.ptr)
            self.ptr = NULL


cdef class TimerWriteLockRef(object):
    @staticmethod
    cdef TimerWriteLockRef from_ptr(impl.TimerWriteLockRef ptr):
        cdef TimerWriteLockRef inst
        inst = TimerWriteLockRef.__new__(TimerWriteLockRef)
        inst.ptr = <impl.TimerWriteLock>ptr
        return inst

cdef class TimerWriteLockRefMut(TimerWriteLockRef):
    @staticmethod
    cdef TimerWriteLockRefMut from_ptr(impl.TimerWriteLockRefMut ptr):
        cdef TimerWriteLockRefMut inst
        inst = TimerWriteLockRefMut.__new__(TimerWriteLockRefMut)
        inst.ptr = <impl.TimerWriteLock>ptr
        return inst

    def timer(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimerRefMut.from_ptr(impl.TimerWriteLock_timer(self.ptr))

cdef class TimerWriteLock(TimerWriteLockRefMut):
    @staticmethod
    cdef TimerWriteLock from_ptr(impl.TimerWriteLock ptr):
        cdef TimerWriteLock inst = TimerWriteLock.__new__(TimerWriteLock)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.TimerWriteLock_drop(self.ptr)
            self.ptr = NULL
