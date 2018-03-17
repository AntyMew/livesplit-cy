cdef extern from "livesplit_core.h":
    struct TimeSpan_s
    ctypedef TimeSpan_s* TimeSpan
    ctypedef TimeSpan_s* TimeSpanRefMut
    ctypedef const TimeSpan_s* TimeSpanRef

    # TimeSpan methods:
    TimeSpan TimeSpan_from_seconds(double seconds)
    void TimeSpan_drop(TimeSpan self)
    # TimeSpanRef methods:
    TimeSpan TimeSpan_clone(TimeSpanRef self)
    double TimeSpan_total_seconds(TimeSpanRef self)
