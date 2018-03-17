from livesplit_cy.run.segment cimport SegmentRef
cimport c_run as impl

cdef class RunRef(object):
    cdef impl.Run ptr

    @staticmethod
    cdef RunRef from_ptr(impl.RunRef ptr)

    cpdef int len(self)
    cpdef int segment(self, int index)

cdef class RunRefMut(RunRef):
    @staticmethod
    cdef RunRefMut from_ptr(impl.RunRefMut ptr)

cdef class Run(RunRefMut):
    @staticmethod
    cdef Run from_ptr(impl.Run ptr)


cdef class ParseRunResultRef(object):
    cdef impl.ParseRunResult ptr

    @staticmethod
    cdef ParseRunResultRef from_ptr(impl.ParseRunResultRef ptr)

cdef class ParseRunResultRefMut(ParseRunResultRef):
    @staticmethod
    cdef ParseRunResultRefMut from_ptr(impl.ParseRunResultRefMut ptr)

cdef class ParseRunResult(ParseRunResultRefMut):
    @staticmethod
    cdef ParseRunResult from_ptr(impl.ParseRunResult ptr)
