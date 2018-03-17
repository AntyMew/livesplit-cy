cdef class TimerRef(object):
    @staticmethod
    cdef TimerRef from_ptr(impl.TimerRef ptr):
        cdef TimerRef inst = TimerRef.__new__(TimerRef)
        inst.ptr = <impl.Timer>ptr
        return inst

    def current_timing_method(self):
        # TODO: test me
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return <TimingMethod>impl.Timer_current_timing_method(self.ptr)

    def current_comparison(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Timer_current_comparison(self.ptr).decode()

    def is_game_time_initialized(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Timer_is_game_time_initialized(self.ptr)

    def is_game_time_paused(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Timer_is_game_time_paused(self.ptr)

    def loading_times(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeSpanRef.from_ptr(impl.Timer_loading_times(self.ptr))

    def current_phase(self):
        # TODO: test me
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return <TimerPhase>impl.Timer_current_phase(self.ptr)

    def get_run(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return RunRef.from_ptr(<impl.Run>impl.Timer_get_run(self.ptr))

    def save_as_lss(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Timer_save_as_lss(self.ptr).decode()

    def print_debug(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_print_debug(self.ptr)

    def current_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return TimeRef.from_ptr(impl.Timer_current_time(self.ptr))

cdef class TimerRefMut(TimerRef):
    @staticmethod
    cdef TimerRefMut from_ptr(impl.TimerRefMut ptr):
        cdef TimerRefMut inst = TimerRefMut.__new__(TimerRefMut)
        inst.ptr = <impl.Timer>ptr
        return inst

    def replace_run(self, RunRefMut run not None, bint update_splits):
        if self.ptr is NULL or run.ptr is NULL:
            raise ValueError("pointer is null")
        return impl.Timer_replace_run(self.ptr, run.ptr, update_splits)

    def set_run(self, Run run not None):
        if self.ptr is NULL or run.ptr is NULL:
            raise ValueError("pointer is null")
        run.ptr = impl.Timer_set_run(self.ptr, run.ptr)

    def start(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_start(self.ptr)

    def split(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_split(self.ptr)

    def split_or_start(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_split_or_start(self.ptr)

    def skip_split(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_skip_split(self.ptr)

    def undo_split(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_undo_split(self.ptr)

    def reset(self, bint update_splits):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_reset(self.ptr, update_splits)

    def pause(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_pause(self.ptr)

    def resume(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_resume(self.ptr)

    def toggle_pause(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_toggle_pause(self.ptr)

    def toggle_pause_or_start(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_toggle_pause_or_start(self.ptr)

    def undo_all_pauses(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_undo_all_pauses(self.ptr)

    def set_current_timing_method(self, TimingMethod method):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_set_current_timing_method(self.ptr, method)

    def switch_to_next_comparison(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_switch_to_next_comparison(self.ptr)

    def switch_to_previous_comparison(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_switch_to_previous_comparison(self.ptr)

    def initialize_game_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_initialize_game_time(self.ptr)

    def deinitialize_game_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_deinitialize_game_time(self.ptr)

    def pause_game_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_pause_game_time(self.ptr)

    def resume_game_time(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_resume_game_time(self.ptr)

    def set_game_time(self, TimeSpanRef time not None):
        if self.ptr is NULL or time.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_set_game_time(self.ptr, time.ptr)

    def set_loading_times(self, TimeSpanRef time not None):
        if self.ptr is NULL or time.ptr is NULL:
            raise ValueError("pointer is null")
        impl.Timer_set_loading_times(self.ptr, time.ptr)

cdef class Timer(TimerRefMut):
    @staticmethod
    cdef Timer from_ptr(impl.Timer ptr):
        cdef Timer inst = Timer.__new__(Timer)
        inst.ptr = ptr
        return inst

    def __init__(self, Run run not None):
        if self.ptr is NULL:
            self.ptr = impl.Timer_new(run.ptr)

    def __dealloc__(self):
        if self.ptr is not NULL:
            impl.Timer_drop(self.ptr)
            self.ptr = NULL

    def into_shared(self):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return SharedTimer.from_ptr(impl.Timer_into_shared(self.ptr))

    def into_run(self, bint update_splits):
        if self.ptr is NULL:
            raise ValueError("pointer is null")
        return Run.from_ptr(impl.Timer_into_run(self.ptr, update_splits))
