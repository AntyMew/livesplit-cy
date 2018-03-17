cdef class SegmentRef(object):
    @staticmethod
    cdef SegmentRef from_ptr(impl.SegmentRef ptr):
        cdef SegmentRef inst = SegmentRef.__new__(SegmentRef)
        inst.ptr = <impl.Segment>ptr
        return inst

    def name(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Segment_name(self.ptr).decode()

    def icon(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Segment_icon(self.ptr).decode()

    def comparison(self, str comparison not None):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeRef.from_ptr(impl.Segment_comparison(self.ptr,
                                                        comparison.encode()))

    def personal_best_split_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        ptr = impl.Segment_personal_best_split_time(self.ptr)
        return TimeRef.from_ptr(ptr)

    def best_segment_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeRef.from_ptr(impl.Segment_best_segment_time(self.ptr))

    def segment_history(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        ptr = impl.Segment_segment_history(self.ptr)
        return SegmentHistoryRef.from_ptr(ptr)

cdef class SegmentRefMut(SegmentRef):
    @staticmethod
    cdef SegmentRefMut from_ptr(impl.SegmentRefMut ptr):
        cdef SegmentRefMut inst = SegmentRefMut.__new__(SegmentRefMut)
        inst.ptr = <impl.Segment>ptr
        return inst

cdef class Segment(SegmentRefMut):
    @staticmethod
    cdef Segment from_ptr(impl.Segment ptr):
        cdef Segment inst = Segment.__new__(Segment)
        inst.ptr = ptr
        return inst

    def __init__(self, str name not None):
        if self.ptr is NULL:
            self.ptr = impl.Segment_new(name.encode())

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Segment_drop(self.ptr)
            self.ptr = NULL

cdef class SegmentHistoryRef(object):
    # TODO: test me
    @staticmethod
    cdef SegmentHistoryRef from_ptr(impl.SegmentHistoryRef ptr):
        cdef SegmentHistoryRef inst
        inst = SegmentHistoryRef.__new__(SegmentHistoryRef)
        inst.ptr = <impl.SegmentHistory>ptr
        inst.__init__(inst)
        return inst

    cdef bint next(self) except False:
        if self.iter is NULL:
            raise ValueError("pointer is null")
        self.current = impl.SegmentHistoryIter_next(self.iter)
        return True

    def __init__(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        self.iter = impl.SegmentHistory_iter(self.ptr)
        self.next()

    def __dealloc__(self):
        if self.iter is not NULL:
            impl.SegmentHistoryIter_drop(self.iter)
            self.ptr = NULL

    def __iter__(self):
        return self

    def __next__(self):
        if self.current is NULL:
            raise StopIteration
        index = impl.SegmentHistoryElement_index(self.current)
        time_ptr = impl.SegmentHistoryElement_time(self.current)
        time = TimeRef.from_ptr(time_ptr)
        self.next()
        return (index, time)

cdef class SegmentHistoryRefMut(SegmentHistoryRef):
    @staticmethod
    cdef SegmentHistoryRefMut from_ptr(impl.SegmentHistoryRefMut ptr):
        cdef SegmentHistoryRefMut inst
        inst = SegmentHistoryRefMut.__new__(SegmentHistoryRefMut)
        inst.ptr = <impl.SegmentHistory>ptr
        inst.__init__(inst)
        return inst

cdef class SegmentHistory(SegmentHistoryRefMut):
    @staticmethod
    cdef SegmentHistory from_ptr(impl.SegmentHistory ptr):
        cdef SegmentHistory inst = SegmentHistory.__new__(SegmentHistory)
        inst.ptr = <impl.SegmentHistory>ptr
        inst.__init__(inst)
        return inst
