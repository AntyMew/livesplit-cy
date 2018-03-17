cimport c_run_metadata as impl

cdef class RunMetadataRef(object):
    cdef impl.RunMetadata ptr

    @staticmethod
    cdef RunMetadataRef from_ptr(impl.RunMetadataRef ptr)

cdef class RunMetadataRefMut(RunMetadataRef):
    @staticmethod
    cdef RunMetadataRefMut from_ptr(impl.RunMetadataRefMut ptr)

cdef class RunMetadata(RunMetadataRefMut):
    @staticmethod
    cdef RunMetadata from_ptr(impl.RunMetadata ptr)


cdef class RunMetadataVariableRef(object):
    cdef impl.RunMetadataVariable ptr

    @staticmethod
    cdef RunMetadata from_ptr(impl.RunMetadata ptr)

cdef class RunMetadataVariableRefMut(RunMetadataVariableRef):
    @staticmethod
    cdef RunMetadata from_ptr(impl.RunMetadata ptr)

cdef class RunMetadataVariable(RunMetadataVariableRefMut):
    @staticmethod
    cdef RunMetadata from_ptr(impl.RunMetadata ptr)


cdef class RunMetadataVariablesIterRef(object):
    cdef impl.RunMetadataVariablesIter ptr

    @staticmethod
    cdef RunMetadataVariablesIterRef from_ptr(
        impl.RunMetadataVariablesIterRef ptr)

cdef class RunMetadataVariablesIterRefMut(RunMetadataVariablesIterRef):
    @staticmethod
    cdef RunMetadataVariablesIterRefMut from_ptr(
        impl.RunMetadataVariablesIterRefMut ptr)

cdef class RunMetadataVariablesIter(RunMetadataVariablesIterRefMut):
    @staticmethod
    cdef RunMetadataVariablesIter from_ptr(impl.RunMetadataVariablesIter ptr)
