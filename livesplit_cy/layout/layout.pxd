from livesplit_cy.timer.timer cimport Timer
from livesplit_cy.layout.component cimport Component
cimport c_layout as impl

cdef class LayoutRef(object):
    cdef impl.Layout ptr

    @staticmethod
    cdef LayoutRef from_ptr(impl.LayoutRef ptr)

cdef class LayoutRefMut(LayoutRef):
    @staticmethod
    cdef LayoutRefMut from_ptr(impl.LayoutRefMut ptr)

cdef class Layout(LayoutRefMut):
    @staticmethod
    cdef LayoutRefMut from_ptr(impl.LayoutRefMut ptr)
