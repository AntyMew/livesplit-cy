from libc.stdint cimport int32_t
from c_time cimport Time, TimeRef

cdef extern from "livesplit_core.h":
    struct Segment_s
    ctypedef Segment_s* Segment
    ctypedef Segment_s* SegmentRefMut
    ctypedef const Segment_s* SegmentRef
    # Utility classes:
    struct SegmentHistory_s
    ctypedef SegmentHistory_s* SegmentHistory
    ctypedef SegmentHistory_s* SegmentHistoryRefMut
    ctypedef const SegmentHistory_s* SegmentHistoryRef
    struct SegmentHistoryElement_s
    ctypedef SegmentHistoryElement_s* SegmentHistoryElement
    ctypedef SegmentHistoryElement_s* SegmentHistoryElementRefMut
    ctypedef const SegmentHistoryElement_s* SegmentHistoryElementRef
    struct SegmentHistoryIter_s
    ctypedef SegmentHistoryIter_s* SegmentHistoryIter
    ctypedef SegmentHistoryIter_s* SegmentHistoryIterRefMut
    ctypedef const SegmentHistoryIter_s* SegmentHistoryIterRef

    # Segment methods:
    Segment Segment_new(const char* name)
    void Segment_drop(Segment self)
    # SegmentRef methods:
    const char* Segment_name(SegmentRef self)
    const char* Segment_icon(SegmentRef self)
    TimeRef Segment_comparison(SegmentRef self, const char* comparison)
    TimeRef Segment_personal_best_split_time(SegmentRef self)
    TimeRef Segment_best_segment_time(SegmentRef self)
    SegmentHistoryRef Segment_segment_history(SegmentRef self)

    # SegmentHistoryRef methods:
    SegmentHistoryIter SegmentHistory_iter(SegmentHistoryRef self)

    # SegmentHistoryElementRef methods:
    int32_t SegmentHistoryElement_index(SegmentHistoryElementRef self)
    TimeRef SegmentHistoryElement_time(SegmentHistoryElementRef self)

    # SegmentHistoryIter methods:
    void SegmentHistoryIter_drop(SegmentHistoryIter self)
    # SegmentHistoryIterRef methods:
    SegmentHistoryElementRef SegmentHistoryIter_next(
        SegmentHistoryIterRefMut self)
