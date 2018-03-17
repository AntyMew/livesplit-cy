cdef extern from "livesplit_core.h":
    struct AtomicDateTime_s
    ctypedef AtomicDateTime_s* AtomicDateTime
    ctypedef AtomicDateTime_s* AtomicDateTimeRefMut
    ctypedef const AtomicDateTime_s* AtomicDateTimeRef

    # AtomicDateTime methods:
    void AtomicDateTime_drop(AtomicDateTime self)
    # AtomicDateTimeRef methods:
    bint AtomicDateTime_is_synchronized(AtomicDateTimeRef self)
    const char* AtomicDateTime_to_rfc2822(AtomicDateTimeRef self)
    const char* AtomicDateTime_to_rfc3339(AtomicDateTimeRef self)
