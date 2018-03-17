cdef extern from "livesplit_core.h":
    struct RunMetadata_s
    ctypedef RunMetadata_s* RunMetadata
    ctypedef RunMetadata_s* RunMetadataRefMut
    ctypedef RunMetadata_s* RunMetadataRef
    # Utility classes
    struct RunMetadataVariable_s
    ctypedef RunMetadataVariable_s* RunMetadataVariable
    ctypedef RunMetadataVariable_s* RunMetadataVariableRefMut
    ctypedef const RunMetadataVariable_s* RunMetadataVariableRef
    struct RunMetadataVariablesIter_s
    ctypedef RunMetadataVariablesIter_s* RunMetadataVariablesIter
    ctypedef RunMetadataVariablesIter_s* RunMetadataVariablesIterRefMut
    ctypedef const RunMetadataVariablesIter_s* RunMetadataVariablesIterRef

    # RunMetadataRef methods:
    const char* RunMetadata_run_id(RunMetadataRef self)
    const char* RunMetadata_platform_name(RunMetadataRef self)
    bint RunMetadata_uses_emulator(RunMetadataRef self)
    const char* RunMetadata_region_name(RunMetadataRef self)
    RunMetadataVariablesIter RunMetadata_variables(RunMetadataRef self)

    # RunMetadataVariable methods:
    void RunMetadataVariable_drop(RunMetadataVariable self)
    # RunMetadataVariableRef methods:
    const char* RunMetadataVariable_name(RunMetadataVariableRef self)
    const char* RunMetadataVariable_value(RunMetadataVariableRef self)

    # RunMetadataVariablesIter methods:
    void RunMetadataVariablesIter_drop(RunMetadataVariablesIter self)
    # RunMetadataVariablesIterRefMut methods:
    RunMetadataVariableRef RunMetadataVariablesIter_next(
        RunMetadataVariablesIterRefMut self)
