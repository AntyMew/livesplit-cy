from livesplit_cy.time.time_span cimport TimeSpanRef
cimport c_time as impl

cpdef enum TimingMethod:
    RealTime = 0,
    GameTime = 1

cdef class TimeRef(object):
    cdef impl.Time ptr

    @staticmethod
    cdef TimeRef from_ptr(impl.TimeRef ptr)

cdef class TimeRefMut(TimeRef):
    @staticmethod
    cdef TimeRefMut from_ptr(impl.TimeRefMut ptr)

cdef class Time(TimeRefMut):
    @staticmethod
    cdef Time from_ptr(impl.Time ptr)
