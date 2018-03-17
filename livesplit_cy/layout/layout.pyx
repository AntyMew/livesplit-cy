cdef class LayoutRef(object):
    @staticmethod
    cdef LayoutRef from_ptr(impl.LayoutRef ptr):
        cdef LayoutRef inst = LayoutRef.__new__(LayoutRef)
        inst.ptr = <impl.Layout>ptr
        return inst

    def clone(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return Layout.from_ptr(impl.Layout_clone(self.ptr))

    def settings_as_json(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Layout_settings_as_json(self.ptr).decode()

    def state_as_json(self, Timer timer not None):
        if self.ptr is NULL or timer.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Layout_state_as_json(self.ptr, timer.ptr).decode()

cdef class LayoutRefMut(LayoutRef):
    @staticmethod
    cdef LayoutRefMut from_ptr(impl.LayoutRefMut ptr):
        cdef LayoutRefMut inst = LayoutRefMut.__new__(LayoutRefMut)
        inst.ptr = <impl.Layout>ptr
        return inst

    def push(self, Component component not None):
        if self.ptr is NULL or component.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Layout_push(self.ptr, component.ptr)

    def scroll_up(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Layout_scroll_up(self.ptr)

    def scroll_down(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Layout_scroll_down(self.ptr)

    def remount(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Layout_remount(self.ptr)

cdef class Layout(LayoutRefMut):
    @staticmethod
    cdef Layout from_ptr(impl.Layout ptr):
        cdef Layout inst = Layout.__new__(Layout)
        inst.ptr = ptr
        return inst

    def __init__(self):
        if self.ptr is NULL:
            self.ptr = impl.Layout_new()

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Layout_drop(self.ptr)
            self.ptr = NULL

    @staticmethod
    def default_layout(_=None):  # Circumvent compiler warning
        return Layout.from_ptr(impl.Layout_default_layout())

    @staticmethod
    def parse_json(settings):
        return Layout.from_ptr(impl.Layout_parse_json(settings.encode()))
