cdef extern from "livesplit_core.h":
    struct Component_s
    ctypedef Component_s* Component
    ctypedef Component_s* ComponentRefMut
    ctypedef const Component_s* ComponentRef

    # Component methods:
    void Component_drop(Component self)
