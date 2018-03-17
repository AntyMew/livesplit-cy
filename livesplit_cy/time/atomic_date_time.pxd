cimport c_atomic_date_time as impl

cdef class AtomicDateTimeRef(object):
    cdef impl.AtomicDateTime ptr

    @staticmethod
    cdef AtomicDateTimeRef from_ptr(impl.AtomicDateTimeRef ptr)

cdef class AtomicDateTimeRefMut(AtomicDateTimeRef):
    @staticmethod
    cdef AtomicDateTimeRefMut from_ptr(impl.AtomicDateTimeRefMut ptr)

cdef class AtomicDateTime(AtomicDateTimeRefMut):
    @staticmethod
    cdef AtomicDateTime from_ptr(impl.AtomicDateTime ptr)
