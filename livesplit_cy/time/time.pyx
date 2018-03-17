cdef class TimeRef(object):
    @staticmethod
    cdef TimeRef from_ptr(impl.TimeRef ptr):
        cdef TimeRef inst = TimeRef.__new__(TimeRef)
        inst.ptr = <impl.Time>ptr
        return inst

    def clone(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return Time.from_ptr(impl.Time_clone(self.ptr))

    def real_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeSpanRef.from_ptr(impl.Time_real_time(self.ptr))

    def game_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeSpanRef.from_ptr(impl.Time_game_time(self.ptr))

    def index(self, TimingMethod timing_method):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeSpanRef.from_ptr(impl.Time_index(self.ptr, timing_method))

cdef class TimeRefMut(TimeRef):
    @staticmethod
    cdef TimeRefMut from_ptr(impl.TimeRefMut ptr):
        cdef TimeRefMut inst = TimeRefMut.__new__(TimeRefMut)
        inst.ptr = <impl.Time>ptr
        return inst

cdef class Time(TimeRefMut):
    @staticmethod
    cdef Time from_ptr(impl.Time ptr):
        cdef Time inst = Time.__new__(Time)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Time_drop(self.ptr)
            self.ptr = NULL
