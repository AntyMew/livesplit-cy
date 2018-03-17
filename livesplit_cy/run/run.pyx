cdef class RunRef(object):
    @staticmethod
    cdef RunRef from_ptr(impl.RunRef ptr):
        cdef RunRef inst = RunRef.__new__(RunRef)
        inst.ptr = <impl.Run>ptr
        return inst

    def __len__(self):
        cdef RunRef this = self
        return this.len()

    def __getitem__(self, key):
        cdef RunRef this = self
        return this.segment(key)

    def __iter__(self):
        cdef RunRef this = self
        cdef int len = this.len()
        for ii in range(len):
            yield this.segment(ii)

    def __reversed__(self):
        cdef RunRef this = self
        cdef int len = this.len()
        for ii in reversed(range(len)):
            yield this.segment(ii)

    def game_name(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_game_name(self.ptr).decode()

    def game_icon(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_game_icon(self.ptr).decode()

    def category_name(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_category_name(self.ptr).decode()

    def extended_file_name(self, bint use_extended_category_name):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        cdef const char* string
        string = impl.Run_extended_file_name(self.ptr,
                                             use_extended_category_name)
        return string.decode()

    def extended_name(self, bint use_extended_category_name):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_extended_name(self.ptr,
                                      use_extended_category_name).decode()

    def attempt_count(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_attempt_count(self.ptr)

    # TODO

    cpdef int len(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Run_len(self.ptr)

    cpdef int segment(self, int index):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return SegmentRef.from_ptr(impl.Run_segment(self.ptr, index))

    # TODO

cdef class RunRefMut(RunRef):
    @staticmethod
    cdef RunRefMut from_ptr(impl.RunRefMut ptr):
        cdef RunRefMut inst = RunRefMut.__new__(RunRefMut)
        inst.ptr = <impl.Run>ptr
        return inst

    # TODO

cdef class Run(RunRefMut):
    @staticmethod
    cdef Run from_ptr(impl.Run ptr):
        cdef Run inst = Run.__new__(Run)
        inst.ptr = ptr
        return inst

    def __init__(self):
        if self.ptr is NULL:
            self.ptr = impl.Run_new()

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Run_drop(self.ptr)
            self.ptr = NULL

    @staticmethod
    def parse(bytearray data, str path, bint load_files):
        ptr = impl.Run_parse(<const char*>data, len(data), path.encode(),
                             load_files)
        return ParseRunResult.from_ptr(ptr)

    @staticmethod
    def parse_file_handle(int handle, str path, bint load_files):
        ptr = impl.Run_parse_file_handle(handle, path.encode(), load_files)
        return ParseRunResult.from_ptr(ptr)

    @staticmethod
    def parse_file(file, str path, bint load_files):
        data = bytearray(file.read())
        return Run.parse(data, path, load_files)


cdef class ParseRunResultRef(object):
    @staticmethod
    cdef ParseRunResultRef from_ptr(impl.ParseRunResultRef ptr):
        cdef ParseRunResultRef inst
        inst = ParseRunResultRef.__new__(ParseRunResultRef)
        inst.ptr = <impl.ParseRunResult>ptr
        return inst

    def parsed_successfully(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.ParseRunResult_parsed_successfully(self.ptr)

    def timer_kind(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.ParseRunResult_timer_kind(self.ptr).decode()

cdef class ParseRunResultRefMut(ParseRunResultRef):
    @staticmethod
    cdef ParseRunResultRefMut from_ptr(impl.ParseRunResultRefMut ptr):
        cdef ParseRunResultRefMut inst
        inst = ParseRunResultRefMut.__new__(ParseRunResultRefMut)
        inst.ptr = <impl.ParseRunResult>ptr
        return inst

cdef class ParseRunResult(ParseRunResultRefMut):
    @staticmethod
    cdef ParseRunResult from_ptr(impl.ParseRunResult ptr):
        cdef ParseRunResult inst = ParseRunResult.__new__(ParseRunResult)
        inst.ptr = ptr
        return inst

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.ParseRunResult_drop(self.ptr)
            self.ptr = NULL

    def unwrap(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        cdef Run inst = Run.from_ptr(impl.ParseRunResult_unwrap(self.ptr))
        self.ptr = NULL  # Handing off to Run instance, do not dispose
        return inst
