cimport c_component as impl

cdef class ComponentRef(object):
    cdef impl.Component ptr

    @staticmethod
    cdef ComponentRef from_ptr(impl.ComponentRef ptr)

cdef class ComponentRefMut(ComponentRef):
    @staticmethod
    cdef ComponentRefMut from_ptr(impl.ComponentRefMut ptr)

cdef class Component(ComponentRefMut):
    @staticmethod
    cdef Component from_ptr(impl.Component ptr)
