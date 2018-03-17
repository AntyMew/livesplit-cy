#ifndef LIVESPLIT_CORE_H
#define LIVESPLIT_CORE_H

#ifdef __cplusplus
#define restrict __restrict
namespace LiveSplit {
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

struct AtomicDateTime_s;
typedef struct AtomicDateTime_s *restrict AtomicDateTime;
typedef struct AtomicDateTime_s *restrict AtomicDateTimeRefMut;
typedef struct AtomicDateTime_s const* AtomicDateTimeRef;

struct Attempt_s;
typedef struct Attempt_s *restrict Attempt;
typedef struct Attempt_s *restrict AttemptRefMut;
typedef struct Attempt_s const* AttemptRef;

struct BlankSpaceComponent_s;
typedef struct BlankSpaceComponent_s *restrict BlankSpaceComponent;
typedef struct BlankSpaceComponent_s *restrict BlankSpaceComponentRefMut;
typedef struct BlankSpaceComponent_s const* BlankSpaceComponentRef;

struct BlankSpaceComponentState_s;
typedef struct BlankSpaceComponentState_s *restrict BlankSpaceComponentState;
typedef struct BlankSpaceComponentState_s *restrict BlankSpaceComponentStateRefMut;
typedef struct BlankSpaceComponentState_s const* BlankSpaceComponentStateRef;

struct Component_s;
typedef struct Component_s *restrict Component;
typedef struct Component_s *restrict ComponentRefMut;
typedef struct Component_s const* ComponentRef;

struct CurrentComparisonComponent_s;
typedef struct CurrentComparisonComponent_s *restrict CurrentComparisonComponent;
typedef struct CurrentComparisonComponent_s *restrict CurrentComparisonComponentRefMut;
typedef struct CurrentComparisonComponent_s const* CurrentComparisonComponentRef;

struct CurrentComparisonComponentState_s;
typedef struct CurrentComparisonComponentState_s *restrict CurrentComparisonComponentState;
typedef struct CurrentComparisonComponentState_s *restrict CurrentComparisonComponentStateRefMut;
typedef struct CurrentComparisonComponentState_s const* CurrentComparisonComponentStateRef;

struct CurrentPaceComponent_s;
typedef struct CurrentPaceComponent_s *restrict CurrentPaceComponent;
typedef struct CurrentPaceComponent_s *restrict CurrentPaceComponentRefMut;
typedef struct CurrentPaceComponent_s const* CurrentPaceComponentRef;

struct CurrentPaceComponentState_s;
typedef struct CurrentPaceComponentState_s *restrict CurrentPaceComponentState;
typedef struct CurrentPaceComponentState_s *restrict CurrentPaceComponentStateRefMut;
typedef struct CurrentPaceComponentState_s const* CurrentPaceComponentStateRef;

struct DeltaComponent_s;
typedef struct DeltaComponent_s *restrict DeltaComponent;
typedef struct DeltaComponent_s *restrict DeltaComponentRefMut;
typedef struct DeltaComponent_s const* DeltaComponentRef;

struct DeltaComponentState_s;
typedef struct DeltaComponentState_s *restrict DeltaComponentState;
typedef struct DeltaComponentState_s *restrict DeltaComponentStateRefMut;
typedef struct DeltaComponentState_s const* DeltaComponentStateRef;

struct DetailedTimerComponent_s;
typedef struct DetailedTimerComponent_s *restrict DetailedTimerComponent;
typedef struct DetailedTimerComponent_s *restrict DetailedTimerComponentRefMut;
typedef struct DetailedTimerComponent_s const* DetailedTimerComponentRef;

struct DetailedTimerComponentState_s;
typedef struct DetailedTimerComponentState_s *restrict DetailedTimerComponentState;
typedef struct DetailedTimerComponentState_s *restrict DetailedTimerComponentStateRefMut;
typedef struct DetailedTimerComponentState_s const* DetailedTimerComponentStateRef;

struct GeneralLayoutSettings_s;
typedef struct GeneralLayoutSettings_s *restrict GeneralLayoutSettings;
typedef struct GeneralLayoutSettings_s *restrict GeneralLayoutSettingsRefMut;
typedef struct GeneralLayoutSettings_s const* GeneralLayoutSettingsRef;

struct GraphComponent_s;
typedef struct GraphComponent_s *restrict GraphComponent;
typedef struct GraphComponent_s *restrict GraphComponentRefMut;
typedef struct GraphComponent_s const* GraphComponentRef;

struct GraphComponentState_s;
typedef struct GraphComponentState_s *restrict GraphComponentState;
typedef struct GraphComponentState_s *restrict GraphComponentStateRefMut;
typedef struct GraphComponentState_s const* GraphComponentStateRef;

struct HotkeySystem_s;
typedef struct HotkeySystem_s *restrict HotkeySystem;
typedef struct HotkeySystem_s *restrict HotkeySystemRefMut;
typedef struct HotkeySystem_s const* HotkeySystemRef;

struct Layout_s;
typedef struct Layout_s *restrict Layout;
typedef struct Layout_s *restrict LayoutRefMut;
typedef struct Layout_s const* LayoutRef;

struct LayoutEditor_s;
typedef struct LayoutEditor_s *restrict LayoutEditor;
typedef struct LayoutEditor_s *restrict LayoutEditorRefMut;
typedef struct LayoutEditor_s const* LayoutEditorRef;

struct ParseRunResult_s;
typedef struct ParseRunResult_s *restrict ParseRunResult;
typedef struct ParseRunResult_s *restrict ParseRunResultRefMut;
typedef struct ParseRunResult_s const* ParseRunResultRef;

struct PossibleTimeSaveComponent_s;
typedef struct PossibleTimeSaveComponent_s *restrict PossibleTimeSaveComponent;
typedef struct PossibleTimeSaveComponent_s *restrict PossibleTimeSaveComponentRefMut;
typedef struct PossibleTimeSaveComponent_s const* PossibleTimeSaveComponentRef;

struct PossibleTimeSaveComponentState_s;
typedef struct PossibleTimeSaveComponentState_s *restrict PossibleTimeSaveComponentState;
typedef struct PossibleTimeSaveComponentState_s *restrict PossibleTimeSaveComponentStateRefMut;
typedef struct PossibleTimeSaveComponentState_s const* PossibleTimeSaveComponentStateRef;

struct PotentialCleanUp_s;
typedef struct PotentialCleanUp_s *restrict PotentialCleanUp;
typedef struct PotentialCleanUp_s *restrict PotentialCleanUpRefMut;
typedef struct PotentialCleanUp_s const* PotentialCleanUpRef;

struct PreviousSegmentComponent_s;
typedef struct PreviousSegmentComponent_s *restrict PreviousSegmentComponent;
typedef struct PreviousSegmentComponent_s *restrict PreviousSegmentComponentRefMut;
typedef struct PreviousSegmentComponent_s const* PreviousSegmentComponentRef;

struct PreviousSegmentComponentState_s;
typedef struct PreviousSegmentComponentState_s *restrict PreviousSegmentComponentState;
typedef struct PreviousSegmentComponentState_s *restrict PreviousSegmentComponentStateRefMut;
typedef struct PreviousSegmentComponentState_s const* PreviousSegmentComponentStateRef;

struct Run_s;
typedef struct Run_s *restrict Run;
typedef struct Run_s *restrict RunRefMut;
typedef struct Run_s const* RunRef;

struct RunEditor_s;
typedef struct RunEditor_s *restrict RunEditor;
typedef struct RunEditor_s *restrict RunEditorRefMut;
typedef struct RunEditor_s const* RunEditorRef;

struct RunMetadata_s;
typedef struct RunMetadata_s *restrict RunMetadata;
typedef struct RunMetadata_s *restrict RunMetadataRefMut;
typedef struct RunMetadata_s const* RunMetadataRef;

struct RunMetadataVariable_s;
typedef struct RunMetadataVariable_s *restrict RunMetadataVariable;
typedef struct RunMetadataVariable_s *restrict RunMetadataVariableRefMut;
typedef struct RunMetadataVariable_s const* RunMetadataVariableRef;

struct RunMetadataVariablesIter_s;
typedef struct RunMetadataVariablesIter_s *restrict RunMetadataVariablesIter;
typedef struct RunMetadataVariablesIter_s *restrict RunMetadataVariablesIterRefMut;
typedef struct RunMetadataVariablesIter_s const* RunMetadataVariablesIterRef;

struct Segment_s;
typedef struct Segment_s *restrict Segment;
typedef struct Segment_s *restrict SegmentRefMut;
typedef struct Segment_s const* SegmentRef;

struct SegmentHistory_s;
typedef struct SegmentHistory_s *restrict SegmentHistory;
typedef struct SegmentHistory_s *restrict SegmentHistoryRefMut;
typedef struct SegmentHistory_s const* SegmentHistoryRef;

struct SegmentHistoryElement_s;
typedef struct SegmentHistoryElement_s *restrict SegmentHistoryElement;
typedef struct SegmentHistoryElement_s *restrict SegmentHistoryElementRefMut;
typedef struct SegmentHistoryElement_s const* SegmentHistoryElementRef;

struct SegmentHistoryIter_s;
typedef struct SegmentHistoryIter_s *restrict SegmentHistoryIter;
typedef struct SegmentHistoryIter_s *restrict SegmentHistoryIterRefMut;
typedef struct SegmentHistoryIter_s const* SegmentHistoryIterRef;

struct SeparatorComponent_s;
typedef struct SeparatorComponent_s *restrict SeparatorComponent;
typedef struct SeparatorComponent_s *restrict SeparatorComponentRefMut;
typedef struct SeparatorComponent_s const* SeparatorComponentRef;

struct SettingValue_s;
typedef struct SettingValue_s *restrict SettingValue;
typedef struct SettingValue_s *restrict SettingValueRefMut;
typedef struct SettingValue_s const* SettingValueRef;

struct SharedTimer_s;
typedef struct SharedTimer_s *restrict SharedTimer;
typedef struct SharedTimer_s *restrict SharedTimerRefMut;
typedef struct SharedTimer_s const* SharedTimerRef;

struct SplitsComponent_s;
typedef struct SplitsComponent_s *restrict SplitsComponent;
typedef struct SplitsComponent_s *restrict SplitsComponentRefMut;
typedef struct SplitsComponent_s const* SplitsComponentRef;

struct SplitsComponentState_s;
typedef struct SplitsComponentState_s *restrict SplitsComponentState;
typedef struct SplitsComponentState_s *restrict SplitsComponentStateRefMut;
typedef struct SplitsComponentState_s const* SplitsComponentStateRef;

struct SumOfBestCleaner_s;
typedef struct SumOfBestCleaner_s *restrict SumOfBestCleaner;
typedef struct SumOfBestCleaner_s *restrict SumOfBestCleanerRefMut;
typedef struct SumOfBestCleaner_s const* SumOfBestCleanerRef;

struct SumOfBestComponent_s;
typedef struct SumOfBestComponent_s *restrict SumOfBestComponent;
typedef struct SumOfBestComponent_s *restrict SumOfBestComponentRefMut;
typedef struct SumOfBestComponent_s const* SumOfBestComponentRef;

struct SumOfBestComponentState_s;
typedef struct SumOfBestComponentState_s *restrict SumOfBestComponentState;
typedef struct SumOfBestComponentState_s *restrict SumOfBestComponentStateRefMut;
typedef struct SumOfBestComponentState_s const* SumOfBestComponentStateRef;

struct TextComponent_s;
typedef struct TextComponent_s *restrict TextComponent;
typedef struct TextComponent_s *restrict TextComponentRefMut;
typedef struct TextComponent_s const* TextComponentRef;

struct TextComponentState_s;
typedef struct TextComponentState_s *restrict TextComponentState;
typedef struct TextComponentState_s *restrict TextComponentStateRefMut;
typedef struct TextComponentState_s const* TextComponentStateRef;

struct Time_s;
typedef struct Time_s *restrict Time;
typedef struct Time_s *restrict TimeRefMut;
typedef struct Time_s const* TimeRef;

struct TimeSpan_s;
typedef struct TimeSpan_s *restrict TimeSpan;
typedef struct TimeSpan_s *restrict TimeSpanRefMut;
typedef struct TimeSpan_s const* TimeSpanRef;

struct Timer_s;
typedef struct Timer_s *restrict Timer;
typedef struct Timer_s *restrict TimerRefMut;
typedef struct Timer_s const* TimerRef;

struct TimerComponent_s;
typedef struct TimerComponent_s *restrict TimerComponent;
typedef struct TimerComponent_s *restrict TimerComponentRefMut;
typedef struct TimerComponent_s const* TimerComponentRef;

struct TimerComponentState_s;
typedef struct TimerComponentState_s *restrict TimerComponentState;
typedef struct TimerComponentState_s *restrict TimerComponentStateRefMut;
typedef struct TimerComponentState_s const* TimerComponentStateRef;

struct TimerReadLock_s;
typedef struct TimerReadLock_s *restrict TimerReadLock;
typedef struct TimerReadLock_s *restrict TimerReadLockRefMut;
typedef struct TimerReadLock_s const* TimerReadLockRef;

struct TimerWriteLock_s;
typedef struct TimerWriteLock_s *restrict TimerWriteLock;
typedef struct TimerWriteLock_s *restrict TimerWriteLockRefMut;
typedef struct TimerWriteLock_s const* TimerWriteLockRef;

struct TitleComponent_s;
typedef struct TitleComponent_s *restrict TitleComponent;
typedef struct TitleComponent_s *restrict TitleComponentRefMut;
typedef struct TitleComponent_s const* TitleComponentRef;

struct TitleComponentState_s;
typedef struct TitleComponentState_s *restrict TitleComponentState;
typedef struct TitleComponentState_s *restrict TitleComponentStateRefMut;
typedef struct TitleComponentState_s const* TitleComponentStateRef;

struct TotalPlaytimeComponent_s;
typedef struct TotalPlaytimeComponent_s *restrict TotalPlaytimeComponent;
typedef struct TotalPlaytimeComponent_s *restrict TotalPlaytimeComponentRefMut;
typedef struct TotalPlaytimeComponent_s const* TotalPlaytimeComponentRef;

struct TotalPlaytimeComponentState_s;
typedef struct TotalPlaytimeComponentState_s *restrict TotalPlaytimeComponentState;
typedef struct TotalPlaytimeComponentState_s *restrict TotalPlaytimeComponentStateRefMut;
typedef struct TotalPlaytimeComponentState_s const* TotalPlaytimeComponentStateRef;


/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void AtomicDateTime_drop(AtomicDateTime self);
/**
Represents whether the date time is actually properly derived from an
atomic clock. If the synchronization with the atomic clock didn't happen
yet or failed, this is set to false.
*/
bool AtomicDateTime_is_synchronized(AtomicDateTimeRef self);
/**
Converts this atomic date time into a RFC 2822 formatted date time.
*/
char const* AtomicDateTime_to_rfc2822(AtomicDateTimeRef self);
/**
Converts this atomic date time into a RFC 3339 formatted date time.
*/
char const* AtomicDateTime_to_rfc3339(AtomicDateTimeRef self);

/**
Accesses the unique index of the attempt. This index is unique for the
Run, not for all of them.
*/
int32_t Attempt_index(AttemptRef self);
/**
Accesses the split time of the last segment. If the attempt got reset
early and didn't finish, this may be empty.
*/
TimeRef Attempt_time(AttemptRef self);
/**
Accesses the amount of time the attempt has been paused for. If it is not
known, this returns NULL. This means that it may not necessarily be
possible to differentiate whether a Run has not been paused or it simply
wasn't stored.
*/
TimeSpanRef Attempt_pause_time(AttemptRef self);
/**
Accesses the point in time the attempt was started at. This returns NULL
if this information is not known.
*/
AtomicDateTime Attempt_started(AttemptRef self);
/**
Accesses the point in time the attempt was ended at. This returns NULL if
this information is not known.
*/
AtomicDateTime Attempt_ended(AttemptRef self);

/**
Creates a new Blank Space Component.
*/
BlankSpaceComponent BlankSpaceComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void BlankSpaceComponent_drop(BlankSpaceComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component BlankSpaceComponent_into_generic(BlankSpaceComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* BlankSpaceComponent_state_as_json(BlankSpaceComponentRefMut self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
BlankSpaceComponentState BlankSpaceComponent_state(BlankSpaceComponentRefMut self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void BlankSpaceComponentState_drop(BlankSpaceComponentState self);
/**
The height of the component.
*/
uint32_t BlankSpaceComponentState_height(BlankSpaceComponentStateRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Component_drop(Component self);

/**
Creates a new Current Comparison Component.
*/
CurrentComparisonComponent CurrentComparisonComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void CurrentComparisonComponent_drop(CurrentComparisonComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component CurrentComparisonComponent_into_generic(CurrentComparisonComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* CurrentComparisonComponent_state_as_json(CurrentComparisonComponentRefMut self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
CurrentComparisonComponentState CurrentComparisonComponent_state(CurrentComparisonComponentRefMut self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void CurrentComparisonComponentState_drop(CurrentComparisonComponentState self);
/**
The label's text.
*/
char const* CurrentComparisonComponentState_text(CurrentComparisonComponentStateRef self);
/**
The name of the comparison that is currently selected to be compared
against.
*/
char const* CurrentComparisonComponentState_comparison(CurrentComparisonComponentStateRef self);

/**
Creates a new Current Pace Component.
*/
CurrentPaceComponent CurrentPaceComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void CurrentPaceComponent_drop(CurrentPaceComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component CurrentPaceComponent_into_generic(CurrentPaceComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* CurrentPaceComponent_state_as_json(CurrentPaceComponentRefMut self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
CurrentPaceComponentState CurrentPaceComponent_state(CurrentPaceComponentRefMut self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void CurrentPaceComponentState_drop(CurrentPaceComponentState self);
/**
The label's text.
*/
char const* CurrentPaceComponentState_text(CurrentPaceComponentStateRef self);
/**
The current pace.
*/
char const* CurrentPaceComponentState_time(CurrentPaceComponentStateRef self);

/**
Creates a new Delta Component.
*/
DeltaComponent DeltaComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void DeltaComponent_drop(DeltaComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component DeltaComponent_into_generic(DeltaComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* DeltaComponent_state_as_json(DeltaComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and the layout
settings provided.
*/
DeltaComponentState DeltaComponent_state(DeltaComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void DeltaComponentState_drop(DeltaComponentState self);
/**
The label's text.
*/
char const* DeltaComponentState_text(DeltaComponentStateRef self);
/**
The delta.
*/
char const* DeltaComponentState_time(DeltaComponentStateRef self);
/**
The semantic coloring information the delta time carries.
*/
char const* DeltaComponentState_semantic_color(DeltaComponentStateRef self);

/**
Creates a new Detailed Timer Component.
*/
DetailedTimerComponent DetailedTimerComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void DetailedTimerComponent_drop(DetailedTimerComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component DetailedTimerComponent_into_generic(DetailedTimerComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* DetailedTimerComponent_state_as_json(DetailedTimerComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and layout settings
provided.
*/
DetailedTimerComponentState DetailedTimerComponent_state(DetailedTimerComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void DetailedTimerComponentState_drop(DetailedTimerComponentState self);
/**
The time shown by the component's main timer without the fractional part.
*/
char const* DetailedTimerComponentState_timer_time(DetailedTimerComponentStateRef self);
/**
The fractional part of the time shown by the main timer (including the dot).
*/
char const* DetailedTimerComponentState_timer_fraction(DetailedTimerComponentStateRef self);
/**
The semantic coloring information the main timer's time carries.
*/
char const* DetailedTimerComponentState_timer_semantic_color(DetailedTimerComponentStateRef self);
/**
The time shown by the component's segment timer without the fractional part.
*/
char const* DetailedTimerComponentState_segment_timer_time(DetailedTimerComponentStateRef self);
/**
The fractional part of the time shown by the segment timer (including the
dot).
*/
char const* DetailedTimerComponentState_segment_timer_fraction(DetailedTimerComponentStateRef self);
/**
Returns whether the first comparison is visible.
*/
bool DetailedTimerComponentState_comparison1_visible(DetailedTimerComponentStateRef self);
/**
Returns the name of the first comparison. You may not call this if the first
comparison is not visible.
*/
char const* DetailedTimerComponentState_comparison1_name(DetailedTimerComponentStateRef self);
/**
Returns the time of the first comparison. You may not call this if the first
comparison is not visible.
*/
char const* DetailedTimerComponentState_comparison1_time(DetailedTimerComponentStateRef self);
/**
Returns whether the second comparison is visible.
*/
bool DetailedTimerComponentState_comparison2_visible(DetailedTimerComponentStateRef self);
/**
Returns the name of the second comparison. You may not call this if the
second comparison is not visible.
*/
char const* DetailedTimerComponentState_comparison2_name(DetailedTimerComponentStateRef self);
/**
Returns the time of the second comparison. You may not call this if the
second comparison is not visible.
*/
char const* DetailedTimerComponentState_comparison2_time(DetailedTimerComponentStateRef self);
/**
The segment's icon encoded as a Data URL. This value is only specified
whenever the icon changes. If you explicitly want to query this value,
remount the component. The String itself may be empty. This indicates
that there is no icon.
*/
char const* DetailedTimerComponentState_icon_change(DetailedTimerComponentStateRef self);
/**
The name of the segment. This may be NULL if it's not supposed to be
visualized.
*/
char const* DetailedTimerComponentState_segment_name(DetailedTimerComponentStateRef self);

/**
Creates a default general layout settings configuration.
*/
GeneralLayoutSettings GeneralLayoutSettings_default(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void GeneralLayoutSettings_drop(GeneralLayoutSettings self);

/**
Creates a new Graph Component.
*/
GraphComponent GraphComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void GraphComponent_drop(GraphComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component GraphComponent_into_generic(GraphComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* GraphComponent_state_as_json(GraphComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and layout settings
provided.
*/
GraphComponentState GraphComponent_state(GraphComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void GraphComponentState_drop(GraphComponentState self);
/**
Returns the amount of points to visualize. Connect all of them to visualize
the graph. If the live delta is active, the last point is to be interpreted
as a preview of the next split that is about to happen. Use the partial fill
color to visualize the region beneath that graph segment.
*/
size_t GraphComponentState_points_len(GraphComponentStateRef self);
/**
Returns the x coordinate of the point specified. You may not provide an out
of bounds index.
*/
float GraphComponentState_point_x(GraphComponentStateRef self, size_t index);
/**
Returns the y coordinate of the point specified. You may not provide an out
of bounds index.
*/
float GraphComponentState_point_y(GraphComponentStateRef self, size_t index);
/**
Describes whether the segment the point specified is visualizing achieved a
new best segment time. Use the best segment color for it, in that case. You
may not provide an out of bounds index.
*/
bool GraphComponentState_point_is_best_segment(GraphComponentStateRef self, size_t index);
/**
Describes how many horizontal grid lines to visualize.
*/
size_t GraphComponentState_horizontal_grid_lines_len(GraphComponentStateRef self);
/**
Accesses the y coordinate of the horizontal grid line specified. You may not
provide an out of bounds index.
*/
float GraphComponentState_horizontal_grid_line(GraphComponentStateRef self, size_t index);
/**
Describes how many vertical grid lines to visualize.
*/
size_t GraphComponentState_vertical_grid_lines_len(GraphComponentStateRef self);
/**
Accesses the x coordinate of the vertical grid line specified. You may not
provide an out of bounds index.
*/
float GraphComponentState_vertical_grid_line(GraphComponentStateRef self, size_t index);
/**
The y coordinate that separates the region that shows the times that are
ahead of the comparison and those that are behind.
*/
float GraphComponentState_middle(GraphComponentStateRef self);
/**
If the live delta is active, the last point is to be interpreted as a
preview of the next split that is about to happen. Use the partial fill
color to visualize the region beneath that graph segment.
*/
bool GraphComponentState_is_live_delta_active(GraphComponentStateRef self);
/**
Describes whether the graph is flipped vertically. For visualizing the
graph, this usually doesn't need to be interpreted, as this information is
entirely encoded into the other variables.
*/
bool GraphComponentState_is_flipped(GraphComponentStateRef self);

/**
Creates a new Hotkey System for a Timer with the default hotkeys.
*/
HotkeySystem HotkeySystem_new(SharedTimer shared_timer);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void HotkeySystem_drop(HotkeySystem self);
/**
Deactivates the Hotkey System. No hotkeys will go through until it gets
activated again. If it's already deactivated, nothing happens.
*/
void HotkeySystem_deactivate(HotkeySystemRef self);
/**
Activates a previously deactivated Hotkey System. If it's already
active, nothing happens.
*/
void HotkeySystem_activate(HotkeySystemRef self);

/**
Creates a new empty layout with no components.
*/
Layout Layout_new(void);
/**
Creates a new default layout that contains a default set of components
in order to provide a good default layout for runners. Which components
are provided by this and how they are configured may change in the
future.
*/
Layout Layout_default_layout(void);
/**
Parses a layout from the given JSON description of its settings. NULL is
returned if it couldn't be parsed.
*/
Layout Layout_parse_json(char const* settings);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Layout_drop(Layout self);
/**
Clones the layout.
*/
Layout Layout_clone(LayoutRef self);
/**
Encodes the settings of the layout as JSON.
*/
char const* Layout_settings_as_json(LayoutRef self);
/**
Calculates the layout's state based on the timer provided and encodes it as
JSON. You can use this to visualize all of the components of a layout.
*/
char const* Layout_state_as_json(LayoutRefMut self, TimerRef timer);
/**
Adds a new component to the end of the layout.
*/
void Layout_push(LayoutRefMut self, Component component);
/**
Scrolls up all the components in the layout that can be scrolled up.
*/
void Layout_scroll_up(LayoutRefMut self);
/**
Scrolls down all the components in the layout that can be scrolled down.
*/
void Layout_scroll_down(LayoutRefMut self);
/**
Remounts all the components as if they were freshly initialized. Some
components may only provide some information whenever it changes or when
their state is first queried. Remounting returns this information again,
whenever the layout's state is queried the next time.
*/
void Layout_remount(LayoutRefMut self);

/**
Creates a new Layout Editor that modifies the Layout provided. Creation of
the Layout Editor fails when a Layout with no components is provided. In
that case NULL is returned instead.
*/
LayoutEditor LayoutEditor_new(Layout layout);
/**
Closes the Layout Editor and gives back access to the modified Layout. In
case you want to implement a Cancel Button, just dispose the Layout object
you get here.
*/
Layout LayoutEditor_close(LayoutEditor self);
/**
Encodes the Layout Editor's state as JSON in order to visualize it.
*/
char const* LayoutEditor_state_as_json(LayoutEditorRef self);
/**
Encodes the layout's state as JSON based on the timer provided. You can use
this to visualize all of the components of a layout, while it is still being
edited by the Layout Editor.
*/
char const* LayoutEditor_layout_state_as_json(LayoutEditorRefMut self, TimerRef timer);
/**
Selects the component with the given index in order to modify its
settings. Only a single component is selected at any given time. You may
not provide an invalid index.
*/
void LayoutEditor_select(LayoutEditorRefMut self, size_t index);
/**
Adds the component provided to the end of the layout. The newly added
component becomes the selected component.
*/
void LayoutEditor_add_component(LayoutEditorRefMut self, Component component);
/**
Removes the currently selected component, unless there's only one
component in the layout. The next component becomes the selected
component. If there's none, the previous component becomes the selected
component instead.
*/
void LayoutEditor_remove_component(LayoutEditorRefMut self);
/**
Moves the selected component up, unless the first component is selected.
*/
void LayoutEditor_move_component_up(LayoutEditorRefMut self);
/**
Moves the selected component down, unless the last component is
selected.
*/
void LayoutEditor_move_component_down(LayoutEditorRefMut self);
/**
Moves the selected component to the index provided. You may not provide
an invalid index.
*/
void LayoutEditor_move_component(LayoutEditorRefMut self, size_t dst_index);
/**
Duplicates the currently selected component. The copy gets placed right
after the selected component and becomes the newly selected component.
*/
void LayoutEditor_duplicate_component(LayoutEditorRefMut self);
/**
Sets a setting's value of the selected component by its setting index
to the given value.

This panics if the type of the value to be set is not compatible with
the type of the setting's value. A panic can also occur if the index of
the setting provided is out of bounds.
*/
void LayoutEditor_set_component_settings_value(LayoutEditorRefMut self, size_t index, SettingValue value);
/**
Sets a setting's value of the general settings by its setting index to
the given value.

This panics if the type of the value to be set is not compatible with
the type of the setting's value. A panic can also occur if the index of
the setting provided is out of bounds.
*/
void LayoutEditor_set_general_settings_value(LayoutEditorRefMut self, size_t index, SettingValue value);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void ParseRunResult_drop(ParseRunResult self);
/**
Moves the actual Run object out of the Result. You may not call this if the
Run wasn't parsed successfully.
*/
Run ParseRunResult_unwrap(ParseRunResult self);
/**
Returns true if the Run got parsed successfully. false is returned otherwise.
*/
bool ParseRunResult_parsed_successfully(ParseRunResultRef self);
/**
Accesses the name of the Parser that parsed the Run.
*/
char const* ParseRunResult_timer_kind(ParseRunResultRef self);

/**
Creates a new Possible Time Save Component.
*/
PossibleTimeSaveComponent PossibleTimeSaveComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void PossibleTimeSaveComponent_drop(PossibleTimeSaveComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component PossibleTimeSaveComponent_into_generic(PossibleTimeSaveComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* PossibleTimeSaveComponent_state_as_json(PossibleTimeSaveComponentRef self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
PossibleTimeSaveComponentState PossibleTimeSaveComponent_state(PossibleTimeSaveComponentRef self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void PossibleTimeSaveComponentState_drop(PossibleTimeSaveComponentState self);
/**
The label's text.
*/
char const* PossibleTimeSaveComponentState_text(PossibleTimeSaveComponentStateRef self);
/**
The current possible time save.
*/
char const* PossibleTimeSaveComponentState_time(PossibleTimeSaveComponentStateRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void PotentialCleanUp_drop(PotentialCleanUp self);
/**
Accesses the message describing the potential clean up that can be applied
to a Run.
*/
char const* PotentialCleanUp_message(PotentialCleanUpRef self);

/**
Creates a new Previous Segment Component.
*/
PreviousSegmentComponent PreviousSegmentComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void PreviousSegmentComponent_drop(PreviousSegmentComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component PreviousSegmentComponent_into_generic(PreviousSegmentComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* PreviousSegmentComponent_state_as_json(PreviousSegmentComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and the layout
settings provided.
*/
PreviousSegmentComponentState PreviousSegmentComponent_state(PreviousSegmentComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void PreviousSegmentComponentState_drop(PreviousSegmentComponentState self);
/**
The label's text.
*/
char const* PreviousSegmentComponentState_text(PreviousSegmentComponentStateRef self);
/**
The delta (and possibly the possible time save).
*/
char const* PreviousSegmentComponentState_time(PreviousSegmentComponentStateRef self);
/**
The semantic coloring information the delta time carries.
*/
char const* PreviousSegmentComponentState_semantic_color(PreviousSegmentComponentStateRef self);

/**
Creates a new Run object with no segments.
*/
Run Run_new(void);
/**
Attempts to parse a splits file from an array by invoking the corresponding
parser for the file format detected. A path to the splits file can be
provided, which helps saving the splits file again later. Additionally you
need to specify if additional files, like external images are allowed to be
loaded. If you are using livesplit-core in a server-like environment, set
this to false. Only client-side applications should set this to true.
*/
ParseRunResult Run_parse(void const* data, size_t length, char const* path, bool load_files);
/**
Attempts to parse a splits file from a file by invoking the corresponding
parser for the file format detected. A path to the splits file can be
provided, which helps saving the splits file again later. Additionally you
need to specify if additional files, like external images are allowed to be
loaded. If you are using livesplit-core in a server-like environment, set
this to false. Only client-side applications should set this to true. On
Unix you pass a file descriptor to this function. On Windows you pass a file
handle to this function. The file descriptor / handle does not get closed.
*/
ParseRunResult Run_parse_file_handle(int64_t handle, char const* path, bool load_files);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Run_drop(Run self);
/**
Clones the Run object.
*/
Run Run_clone(RunRef self);
/**
Accesses the name of the game this Run is for.
*/
char const* Run_game_name(RunRef self);
/**
Accesses the Data URL storing the game icon's data. If there is no game
icon, this returns an empty string instead of a URL.
*/
char const* Run_game_icon(RunRef self);
/**
Accesses the name of the category this Run is for.
*/
char const* Run_category_name(RunRef self);
/**
Returns a file name (without the extension) suitable for this Run that
is built the following way:

Game Name - Category Name

If either is empty, the dash is omitted. Special characters that cause
problems in file names are also omitted. If an extended category name is
used, the variables of the category are appended in a parenthesis.
*/
char const* Run_extended_file_name(RunRef self, bool use_extended_category_name);
/**
Returns a name suitable for this Run that is built the following way:

Game Name - Category Name

If either is empty, the dash is omitted. If an extended category name is
used, the variables of the category are appended in a parenthesis.
*/
char const* Run_extended_name(RunRef self, bool use_extended_category_name);
/**
Returns an extended category name that possibly includes the region,
platform and variables, depending on the arguments provided. An extended
category name may look like this:

Any% (No Tuner, JPN, Wii Emulator)
*/
char const* Run_extended_category_name(RunRef self, bool show_region, bool show_platform, bool show_variables);
/**
Returns the amount of runs that have been attempted with these splits.
*/
uint32_t Run_attempt_count(RunRef self);
/**
Accesses additional metadata of this Run, like the platform and region
of the game.
*/
RunMetadataRef Run_metadata(RunRef self);
/**
Accesses the time an attempt of this Run should start at.
*/
TimeSpanRef Run_offset(RunRef self);
/**
Returns the amount of segments stored in this Run.
*/
size_t Run_len(RunRef self);
/**
Accesses a certain segment of this Run. You may not provide an out of bounds
index.
*/
SegmentRef Run_segment(RunRef self, size_t index);
/**
Returns the amount attempt history elements are stored in this Run.
*/
size_t Run_attempt_history_len(RunRef self);
/**
Accesses the an attempt history element by its index. This does not store
the actual segment times, just the overall attempt information. Information
about the individual segments is stored within each segment. You may not
provide an out of bounds index.
*/
AttemptRef Run_attempt_history_index(RunRef self, size_t index);
/**
Saves a Run as a LiveSplit splits file (*.lss). If the run is actively in
use by a timer, use the appropriate method on the timer instead, in order to
properly save the current attempt as well.
*/
char const* Run_save_as_lss(RunRef self);
/**
Returns the amount of custom comparisons stored in this Run.
*/
size_t Run_custom_comparisons_len(RunRef self);
/**
Accesses a custom comparison stored in this Run by its index. This includes
`Personal Best` but excludes all the other Comparison Generators. You may
not provide an out of bounds index.
*/
char const* Run_custom_comparison(RunRef self, size_t index);
/**
Accesses the Auto Splitter Settings that are encoded as XML.
*/
char const* Run_auto_splitter_settings(RunRef self);
/**
Pushes the segment provided to the end of the list of segments of this Run.
*/
void Run_push_segment(RunRefMut self, Segment segment);
/**
Sets the name of the game this Run is for.
*/
void Run_set_game_name(RunRefMut self, char const* game);
/**
Sets the name of the category this Run is for.
*/
void Run_set_category_name(RunRefMut self, char const* category);

/**
Creates a new Run Editor that modifies the Run provided. Creation of the Run
Editor fails when a Run with no segments is provided. If a Run object with
no segments is provided, the Run Editor creation fails and NULL is
returned.
*/
RunEditor RunEditor_new(Run run);
/**
Closes the Run Editor and gives back access to the modified Run object. In
case you want to implement a Cancel Button, just dispose the Run object you
get here.
*/
Run RunEditor_close(RunEditor self);
/**
Calculates the Run Editor's state and encodes it as
JSON in order to visualize it.
*/
char const* RunEditor_state_as_json(RunEditorRefMut self);
/**
Selects a different timing method for being modified.
*/
void RunEditor_select_timing_method(RunEditorRefMut self, uint8_t method);
/**
Unselects the segment with the given index. If it's not selected or the
index is out of bounds, nothing happens. The segment is not unselected,
when it is the only segment that is selected. If the active segment is
unselected, the most recently selected segment remaining becomes the
active segment.
*/
void RunEditor_unselect(RunEditorRefMut self, size_t index);
/**
In addition to the segments that are already selected, the segment with
the given index is being selected. The segment chosen also becomes the
active segment.

This panics if the index of the segment provided is out of bounds.
*/
void RunEditor_select_additionally(RunEditorRefMut self, size_t index);
/**
Selects the segment with the given index. All other segments are
unselected. The segment chosen also becomes the active segment.

This panics if the index of the segment provided is out of bounds.
*/
void RunEditor_select_only(RunEditorRefMut self, size_t index);
/**
Sets the name of the game.
*/
void RunEditor_set_game_name(RunEditorRefMut self, char const* game);
/**
Sets the name of the category.
*/
void RunEditor_set_category_name(RunEditorRefMut self, char const* category);
/**
Parses and sets the timer offset from the string provided. The timer
offset specifies the time, the timer starts at when starting a new
attempt.
*/
bool RunEditor_parse_and_set_offset(RunEditorRefMut self, char const* offset);
/**
Parses and sets the attempt count from the string provided. Changing
this has no affect on the attempt history or the segment history. This
number is mostly just a visual number for the runner.
*/
bool RunEditor_parse_and_set_attempt_count(RunEditorRefMut self, char const* attempts);
/**
Sets the game's icon.
*/
void RunEditor_set_game_icon(RunEditorRefMut self, void const* data, size_t length);
/**
Removes the game's icon.
*/
void RunEditor_remove_game_icon(RunEditorRefMut self);
/**
Inserts a new empty segment above the active segment and adjusts the
Run's history information accordingly. The newly created segment is then
the only selected segment and also the active segment.
*/
void RunEditor_insert_segment_above(RunEditorRefMut self);
/**
Inserts a new empty segment below the active segment and adjusts the
Run's history information accordingly. The newly created segment is then
the only selected segment and also the active segment.
*/
void RunEditor_insert_segment_below(RunEditorRefMut self);
/**
Removes all the selected segments, unless all of them are selected. The
run's information is automatically adjusted properly. The next
not-to-be-removed segment after the active segment becomes the new
active segment. If there's none, then the next not-to-be-removed segment
before the active segment, becomes the new active segment.
*/
void RunEditor_remove_segments(RunEditorRefMut self);
/**
Moves all the selected segments up, unless the first segment is
selected. The run's information is automatically adjusted properly. The
active segment stays the active segment.
*/
void RunEditor_move_segments_up(RunEditorRefMut self);
/**
Moves all the selected segments down, unless the last segment is
selected. The run's information is automatically adjusted properly. The
active segment stays the active segment.
*/
void RunEditor_move_segments_down(RunEditorRefMut self);
/**
Sets the icon of the active segment.
*/
void RunEditor_active_set_icon(RunEditorRefMut self, void const* data, size_t length);
/**
Removes the icon of the active segment.
*/
void RunEditor_active_remove_icon(RunEditorRefMut self);
/**
Sets the name of the active segment.
*/
void RunEditor_active_set_name(RunEditorRefMut self, char const* name);
/**
Parses a split time from a string and sets it for the active segment with
the chosen timing method.
*/
bool RunEditor_active_parse_and_set_split_time(RunEditorRefMut self, char const* time);
/**
Parses a segment time from a string and sets it for the active segment with
the chosen timing method.
*/
bool RunEditor_active_parse_and_set_segment_time(RunEditorRefMut self, char const* time);
/**
Parses a best segment time from a string and sets it for the active segment
with the chosen timing method.
*/
bool RunEditor_active_parse_and_set_best_segment_time(RunEditorRefMut self, char const* time);
/**
Parses a comparison time for the provided comparison and sets it for the
active active segment with the chosen timing method.
*/
bool RunEditor_active_parse_and_set_comparison_time(RunEditorRefMut self, char const* comparison, char const* time);
/**
Adds a new custom comparison. It can't be added if it starts with
`[Race]` or already exists.
*/
bool RunEditor_add_comparison(RunEditorRefMut self, char const* comparison);
/**
Imports the Personal Best from the provided run as a comparison. The
comparison can't be added if its name starts with `[Race]` or it already
exists.
*/
bool RunEditor_import_comparison(RunEditorRefMut self, RunRef run, char const* comparison);
/**
Removes the chosen custom comparison. You can't remove a Comparison
Generator's Comparison or the Personal Best.
*/
void RunEditor_remove_comparison(RunEditorRefMut self, char const* comparison);
/**
Renames a comparison. The comparison can't be renamed if the new name of
the comparison starts with `[Race]` or it already exists.
*/
bool RunEditor_rename_comparison(RunEditorRefMut self, char const* old_name, char const* new_name);
/**
Clears out the Attempt History and the Segment Histories of all the
segments.
*/
void RunEditor_clear_history(RunEditorRefMut self);
/**
Clears out the Attempt History, the Segment Histories, all the times,
sets the Attempt Count to 0 and clears the speedrun.com run id
association. All Custom Comparisons other than `Personal Best` are
deleted as well.
*/
void RunEditor_clear_times(RunEditorRefMut self);
/**
Creates a Sum of Best Cleaner which allows you to interactively remove
potential issues in the segment history that lead to an inaccurate Sum
of Best. If you skip a split, whenever you will do the next split, the
combined segment time might be faster than the sum of the individual
best segments. The Sum of Best Cleaner will point out all of these and
allows you to delete them individually if any of them seem wrong.
*/
SumOfBestCleaner RunEditor_clean_sum_of_best(RunEditorRefMut self);

/**
Accesses the speedrun.com Run ID of the run. This Run ID specify which
Record on speedrun.com this run is associated with. This should be
changed once the Personal Best doesn't match up with that record
anymore. This may be empty if there's no association.
*/
char const* RunMetadata_run_id(RunMetadataRef self);
/**
Accesses the name of the platform this game is run on. This may be empty
if it's not specified.
*/
char const* RunMetadata_platform_name(RunMetadataRef self);
/**
Returns true if this speedrun is done on an emulator. However false
may also indicate that this information is simply not known.
*/
bool RunMetadata_uses_emulator(RunMetadataRef self);
/**
Accesses the name of the region this game is from. This may be empty if
it's not specified.
*/
char const* RunMetadata_region_name(RunMetadataRef self);
/**
Returns an iterator iterating over all the variables and their values
that have been specified.
*/
RunMetadataVariablesIter RunMetadata_variables(RunMetadataRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void RunMetadataVariable_drop(RunMetadataVariable self);
/**
Accesses the name of this Run Metadata variable.
*/
char const* RunMetadataVariable_name(RunMetadataVariableRef self);
/**
Accesses the value of this Run Metadata variable.
*/
char const* RunMetadataVariable_value(RunMetadataVariableRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void RunMetadataVariablesIter_drop(RunMetadataVariablesIter self);
/**
Accesses the next Run Metadata variable. Returns NULL if there are no more
variables.
*/
RunMetadataVariableRef RunMetadataVariablesIter_next(RunMetadataVariablesIterRefMut self);

/**
Creates a new Segment with the name given.
*/
Segment Segment_new(char const* name);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Segment_drop(Segment self);
/**
Accesses the name of the segment.
*/
char const* Segment_name(SegmentRef self);
/**
Accesses the icon of the segment encoded as a Data URL storing the image's
data. If the image's data is empty, this returns an empty string instead of
a URL.
*/
char const* Segment_icon(SegmentRef self);
/**
Accesses the specified comparison's time. If there's none for this
comparison, an empty time is being returned (but not stored in the
segment).
*/
TimeRef Segment_comparison(SegmentRef self, char const* comparison);
/**
Accesses the split time of the Personal Best for this segment. If it
doesn't exist, an empty time is returned.
*/
TimeRef Segment_personal_best_split_time(SegmentRef self);
/**
Accesses the Best Segment Time.
*/
TimeRef Segment_best_segment_time(SegmentRef self);
/**
Accesses the Segment History of this segment.
*/
SegmentHistoryRef Segment_segment_history(SegmentRef self);

/**
Iterates over all the segment times and their indices.
*/
SegmentHistoryIter SegmentHistory_iter(SegmentHistoryRef self);

/**
Accesses the index of the segment history element.
*/
int32_t SegmentHistoryElement_index(SegmentHistoryElementRef self);
/**
Accesses the segment time of the segment history element.
*/
TimeRef SegmentHistoryElement_time(SegmentHistoryElementRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SegmentHistoryIter_drop(SegmentHistoryIter self);
/**
Accesses the next Segment History element. Returns NULL if there are no
more elements.
*/
SegmentHistoryElementRef SegmentHistoryIter_next(SegmentHistoryIterRefMut self);

/**
Creates a new Separator Component.
*/
SeparatorComponent SeparatorComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SeparatorComponent_drop(SeparatorComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component SeparatorComponent_into_generic(SeparatorComponent self);

/**
Creates a new setting value from a boolean value.
*/
SettingValue SettingValue_from_bool(bool value);
/**
Creates a new setting value from an unsigned integer.
*/
SettingValue SettingValue_from_uint(uint64_t value);
/**
Creates a new setting value from a signed integer.
*/
SettingValue SettingValue_from_int(int64_t value);
/**
Creates a new setting value from a string.
*/
SettingValue SettingValue_from_string(char const* value);
/**
Creates a new setting value from a string that has the type `optional string`.
*/
SettingValue SettingValue_from_optional_string(char const* value);
/**
Creates a new empty setting value that has the type `optional string`.
*/
SettingValue SettingValue_from_optional_empty_string(void);
/**
Creates a new setting value from a floating point number.
*/
SettingValue SettingValue_from_float(double value);
/**
Creates a new setting value from an accuracy name. If it doesn't match a
known accuracy, NULL is returned.
*/
SettingValue SettingValue_from_accuracy(char const* value);
/**
Creates a new setting value from a digits format name. If it doesn't match a
known digits format, NULL is returned.
*/
SettingValue SettingValue_from_digits_format(char const* value);
/**
Creates a new setting value from a timing method name with the type
`optional timing method`. If it doesn't match a known timing method, NULL
is returned.
*/
SettingValue SettingValue_from_optional_timing_method(char const* value);
/**
Creates a new empty setting value with the type `optional timing method`.
*/
SettingValue SettingValue_from_optional_empty_timing_method(void);
/**
Creates a new setting value from the color provided as RGBA.
*/
SettingValue SettingValue_from_color(float r, float g, float b, float a);
/**
Creates a new setting value from the color provided as RGBA with the type
`optional color`.
*/
SettingValue SettingValue_from_optional_color(float r, float g, float b, float a);
/**
Creates a new empty setting value with the type `optional color`.
*/
SettingValue SettingValue_from_optional_empty_color(void);
/**
Creates a new setting value that is a transparent gradient.
*/
SettingValue SettingValue_from_transparent_gradient(void);
/**
Creates a new setting value from the vertical gradient provided as two RGBA colors.
*/
SettingValue SettingValue_from_vertical_gradient(float r1, float g1, float b1, float a1, float r2, float g2, float b2, float a2);
/**
Creates a new setting value from the horizontal gradient provided as two RGBA colors.
*/
SettingValue SettingValue_from_horizontal_gradient(float r1, float g1, float b1, float a1, float r2, float g2, float b2, float a2);
/**
Creates a new setting value from the alignment name provided. If it doesn't
match a known alignment, NULL is returned.
*/
SettingValue SettingValue_from_alignment(char const* value);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SettingValue_drop(SettingValue self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SharedTimer_drop(SharedTimer self);
/**
Creates a new shared timer handle that shares the same timer. The inner
timer object only gets disposed when the final handle gets disposed.
*/
SharedTimer SharedTimer_share(SharedTimerRef self);
/**
Requests read access to the timer that is being shared. This blocks the
thread as long as there is an active write lock. Dispose the read lock when
you are done using the timer.
*/
TimerReadLock SharedTimer_read(SharedTimerRef self);
/**
Requests write access to the timer that is being shared. This blocks the
thread as long as there are active write or read locks. Dispose the write
lock when you are done using the timer.
*/
TimerWriteLock SharedTimer_write(SharedTimerRef self);
/**
Replaces the timer that is being shared by the timer provided. This blocks
the thread as long as there are active write or read locks. Everyone who is
sharing the old timer will share the provided timer after successful
completion.
*/
void SharedTimer_replace_inner(SharedTimerRef self, Timer timer);

/**
Creates a new Splits Component.
*/
SplitsComponent SplitsComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SplitsComponent_drop(SplitsComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component SplitsComponent_into_generic(SplitsComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* SplitsComponent_state_as_json(SplitsComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and layout settings
provided.
*/
SplitsComponentState SplitsComponent_state(SplitsComponentRefMut self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Scrolls up the window of the segments that are shown. Doesn't move the
scroll window if it reaches the top of the segments.
*/
void SplitsComponent_scroll_up(SplitsComponentRefMut self);
/**
Scrolls down the window of the segments that are shown. Doesn't move the
scroll window if it reaches the bottom of the segments.
*/
void SplitsComponent_scroll_down(SplitsComponentRefMut self);
/**
The amount of segments to show in the list at any given time. If this is
set to 0, all the segments are shown. If this is set to a number lower
than the total amount of segments, only a certain window of all the
segments is shown. This window can scroll up or down.
*/
void SplitsComponent_set_visual_split_count(SplitsComponentRefMut self, size_t count);
/**
If there's more segments than segments that are shown, the window
showing the segments automatically scrolls up and down when the current
segment changes. This count determines the minimum number of future
segments to be shown in this scrolling window when it automatically
scrolls.
*/
void SplitsComponent_set_split_preview_count(SplitsComponentRefMut self, size_t count);
/**
If not every segment is shown in the scrolling window of segments, then
this determines whether the final segment is always to be shown, as it
contains valuable information about the total duration of the chosen
comparison, which is often the runner's Personal Best.
*/
void SplitsComponent_set_always_show_last_split(SplitsComponentRefMut self, bool always_show_last_split);
/**
If the last segment is to always be shown, this determines whether to
show a more pronounced separator in front of the last segment, if it is
not directly adjacent to the segment shown right before it in the
scrolling window.
*/
void SplitsComponent_set_separator_last_split(SplitsComponentRefMut self, bool separator_last_split);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SplitsComponentState_drop(SplitsComponentState self);
/**
Describes whether a more pronounced separator should be shown in front of
the last segment provided.
*/
bool SplitsComponentState_final_separator_shown(SplitsComponentStateRef self);
/**
Returns the amount of segments to visualize.
*/
size_t SplitsComponentState_len(SplitsComponentStateRef self);
/**
Returns the amount of icon changes that happened in this state object.
*/
size_t SplitsComponentState_icon_change_count(SplitsComponentStateRef self);
/**
Accesses the index of the segment of the icon change with the specified
index. This is based on the index in the run, not on the index of the
SplitState in the State object. The corresponding index is the index field
of the SplitState object. You may not provide an out of bounds index.
*/
size_t SplitsComponentState_icon_change_segment_index(SplitsComponentStateRef self, size_t icon_change_index);
/**
The segment's icon encoded as a Data URL of the icon change with the
specified index. The String itself may be empty. This indicates that there
is no icon. You may not provide an out of bounds index.
*/
char const* SplitsComponentState_icon_change_icon(SplitsComponentStateRef self, size_t icon_change_index);
/**
The name of the segment with the specified index. You may not provide an out
of bounds index.
*/
char const* SplitsComponentState_name(SplitsComponentStateRef self, size_t index);
/**
The delta to show for the segment with the specified index. You may not
provide an out of bounds index.
*/
char const* SplitsComponentState_delta(SplitsComponentStateRef self, size_t index);
/**
The split time to show for the segment with the specified index. You may not
provide an out of bounds index.
*/
char const* SplitsComponentState_time(SplitsComponentStateRef self, size_t index);
/**
The semantic coloring information the delta time carries of the segment with
the specified index. You may not provide an out of bounds index.
*/
char const* SplitsComponentState_semantic_color(SplitsComponentStateRef self, size_t index);
/**
Describes if the segment with the specified index is the segment the active
attempt is currently on.
*/
bool SplitsComponentState_is_current_split(SplitsComponentStateRef self, size_t index);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SumOfBestCleaner_drop(SumOfBestCleaner self);
/**
Returns the next potential clean up. If there are no more potential
clean ups, NULL is returned.
*/
PotentialCleanUp SumOfBestCleaner_next_potential_clean_up(SumOfBestCleanerRefMut self);
/**
Applies a clean up to the Run.
*/
void SumOfBestCleaner_apply(SumOfBestCleanerRefMut self, PotentialCleanUp clean_up);

/**
Creates a new Sum of Best Segments Component.
*/
SumOfBestComponent SumOfBestComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SumOfBestComponent_drop(SumOfBestComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component SumOfBestComponent_into_generic(SumOfBestComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* SumOfBestComponent_state_as_json(SumOfBestComponentRef self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
SumOfBestComponentState SumOfBestComponent_state(SumOfBestComponentRef self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void SumOfBestComponentState_drop(SumOfBestComponentState self);
/**
The label's text.
*/
char const* SumOfBestComponentState_text(SumOfBestComponentStateRef self);
/**
The sum of best segments.
*/
char const* SumOfBestComponentState_time(SumOfBestComponentStateRef self);

/**
Creates a new Text Component.
*/
TextComponent TextComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TextComponent_drop(TextComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component TextComponent_into_generic(TextComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* TextComponent_state_as_json(TextComponentRef self);
/**
Calculates the component's state.
*/
TextComponentState TextComponent_state(TextComponentRef self);
/**
Sets the centered text. If the current mode is split, it is switched to
centered mode.
*/
void TextComponent_set_center(TextComponentRefMut self, char const* text);
/**
Sets the left text. If the current mode is centered, it is switched to
split mode, with the right text being empty.
*/
void TextComponent_set_left(TextComponentRefMut self, char const* text);
/**
Sets the right text. If the current mode is centered, it is switched to
split mode, with the left text being empty.
*/
void TextComponent_set_right(TextComponentRefMut self, char const* text);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TextComponentState_drop(TextComponentState self);
/**
Accesses the left part of the text. If the text isn't split up, an empty
string is returned instead.
*/
char const* TextComponentState_left(TextComponentStateRef self);
/**
Accesses the right part of the text. If the text isn't split up, an empty
string is returned instead.
*/
char const* TextComponentState_right(TextComponentStateRef self);
/**
Accesses the centered text. If the text isn't centered, an empty string is
returned instead.
*/
char const* TextComponentState_center(TextComponentStateRef self);
/**
Returns whether the text is split up into a left and right part.
*/
bool TextComponentState_is_split(TextComponentStateRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Time_drop(Time self);
/**
Clones the time.
*/
Time Time_clone(TimeRef self);
/**
The Real Time value. This may be NULL if this time has no Real Time value.
*/
TimeSpanRef Time_real_time(TimeRef self);
/**
The Game Time value. This may be NULL if this time has no Game Time value.
*/
TimeSpanRef Time_game_time(TimeRef self);
/**
Access the time's value for the timing method specified.
*/
TimeSpanRef Time_index(TimeRef self, uint8_t timing_method);

/**
Creates a new Time Span from a given amount of seconds.
*/
TimeSpan TimeSpan_from_seconds(double seconds);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TimeSpan_drop(TimeSpan self);
/**
Clones the Time Span.
*/
TimeSpan TimeSpan_clone(TimeSpanRef self);
/**
Returns the total amount of seconds (including decimals) this Time Span
represents.
*/
double TimeSpan_total_seconds(TimeSpanRef self);

/**
Creates a new Timer based on a Run object storing all the information
about the splits. The Run object needs to have at least one segment, so
that the Timer can store the final time. If a Run object with no
segments is provided, the Timer creation fails and NULL is returned.
*/
Timer Timer_new(Run run);
/**
Consumes the Timer and creates a Shared Timer that can be shared across
multiple threads with multiple owners.
*/
SharedTimer Timer_into_shared(Timer self);
/**
Takes out the Run from the Timer and resets the current attempt if there
is one in progress. If the splits are to be updated, all the information
of the current attempt is stored in the Run's history. Otherwise the
current attempt's information is discarded.
*/
Run Timer_into_run(Timer self, bool update_splits);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void Timer_drop(Timer self);
/**
Returns the currently selected Timing Method.
*/
uint8_t Timer_current_timing_method(TimerRef self);
/**
Returns the current comparison that is being compared against. This may
be a custom comparison or one of the Comparison Generators.
*/
char const* Timer_current_comparison(TimerRef self);
/**
Returns whether Game Time is currently initialized. Game Time
automatically gets uninitialized for each new attempt.
*/
bool Timer_is_game_time_initialized(TimerRef self);
/**
Returns whether the Game Timer is currently paused. If the Game Timer is
not paused, it automatically increments similar to Real Time.
*/
bool Timer_is_game_time_paused(TimerRef self);
/**
Accesses the loading times. Loading times are defined as Game Time - Real Time.
*/
TimeSpanRef Timer_loading_times(TimerRef self);
/**
Returns the current Timer Phase.
*/
uint8_t Timer_current_phase(TimerRef self);
/**
Accesses the Run in use by the Timer.
*/
RunRef Timer_get_run(TimerRef self);
/**
Saves the Run in use by the Timer as a LiveSplit splits file (*.lss).
*/
char const* Timer_save_as_lss(TimerRef self);
/**
Prints out debug information representing the whole state of the Timer. This
is being written to stdout.
*/
void Timer_print_debug(TimerRef self);
/**
Returns the current time of the Timer. The Game Time is NULL if the Game
Time has not been initialized.
*/
TimeRef Timer_current_time(TimerRef self);
/**
Replaces the Run object used by the Timer with the Run object provided. If
the Run provided contains no segments, it can't be used for timing and is
not being modified. Otherwise the Run that was in use by the Timer gets
stored in the Run object provided. Before the Run is returned, the current
attempt is reset and the splits are being updated depending on the
`update_splits` parameter. The return value indicates whether the Run got
replaced successfully.
*/
bool Timer_replace_run(TimerRefMut self, RunRefMut run, bool update_splits);
/**
Sets the Run object used by the Timer with the Run object provided. If the
Run provided contains no segments, it can't be used for timing and gets
returned again. If the Run object can be set, the original Run object in use
by the Timer is disposed by this method and NULL is returned.
*/
Run Timer_set_run(TimerRefMut self, Run run);
/**
Starts the Timer if there is no attempt in progress. If that's not the
case, nothing happens.
*/
void Timer_start(TimerRefMut self);
/**
If an attempt is in progress, stores the current time as the time of the
current split. The attempt ends if the last split time is stored.
*/
void Timer_split(TimerRefMut self);
/**
Starts a new attempt or stores the current time as the time of the
current split. The attempt ends if the last split time is stored.
*/
void Timer_split_or_start(TimerRefMut self);
/**
Skips the current split if an attempt is in progress and the
current split is not the last split.
*/
void Timer_skip_split(TimerRefMut self);
/**
Removes the split time from the last split if an attempt is in progress
and there is a previous split. The Timer Phase also switches to
`Running` if it previously was `Ended`.
*/
void Timer_undo_split(TimerRefMut self);
/**
Resets the current attempt if there is one in progress. If the splits
are to be updated, all the information of the current attempt is stored
in the Run's history. Otherwise the current attempt's information is
discarded.
*/
void Timer_reset(TimerRefMut self, bool update_splits);
/**
Pauses an active attempt that is not paused.
*/
void Timer_pause(TimerRefMut self);
/**
Resumes an attempt that is paused.
*/
void Timer_resume(TimerRefMut self);
/**
Toggles an active attempt between `Paused` and `Running`.
*/
void Timer_toggle_pause(TimerRefMut self);
/**
Toggles an active attempt between `Paused` and `Running` or starts an
attempt if there's none in progress.
*/
void Timer_toggle_pause_or_start(TimerRefMut self);
/**
Removes all the pause times from the current time. If the current
attempt is paused, it also resumes that attempt. Additionally, if the
attempt is finished, the final split time is adjusted to not include the
pause times as well.

# Warning

This behavior is not entirely optimal, as generally only the final split
time is modified, while all other split times are left unmodified, which
may not be what actually happened during the run.
*/
void Timer_undo_all_pauses(TimerRefMut self);
/**
Sets the current Timing Method to the Timing Method provided.
*/
void Timer_set_current_timing_method(TimerRefMut self, uint8_t method);
/**
Switches the current comparison to the next comparison in the list.
*/
void Timer_switch_to_next_comparison(TimerRefMut self);
/**
Switches the current comparison to the previous comparison in the list.
*/
void Timer_switch_to_previous_comparison(TimerRefMut self);
/**
Initializes Game Time for the current attempt. Game Time automatically
gets uninitialized for each new attempt.
*/
void Timer_initialize_game_time(TimerRefMut self);
/**
Deinitializes Game Time for the current attempt.
*/
void Timer_deinitialize_game_time(TimerRefMut self);
/**
Pauses the Game Timer such that it doesn't automatically increment
similar to Real Time.
*/
void Timer_pause_game_time(TimerRefMut self);
/**
Resumes the Game Timer such that it automatically increments similar to
Real Time, starting from the Game Time it was paused at.
*/
void Timer_resume_game_time(TimerRefMut self);
/**
Sets the Game Time to the time specified. This also works if the Game
Time is paused, which can be used as away of updating the Game Timer
periodically without it automatically moving forward. This ensures that
the Game Timer never shows any time that is not coming from the game.
*/
void Timer_set_game_time(TimerRefMut self, TimeSpanRef time);
/**
Instead of setting the Game Time directly, this method can be used to
just specify the amount of time the game has been loading. The Game Time
is then automatically determined by Real Time - Loading Times.
*/
void Timer_set_loading_times(TimerRefMut self, TimeSpanRef time);

/**
Creates a new Timer Component.
*/
TimerComponent TimerComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TimerComponent_drop(TimerComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component TimerComponent_into_generic(TimerComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* TimerComponent_state_as_json(TimerComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);
/**
Calculates the component's state based on the timer and the layout
settings provided.
*/
TimerComponentState TimerComponent_state(TimerComponentRef self, TimerRef timer, GeneralLayoutSettingsRef layout_settings);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TimerComponentState_drop(TimerComponentState self);
/**
The time shown by the component without the fractional part.
*/
char const* TimerComponentState_time(TimerComponentStateRef self);
/**
The fractional part of the time shown (including the dot).
*/
char const* TimerComponentState_fraction(TimerComponentStateRef self);
/**
The semantic coloring information the time carries.
*/
char const* TimerComponentState_semantic_color(TimerComponentStateRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TimerReadLock_drop(TimerReadLock self);
/**
Accesses the timer.
*/
TimerRef TimerReadLock_timer(TimerReadLockRef self);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TimerWriteLock_drop(TimerWriteLock self);
/**
Accesses the timer.
*/
TimerRefMut TimerWriteLock_timer(TimerWriteLockRefMut self);

/**
Creates a new Title Component.
*/
TitleComponent TitleComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TitleComponent_drop(TitleComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component TitleComponent_into_generic(TitleComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* TitleComponent_state_as_json(TitleComponentRefMut self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
TitleComponentState TitleComponent_state(TitleComponentRefMut self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TitleComponentState_drop(TitleComponentState self);
/**
The game's icon encoded as a Data URL. This value is only specified whenever
the icon changes. If you explicitly want to query this value, remount the
component. The String itself may be empty. This indicates that there is no
icon. If no change occurred, NULL is returned instead.
*/
char const* TitleComponentState_icon_change(TitleComponentStateRef self);
/**
The first title line to show. This is either the game's name, or a
combination of the game's name and the category.
*/
char const* TitleComponentState_line1(TitleComponentStateRef self);
/**
By default the category name is shown on the second line. Based on the
settings, it can however instead be shown in a single line together with
the game name. In that case NULL is returned instead.
*/
char const* TitleComponentState_line2(TitleComponentStateRef self);
/**
Specifies whether the title should centered or aligned to the left
instead.
*/
bool TitleComponentState_is_centered(TitleComponentStateRef self);
/**
Returns whether the amount of successfully finished attempts is supposed to
be shown.
*/
bool TitleComponentState_shows_finished_runs(TitleComponentStateRef self);
/**
Returns the amount of successfully finished attempts.
*/
uint32_t TitleComponentState_finished_runs(TitleComponentStateRef self);
/**
Returns whether the amount of total attempts is supposed to be shown.
*/
bool TitleComponentState_shows_attempts(TitleComponentStateRef self);
/**
Returns the amount of total attempts.
*/
uint32_t TitleComponentState_attempts(TitleComponentStateRef self);

/**
Creates a new Total Playtime Component.
*/
TotalPlaytimeComponent TotalPlaytimeComponent_new(void);
/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TotalPlaytimeComponent_drop(TotalPlaytimeComponent self);
/**
Converts the component into a generic component suitable for using with a
layout.
*/
Component TotalPlaytimeComponent_into_generic(TotalPlaytimeComponent self);
/**
Encodes the component's state information as JSON.
*/
char const* TotalPlaytimeComponent_state_as_json(TotalPlaytimeComponentRefMut self, TimerRef timer);
/**
Calculates the component's state based on the timer provided.
*/
TotalPlaytimeComponentState TotalPlaytimeComponent_state(TotalPlaytimeComponentRefMut self, TimerRef timer);

/**
Frees the object, allowing it to clean up all of its memory. You need
to call this for every object that you don't use anymore and hasn't
already been freed.
*/
void TotalPlaytimeComponentState_drop(TotalPlaytimeComponentState self);
/**
The label's text.
*/
char const* TotalPlaytimeComponentState_text(TotalPlaytimeComponentStateRef self);
/**
The total playtime.
*/
char const* TotalPlaytimeComponentState_time(TotalPlaytimeComponentStateRef self);

#ifdef __cplusplus
}
}
#endif

#endif
