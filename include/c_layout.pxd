from c_timer cimport TimerRef
from c_component cimport Component

cdef extern from "livesplit_core.h":
    struct Layout_s
    ctypedef Layout_s* Layout
    ctypedef Layout_s* LayoutRefMut
    ctypedef const Layout_s* LayoutRef

    # Layout methods:
    Layout Layout_new()
    Layout Layout_default_layout()
    Layout Layout_parse_json(const char* settings)
    void Layout_drop(Layout self)
    # LayoutRef methods:
    Layout Layout_clone(LayoutRef self)
    const char* Layout_settings_as_json(LayoutRef self)
    # LayoutRefMut methods
    const char* Layout_state_as_json(LayoutRefMut self, TimerRef timer)
    void Layout_push(LayoutRefMut self, Component component)
    void Layout_scroll_up(LayoutRefMut self)
    void Layout_scroll_down(LayoutRefMut self)
    void Layout_remount(LayoutRefMut self)
