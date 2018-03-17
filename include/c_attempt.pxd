from libc.stdint cimport int32_t
from c_time cimport TimeRef
from c_time_span cimport TimeSpanRef
from c_atomic_date_time cimport AtomicDateTime

cdef extern from "livesplit_core.h":
    struct Attempt_s
    ctypedef Attempt_s* Attempt
    ctypedef Attempt_s* AttemptRefMut
    ctypedef const Attempt_s* AttemptRef

    # AttemptRef methods:
    int32_t Attempt_index(AttemptRef self)
    TimeRef Attempt_time(AttemptRef self)
    TimeSpanRef Attempt_pause_time(AttemptRef self)
    AtomicDateTime Attempt_started(AttemptRef self)
    AtomicDateTime Attempt_ended(AttemptRef self)
