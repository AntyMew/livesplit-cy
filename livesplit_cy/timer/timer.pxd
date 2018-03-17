from livesplit_cy.run.run cimport Run, RunRefMut, RunRef
from livesplit_cy.time.time_span cimport TimeSpanRef
from livesplit_cy.time.time cimport TimeRef, TimingMethod
from livesplit_cy.timer.shared_timer cimport SharedTimer
cimport c_timer as impl

cpdef enum TimerPhase:
    NotRunning = 0,
    Running = 1,
    Ended = 2,
    Paused = 3

cdef class TimerRef(object):
    cdef impl.Timer ptr

    @staticmethod
    cdef TimerRef from_ptr(impl.TimerRef ptr)

cdef class TimerRefMut(TimerRef):
    @staticmethod
    cdef TimerRefMut from_ptr(impl.TimerRefMut ptr)

cdef class Timer(TimerRefMut):
    @staticmethod
    cdef Timer from_ptr(impl.Timer ptr)
