from libc.math cimport fabs, rint, trunc, floor, ceil

cdef double quick_float(TimeSpanRef this):
    return this.total_seconds()

cdef class TimeSpanRef(object):
    @staticmethod
    cdef TimeSpanRef from_ptr(impl.TimeSpanRef ptr):
        cdef TimeSpanRef inst = TimeSpanRef.__new__(TimeSpanRef)
        inst.ptr = <impl.TimeSpan>ptr
        return inst

    def __int__(self):
        return trunc(quick_float(self))

    def __float__(self):
        return quick_float(self)

    def __add__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) + float(rhs))

    def __sub__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) - float(rhs))

    def __mul__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) * float(rhs))

    def __truediv__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) / float(rhs))

    def __floordiv__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) // float(rhs))

    def __mod__(self, rhs):
        return TimeSpan.c_from_seconds(quick_float(self) % float(rhs))

    def __divmod__(self, rhs):
        cdef double lhs = quick_float(self)
        cdef double c_rhs = float(rhs)
        quo = TimeSpan.c_from_seconds(lhs / c_rhs)
        rem = TimeSpan.c_from_seconds(lhs % c_rhs)
        return quo, rem

    def __neg__(self):
        return TimeSpan.c_from_seconds(-quick_float(self))

    def __pos__(self):
        return TimeSpan.c_from_seconds(+quick_float(self))

    def __abs__(self):
        return TimeSpan.c_from_seconds(fabs(quick_float(self)))

    def __round__(self):
        return TimeSpan.c_from_seconds(rint(quick_float(self)))

    def __trunc__(self):
        return TimeSpan.c_from_seconds(trunc(quick_float(self)))

    def __floor__(self):
        return TimeSpan.c_from_seconds(floor(quick_float(self)))

    def __ceil__(self):
        return TimeSpan.c_from_seconds(ceil(quick_float(self)))

    def __str__(self):
        return str(quick_float(self))

    def clone(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeSpan.from_ptr(impl.TimeSpan_clone(self.ptr))

    cpdef double total_seconds(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.TimeSpan_total_seconds(self.ptr)

cdef class TimeSpanRefMut(TimeSpanRef):
    @staticmethod
    cdef TimeSpanRefMut from_ptr(impl.TimeSpanRefMut ptr):
        cdef TimeSpanRefMut inst = TimeSpanRefMut.__new__(TimeSpanRefMut)
        inst.ptr = <impl.TimeSpan>ptr
        return inst

cdef class TimeSpan(TimeSpanRefMut):
    @staticmethod
    cdef TimeSpan from_ptr(impl.TimeSpan ptr):
        cdef TimeSpan inst = TimeSpan.__new__(TimeSpan)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.TimeSpan_drop(self.ptr)
            self.ptr = NULL

    @staticmethod
    cdef c_from_seconds(double seconds):
        return TimeSpan.from_ptr(impl.TimeSpan_from_seconds(seconds))

    @staticmethod
    def from_seconds(seconds):
        return TimeSpan.c_from_seconds(seconds)
