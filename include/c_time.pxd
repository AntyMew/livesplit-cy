from libc.stdint cimport uint8_t
from c_time_span cimport TimeSpan, TimeSpanRef

cdef extern from "livesplit_core.h":
    struct Time_s
    ctypedef Time_s* Time
    ctypedef Time_s* TimeRefMut
    ctypedef const Time_s* TimeRef

    # Time methods:
    void Time_drop(Time self)
    # TimeRef methods:
    Time Time_clone(TimeRef self)
    TimeSpanRef Time_real_time(TimeRef self)
    TimeSpanRef Time_game_time(TimeRef self)
    TimeSpanRef Time_index(TimeRef self, uint8_t timing_method)
