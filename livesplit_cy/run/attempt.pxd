cimport c_attempt as impl

cdef class AttemptRef(object):
    cdef impl.Attempt ptr

    @staticmethod
    cdef AttemptRef from_ptr(impl.AttemptRef ptr)

cdef class AttemptRefMut(AttemptRef):
    @staticmethod
    cdef AttemptRefMut from_ptr(impl.AttemptRefMut ptr)

cdef class Attempt(AttemptRefMut):
    @staticmethod
    cdef Attempt from_ptr(impl.Attempt ptr)
