cimport c_time_span as impl

cdef class TimeSpanRef(object):
    cdef impl.TimeSpan ptr

    @staticmethod
    cdef TimeSpanRef from_ptr(impl.TimeSpanRef ptr)

    cpdef double total_seconds(self)

cdef class TimeSpanRefMut(TimeSpanRef):
    @staticmethod
    cdef TimeSpanRefMut from_ptr(impl.TimeSpanRefMut ptr)

cdef class TimeSpan(TimeSpanRefMut):
    @staticmethod
    cdef TimeSpan from_ptr(impl.TimeSpan ptr)

    @staticmethod
    cdef c_from_seconds(double seconds)
