cdef class ComponentRef(object):
    @staticmethod
    cdef ComponentRef from_ptr(impl.ComponentRef ptr):
        cdef ComponentRef inst = ComponentRef.__new__(ComponentRef)
        inst.ptr = <impl.Component>ptr
        return inst

cdef class ComponentRefMut(ComponentRef):
    @staticmethod
    cdef ComponentRefMut from_ptr(impl.ComponentRefMut ptr):
        cdef ComponentRefMut inst = ComponentRefMut.__new__(ComponentRefMut)
        inst.ptr = <impl.Component>ptr
        return inst

cdef class Component(ComponentRefMut):
    @staticmethod
    cdef Component from_ptr(impl.Component ptr):
        cdef Component inst = Component.__new__(Component)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Component_drop(self.ptr)
            self.ptr = NULL
