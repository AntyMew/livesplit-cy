from livesplit_cy.time.time cimport Time, TimeRef
cimport c_segment as impl

cdef class SegmentRef(object):
    cdef impl.Segment ptr

    @staticmethod
    cdef SegmentRef from_ptr(impl.SegmentRef ptr)

cdef class SegmentRefMut(SegmentRef):
    @staticmethod
    cdef SegmentRefMut from_ptr(impl.SegmentRefMut ptr)

cdef class Segment(SegmentRefMut):
    @staticmethod
    cdef Segment from_ptr(impl.Segment ptr)


cdef class SegmentHistoryRef(object):
    cdef impl.SegmentHistory ptr
    cdef impl.SegmentHistoryIter iter
    cdef impl.SegmentHistoryElementRef current

    @staticmethod
    cdef SegmentHistoryRef from_ptr(impl.SegmentHistoryRef ptr)

    cdef bint next(self) except False

cdef class SegmentHistoryRefMut(SegmentHistoryRef):
    @staticmethod
    cdef SegmentHistoryRefMut from_ptr(impl.SegmentHistoryRefMut ptr)

cdef class SegmentHistory(SegmentHistoryRefMut):
    @staticmethod
    cdef SegmentHistory from_ptr(impl.SegmentHistory ptr)
