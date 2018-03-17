from libc.stdint cimport int64_t, uint32_t
from libc.stddef cimport size_t
from c_run_metadata cimport RunMetadataRef
from c_time_span cimport TimeSpanRef
from c_segment cimport Segment, SegmentRef
from c_attempt cimport AttemptRef

cdef extern from "livesplit_core.h":
    struct Run_s
    ctypedef Run_s* Run
    ctypedef Run_s* RunRefMut
    ctypedef const Run_s* RunRef
    # Utility classes:
    struct ParseRunResult_s
    ctypedef ParseRunResult_s* ParseRunResult
    ctypedef ParseRunResult_s* ParseRunResultRefMut
    ctypedef const ParseRunResult_s* ParseRunResultRef

    # Run methods:
    Run Run_new()
    ParseRunResult Run_parse(const void* data, size_t length,
                             const char* path, bint load_files)
    ParseRunResult Run_parse_file_handle(int64_t handle, const char* path,
                                         bint load_files)
    void Run_drop(Run self)
    # RunRef methods:
    Run Run_clone(RunRef self)
    const char* Run_game_name(RunRef self)
    const char* Run_game_icon(RunRef self)
    const char* Run_category_name(RunRef self)
    const char* Run_extended_file_name(RunRef self,
                                       bint use_extended_category_name)
    const char* Run_extended_name(RunRef self, bint use_extended_category_name)
    uint32_t Run_attempt_count(RunRef self)
    RunMetadataRef Run_metadata(RunRef self)
    TimeSpanRef Run_offset(RunRef self)
    size_t Run_len(RunRef self)
    SegmentRef Run_segment(RunRef self, size_t index)
    size_t Run_attempt_history_len(RunRef self)
    AttemptRef Run_attempt_history_index(RunRef self, size_t index)
    const char* Run_save_as_lss(RunRef self)
    size_t Run_custom_comparisons_len(RunRef self)
    const char* Run_custom_comparison(RunRef self, size_t index)
    const char* Run_auto_splitter_settngs(RunRef self)
    # RunRefMut methods:
    void Run_push_segment(RunRefMut self, Segment segment)
    void Run_set_game_name(RunRefMut self, const char* game)
    void Run_set_category_name(RunRefMut self, const char* category)

    # ParseRunResult methods:
    void ParseRunResult_drop(ParseRunResult self)
    Run ParseRunResult_unwrap(ParseRunResult self)
    # ParseRunResultRef methods:
    bint ParseRunResult_parsed_successfully(ParseRunResultRef self)
    const char* ParseRunResult_timer_kind(ParseRunResultRef self)
