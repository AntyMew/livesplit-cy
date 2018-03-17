from libc.stdint cimport uint8_t
from c_run cimport Run, RunRefMut, RunRef
from c_shared_timer cimport SharedTimer
from c_time_span cimport TimeSpan, TimeSpanRef
from c_time cimport Time, TimeRef

cdef extern from "livesplit_core.h":
    struct Timer_s
    ctypedef Timer_s* Timer
    ctypedef Timer_s* TimerRefMut
    ctypedef const Timer_s* TimerRef

    # Timer methods:
    Timer Timer_new(Run run)
    SharedTimer Timer_into_shared(Timer self)
    Run Timer_into_run(Timer self, bint update_splits)
    void Timer_drop(Timer self)
    # TimerRef methods:
    uint8_t Timer_current_timing_method(TimerRef self)
    const char* Timer_current_comparison(TimerRef self)
    bint Timer_is_game_time_initialized(TimerRef self)
    bint Timer_is_game_time_paused(TimerRef self)
    TimeSpanRef Timer_loading_times(TimerRef self)
    uint8_t Timer_current_phase(TimerRef self)
    RunRef Timer_get_run(TimerRef self)
    const char* Timer_save_as_lss(TimerRef self)
    void Timer_print_debug(TimerRef self)
    TimeRef Timer_current_time(TimerRef self)
    # TimerRefMut methods:
    bint Timer_replace_run(TimerRefMut self, RunRefMut run, bint update_splits)
    Run Timer_set_run(TimerRefMut self, Run run)
    void Timer_start(TimerRefMut self)
    void Timer_split(TimerRefMut self)
    void Timer_split_or_start(TimerRefMut self)
    void Timer_skip_split(TimerRefMut self)
    void Timer_undo_split(TimerRefMut self)
    void Timer_reset(TimerRefMut self, bint update_splits)
    void Timer_pause(TimerRefMut self)
    void Timer_resume(TimerRefMut self)
    void Timer_toggle_pause(TimerRefMut self)
    void Timer_toggle_pause_or_start(TimerRefMut self)
    void Timer_undo_all_pauses(TimerRefMut self)
    void Timer_set_current_timing_method(TimerRefMut self, uint8_t method)
    void Timer_switch_to_next_comparison(TimerRefMut self)
    void Timer_switch_to_previous_comparison(TimerRefMut self)
    void Timer_initialize_game_time(TimerRefMut self)
    void Timer_deinitialize_game_time(TimerRefMut self)
    void Timer_pause_game_time(TimerRefMut self)
    void Timer_resume_game_time(TimerRefMut self)
    void Timer_set_game_time(TimerRefMut self, TimeSpanRef time)
    void Timer_set_loading_times(TimerRefMut self, TimeSpanRef time)
