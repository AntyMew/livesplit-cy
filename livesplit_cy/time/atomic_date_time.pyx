cdef class AtomicDateTimeRef(object):
    @staticmethod
    cdef AtomicDateTimeRef from_ptr(impl.AtomicDateTimeRef ptr):
        cdef AtomicDateTimeRef inst
        inst = AtomicDateTimeRef.__new__(AtomicDateTimeRef)
        inst.ptr = <impl.AtomicDateTime>ptr
        return inst

    def is_synchronized(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.AtomicDateTime_is_synchronized(self.ptr)

    def to_rfc2822(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.AtomicDateTime_to_rfc2822(self.ptr).decode()

    def to_rfc3339(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.AtomicDateTime_to_rfc3339(self.ptr).decode()

cdef class AtomicDateTimeRefMut(AtomicDateTimeRef):
    @staticmethod
    cdef AtomicDateTimeRefMut from_ptr(impl.AtomicDateTimeRefMut ptr):
        cdef AtomicDateTimeRefMut inst
        inst = AtomicDateTimeRefMut.__new__(AtomicDateTimeRefMut)
        inst.ptr = <impl.AtomicDateTime>ptr
        return inst

cdef class AtomicDateTime(AtomicDateTimeRefMut):
    @staticmethod
    cdef AtomicDateTime from_ptr(impl.AtomicDateTime ptr):
        cdef AtomicDateTime inst = AtomicDateTime.__new__(AtomicDateTime)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.AtomicDateTime_drop(self.ptr)
            self.ptr = NULL
