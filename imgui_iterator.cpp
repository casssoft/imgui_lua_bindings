// This was generated for version 1.47 WIP
// as you can see it doesn't really support initalizing imgui
// its probably easier to do in c++ anyways

//    IMGUI_API ImGuiIO&      GetIO();
// Unsupported return type ImGuiIO&
//    IMGUI_API ImGuiStyle&   GetStyle();
// Unsupported return type ImGuiStyle&
//    IMGUI_API ImDrawData*   GetDrawData();                              // same value as passed to your RenderDrawListsFn() function. valid after Render() and until the next call to NewFrame()
// Unsupported return type ImDrawData*
//    IMGUI_API void          NewFrame();
IMGUI_FUNCTION(NewFrame)
CALL_FUNCTION_NO_RET(NewFrame)
END_IMGUI_FUNC
//    IMGUI_API void          Render();
IMGUI_FUNCTION(Render)
CALL_FUNCTION_NO_RET(Render)
END_IMGUI_FUNC
//    IMGUI_API void          Shutdown();
IMGUI_FUNCTION(Shutdown)
CALL_FUNCTION_NO_RET(Shutdown)
END_IMGUI_FUNC
//    IMGUI_API void          ShowUserGuide();                            // help block
IMGUI_FUNCTION(ShowUserGuide)
CALL_FUNCTION_NO_RET(ShowUserGuide)
END_IMGUI_FUNC
//    IMGUI_API void          ShowStyleEditor(ImGuiStyle* ref = NULL);    // style editor block
// Unsupported arg type ImGuiStyle* ref = NULL
//    IMGUI_API void          ShowTestWindow(bool* opened = NULL);        // test window, demonstrate ImGui features
IMGUI_FUNCTION(ShowTestWindow)
OPTIONAL_BOOL_POINTER_ARG(opened)
CALL_FUNCTION_NO_RET(ShowTestWindow, opened)
END_BOOL_POINTER(opened)
END_IMGUI_FUNC
//    IMGUI_API void          ShowMetricsWindow(bool* opened = NULL);     // metrics window for debugging imgui
IMGUI_FUNCTION(ShowMetricsWindow)
OPTIONAL_BOOL_POINTER_ARG(opened)
CALL_FUNCTION_NO_RET(ShowMetricsWindow, opened)
END_BOOL_POINTER(opened)
END_IMGUI_FUNC
//    IMGUI_API bool          Begin(const char* name, bool* p_opened = NULL, ImGuiWindowFlags flags = 0);                                                   // see .cpp for details. return false when window is collapsed, so you can early out in your code. 'bool* p_opened' creates a widget on the upper-right to close the window (which sets your bool to false).
IMGUI_FUNCTION(Begin)
LABEL_ARG(name)
OPTIONAL_BOOL_POINTER_ARG(p_opened)
OPTIONAL_INT_ARG(flags, 0)
CALL_FUNCTION(Begin, bool, name, p_opened, flags)
IF_RET_ADD_END_STACK(0)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_opened)
END_IMGUI_FUNC
//    IMGUI_API bool          Begin(const char* name, bool* p_opened, const ImVec2& size_on_first_use, float bg_alpha = -1.0f, ImGuiWindowFlags flags = 0); // this is the older/longer API. the extra parameters aren't very relevant. call SetNextWindowSize() instead if you want to set a window size. For regular windows, 'size_on_first_use' only applies to the first time EVER the window is created and probably not what you want! maybe obsolete this API eventually.
IMGUI_FUNCTION(Begin_5)
LABEL_ARG(name)
BOOL_POINTER_ARG(p_opened)
IM_VEC_2_ARG(size_on_first_use)
OPTIONAL_NUMBER_ARG(bg_alpha, -1.0f)
OPTIONAL_INT_ARG(flags, 0)
CALL_FUNCTION(Begin, bool, name, p_opened, size_on_first_use, -1.0f, flags)
IF_RET_ADD_END_STACK(0)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_opened)
END_IMGUI_FUNC
//    IMGUI_API void          End();
IMGUI_FUNCTION(End)
CALL_FUNCTION_NO_RET(End)
POP_END_STACK(0)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginChild(const char* str_id, const ImVec2& size = ImVec2 0 0, bool border = false, ImGuiWindowFlags extra_flags = 0);  // begin a scrolling region. size==0.0f: use remaining window size, size<0.0f: use remaining window size minus abs(size). size>0.0f: fixed size. each axis can use a different mode, e.g. ImVec2 0 400.
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API bool          BeginChild(ImGuiID id, const ImVec2& size = ImVec2 0 0, bool border = false, ImGuiWindowFlags extra_flags = 0);          // "
// Unsupported arg type ImGuiID id
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API void          EndChild();
IMGUI_FUNCTION(EndChild)
CALL_FUNCTION_NO_RET(EndChild)
POP_END_STACK(1)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetContentRegionMax();                                              // current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates
IMGUI_FUNCTION(GetContentRegionMax)
CALL_FUNCTION(GetContentRegionMax, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetContentRegionAvail();                                            // == GetContentRegionMax() - GetCursorPos()
IMGUI_FUNCTION(GetContentRegionAvail)
CALL_FUNCTION(GetContentRegionAvail, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API float         GetContentRegionAvailWidth();                                       //
IMGUI_FUNCTION(GetContentRegionAvailWidth)
CALL_FUNCTION(GetContentRegionAvailWidth, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetWindowContentRegionMin();                                        // content boundaries min (roughly (0,0)-Scroll), in window coordinates
IMGUI_FUNCTION(GetWindowContentRegionMin)
CALL_FUNCTION(GetWindowContentRegionMin, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetWindowContentRegionMax();                                        // content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates
IMGUI_FUNCTION(GetWindowContentRegionMax)
CALL_FUNCTION(GetWindowContentRegionMax, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API float         GetWindowContentRegionWidth();                                      // 
IMGUI_FUNCTION(GetWindowContentRegionWidth)
CALL_FUNCTION(GetWindowContentRegionWidth, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImDrawList*   GetWindowDrawList();                                                // get rendering command-list if you want to append your own draw primitives
// Unsupported return type ImDrawList*
//    IMGUI_API ImFont*       GetWindowFont();
// Unsupported return type ImFont*
//    IMGUI_API float         GetWindowFontSize();                                                // size (also height in pixels) of current font with current scale applied
IMGUI_FUNCTION(GetWindowFontSize)
CALL_FUNCTION(GetWindowFontSize, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowFontScale(float scale);                                    // per-window font scale. Adjust IO.FontGlobalScale if you want to scale all windows
IMGUI_FUNCTION(SetWindowFontScale)
NUMBER_ARG(scale)
CALL_FUNCTION_NO_RET(SetWindowFontScale, scale)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetWindowPos();                                                     // get current window position in screen space (useful if you want to do your own drawing via the DrawList api)
IMGUI_FUNCTION(GetWindowPos)
CALL_FUNCTION(GetWindowPos, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetWindowSize();                                                    // get current window size
IMGUI_FUNCTION(GetWindowSize)
CALL_FUNCTION(GetWindowSize, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API float         GetWindowWidth();
IMGUI_FUNCTION(GetWindowWidth)
CALL_FUNCTION(GetWindowWidth, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetWindowHeight();
IMGUI_FUNCTION(GetWindowHeight)
CALL_FUNCTION(GetWindowHeight, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsWindowCollapsed();
IMGUI_FUNCTION(IsWindowCollapsed)
CALL_FUNCTION(IsWindowCollapsed, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowPos(const ImVec2& pos, ImGuiSetCond cond = 0);         // set next window position. call before Begin()
IMGUI_FUNCTION(SetNextWindowPos)
IM_VEC_2_ARG(pos)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextWindowPos, pos, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowPosCenter(ImGuiSetCond cond = 0);                      // set next window position to be centered on screen. call before Begin()
IMGUI_FUNCTION(SetNextWindowPosCenter)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextWindowPosCenter, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowSize(const ImVec2& size, ImGuiSetCond cond = 0);       // set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()
IMGUI_FUNCTION(SetNextWindowSize)
IM_VEC_2_ARG(size)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextWindowSize, size, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowContentSize(const ImVec2& size);                       // set next window content size (enforce the range of scrollbars). set axis to 0.0f to leave it automatic. call before Begin()
IMGUI_FUNCTION(SetNextWindowContentSize)
IM_VEC_2_ARG(size)
CALL_FUNCTION_NO_RET(SetNextWindowContentSize, size)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowContentWidth(float width);                             // set next window content width (enforce the range of horizontal scrollbar). call before Begin() 
IMGUI_FUNCTION(SetNextWindowContentWidth)
NUMBER_ARG(width)
CALL_FUNCTION_NO_RET(SetNextWindowContentWidth, width)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowCollapsed(bool collapsed, ImGuiSetCond cond = 0);      // set next window collapsed state. call before Begin()
IMGUI_FUNCTION(SetNextWindowCollapsed)
BOOL_ARG(collapsed)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextWindowCollapsed, collapsed, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextWindowFocus();                                               // set next window to be focused / front-most. call before Begin()
IMGUI_FUNCTION(SetNextWindowFocus)
CALL_FUNCTION_NO_RET(SetNextWindowFocus)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowPos(const ImVec2& pos, ImGuiSetCond cond = 0);             // set current window position - call within Begin()/End(). may incur tearing
IMGUI_FUNCTION(SetWindowPos)
IM_VEC_2_ARG(pos)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowPos, pos, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowSize(const ImVec2& size, ImGuiSetCond cond = 0);           // set current window size. set to ImVec2 0 0 to force an auto-fit. may incur tearing
IMGUI_FUNCTION(SetWindowSize)
IM_VEC_2_ARG(size)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowSize, size, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowCollapsed(bool collapsed, ImGuiSetCond cond = 0);          // set current window collapsed state
IMGUI_FUNCTION(SetWindowCollapsed)
BOOL_ARG(collapsed)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowCollapsed, collapsed, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowFocus();                                                   // set current window to be focused / front-most
IMGUI_FUNCTION(SetWindowFocus)
CALL_FUNCTION_NO_RET(SetWindowFocus)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowPos(const char* name, const ImVec2& pos, ImGuiSetCond cond = 0);      // set named window position - call within Begin()/End(). may incur tearing
IMGUI_FUNCTION(SetWindowPos_3)
LABEL_ARG(name)
IM_VEC_2_ARG(pos)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowPos, name, pos, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowSize(const char* name, const ImVec2& size, ImGuiSetCond cond = 0);    // set named window size. set axis to 0.0f to force an auto-fit on this axis. may incur tearing
IMGUI_FUNCTION(SetWindowSize_3)
LABEL_ARG(name)
IM_VEC_2_ARG(size)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowSize, name, size, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowCollapsed(const char* name, bool collapsed, ImGuiSetCond cond = 0);   // set named window collapsed state
IMGUI_FUNCTION(SetWindowCollapsed_3)
LABEL_ARG(name)
BOOL_ARG(collapsed)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowCollapsed, name, collapsed, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowFocus(const char* name);                                              // set named window to be focused / front-most. use NULL to remove focus.
IMGUI_FUNCTION(SetWindowFocus_1)
LABEL_ARG(name)
CALL_FUNCTION_NO_RET(SetWindowFocus, name)
END_IMGUI_FUNC
//    IMGUI_API float         GetScrollX();                                                       // get scrolling amount [0..GetScrollMaxX()]
IMGUI_FUNCTION(GetScrollX)
CALL_FUNCTION(GetScrollX, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetScrollY();                                                       // get scrolling amount [0..GetScrollMaxY()]
IMGUI_FUNCTION(GetScrollY)
CALL_FUNCTION(GetScrollY, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetScrollMaxX();                                                    // get maximum scrolling amount ~~ ContentSize.X - WindowSize.X
IMGUI_FUNCTION(GetScrollMaxX)
CALL_FUNCTION(GetScrollMaxX, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetScrollMaxY();                                                    // get maximum scrolling amount ~~ ContentSize.Y - WindowSize.Y
IMGUI_FUNCTION(GetScrollMaxY)
CALL_FUNCTION(GetScrollMaxY, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetScrollX(float scroll_x);                                         // set scrolling amount [0..GetScrollMaxX()]
IMGUI_FUNCTION(SetScrollX)
NUMBER_ARG(scroll_x)
CALL_FUNCTION_NO_RET(SetScrollX, scroll_x)
END_IMGUI_FUNC
//    IMGUI_API void          SetScrollY(float scroll_y);                                         // set scrolling amount [0..GetScrollMaxY()]
IMGUI_FUNCTION(SetScrollY)
NUMBER_ARG(scroll_y)
CALL_FUNCTION_NO_RET(SetScrollY, scroll_y)
END_IMGUI_FUNC
//    IMGUI_API void          SetScrollHere(float center_y_ratio = 0.5f);                         // adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom.
IMGUI_FUNCTION(SetScrollHere)
OPTIONAL_NUMBER_ARG(center_y_ratio, 0.5f)
CALL_FUNCTION_NO_RET(SetScrollHere, 0.5f)
END_IMGUI_FUNC
//    IMGUI_API void          SetScrollFromPosY(float pos_y, float center_y_ratio = 0.5f);        // adjust scrolling amount to make given position valid. use GetCursorPos() or GetCursorStartPos()+offset to get valid positions.
IMGUI_FUNCTION(SetScrollFromPosY)
NUMBER_ARG(pos_y)
OPTIONAL_NUMBER_ARG(center_y_ratio, 0.5f)
CALL_FUNCTION_NO_RET(SetScrollFromPosY, pos_y, 0.5f)
END_IMGUI_FUNC
//    IMGUI_API void          SetKeyboardFocusHere(int offset = 0);                               // focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget
IMGUI_FUNCTION(SetKeyboardFocusHere)
OPTIONAL_INT_ARG(offset, 0)
CALL_FUNCTION_NO_RET(SetKeyboardFocusHere, offset)
END_IMGUI_FUNC
//    IMGUI_API void          SetStateStorage(ImGuiStorage* tree);                                // replace tree state storage with our own (if you want to manipulate it yourself, typically clear subsection of it)
// Unsupported arg type ImGuiStorage* tree
//    IMGUI_API ImGuiStorage* GetStateStorage();
// Unsupported return type ImGuiStorage*
//    IMGUI_API void          PushFont(ImFont* font);                                             // use NULL as a shortcut to push default font
// Unsupported arg type ImFont* font
//    IMGUI_API void          PopFont();
IMGUI_FUNCTION(PopFont)
CALL_FUNCTION_NO_RET(PopFont)
END_IMGUI_FUNC
//    IMGUI_API void          PushStyleColor(ImGuiCol idx, const ImVec4& col);
// Unsupported arg type  const ImVec4& col
//    IMGUI_API void          PopStyleColor(int count = 1);
IMGUI_FUNCTION(PopStyleColor)
OPTIONAL_INT_ARG(count, 1)
CALL_FUNCTION_NO_RET(PopStyleColor, count)
END_IMGUI_FUNC
//    IMGUI_API void          PushStyleVar(ImGuiStyleVar idx, float val);
IMGUI_FUNCTION(PushStyleVar)
INT_ARG(idx)
NUMBER_ARG(val)
CALL_FUNCTION_NO_RET(PushStyleVar, idx, val)
END_IMGUI_FUNC
//    IMGUI_API void          PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);
IMGUI_FUNCTION(PushStyleVar_2)
INT_ARG(idx)
IM_VEC_2_ARG(val)
CALL_FUNCTION_NO_RET(PushStyleVar, idx, val)
END_IMGUI_FUNC
//    IMGUI_API void          PopStyleVar(int count = 1);
IMGUI_FUNCTION(PopStyleVar)
OPTIONAL_INT_ARG(count, 1)
CALL_FUNCTION_NO_RET(PopStyleVar, count)
END_IMGUI_FUNC
//    IMGUI_API void          PushItemWidth(float item_width);                                    // width of items for the common item+label case, pixels. 0.0f = default to ~2/3 of windows width, >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -1.0f always align width to the right side)
IMGUI_FUNCTION(PushItemWidth)
NUMBER_ARG(item_width)
CALL_FUNCTION_NO_RET(PushItemWidth, item_width)
END_IMGUI_FUNC
//    IMGUI_API void          PopItemWidth();
IMGUI_FUNCTION(PopItemWidth)
CALL_FUNCTION_NO_RET(PopItemWidth)
END_IMGUI_FUNC
//    IMGUI_API float         CalcItemWidth();                                                    // width of item given pushed settings and current cursor position
IMGUI_FUNCTION(CalcItemWidth)
CALL_FUNCTION(CalcItemWidth, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          PushTextWrapPos(float wrap_pos_x = 0.0f);                           // word-wrapping for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space
IMGUI_FUNCTION(PushTextWrapPos)
OPTIONAL_NUMBER_ARG(wrap_pos_x, 0.0f)
CALL_FUNCTION_NO_RET(PushTextWrapPos, 0.0f)
END_IMGUI_FUNC
//    IMGUI_API void          PopTextWrapPos();
IMGUI_FUNCTION(PopTextWrapPos)
CALL_FUNCTION_NO_RET(PopTextWrapPos)
END_IMGUI_FUNC
//    IMGUI_API void          PushAllowKeyboardFocus(bool v);                                     // allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets
IMGUI_FUNCTION(PushAllowKeyboardFocus)
BOOL_ARG(v)
CALL_FUNCTION_NO_RET(PushAllowKeyboardFocus, v)
END_IMGUI_FUNC
//    IMGUI_API void          PopAllowKeyboardFocus();
IMGUI_FUNCTION(PopAllowKeyboardFocus)
CALL_FUNCTION_NO_RET(PopAllowKeyboardFocus)
END_IMGUI_FUNC
//    IMGUI_API void          PushButtonRepeat(bool repeat);                                      // in 'repeat' mode, Button*() functions return repeated true in a typematic manner (uses io.KeyRepeatDelay/io.KeyRepeatRate for now). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
IMGUI_FUNCTION(PushButtonRepeat)
BOOL_ARG(repeat)
CALL_FUNCTION_NO_RET(PushButtonRepeat, repeat)
END_IMGUI_FUNC
//    IMGUI_API void          PopButtonRepeat();
IMGUI_FUNCTION(PopButtonRepeat)
CALL_FUNCTION_NO_RET(PopButtonRepeat)
END_IMGUI_FUNC
//    IMGUI_API void          BeginGroup();                                                       // lock horizontal starting position. once closing a group it is seen as a single item (so you can use IsItemHovered() on a group, SameLine() between groups, etc.
IMGUI_FUNCTION(BeginGroup)
CALL_FUNCTION_NO_RET(BeginGroup)
ADD_END_STACK(2)
END_IMGUI_FUNC
//    IMGUI_API void          EndGroup();
IMGUI_FUNCTION(EndGroup)
CALL_FUNCTION_NO_RET(EndGroup)
POP_END_STACK(2)
END_IMGUI_FUNC
//    IMGUI_API void          Separator();                                                        // horizontal line
IMGUI_FUNCTION(Separator)
CALL_FUNCTION_NO_RET(Separator)
END_IMGUI_FUNC
//    IMGUI_API void          SameLine(float local_pos_x = 0.0f, float spacing_w = -1.0f);        // call between widgets or groups to layout them horizontally
IMGUI_FUNCTION(SameLine)
OPTIONAL_NUMBER_ARG(local_pos_x, 0.0f)
OPTIONAL_NUMBER_ARG(spacing_w, -1.0f)
CALL_FUNCTION_NO_RET(SameLine, 0.0f, -1.0f)
END_IMGUI_FUNC
//    IMGUI_API void          Spacing();                                                          // add spacing
IMGUI_FUNCTION(Spacing)
CALL_FUNCTION_NO_RET(Spacing)
END_IMGUI_FUNC
//    IMGUI_API void          Dummy(const ImVec2& size);                                          // add a dummy item of given size
IMGUI_FUNCTION(Dummy)
IM_VEC_2_ARG(size)
CALL_FUNCTION_NO_RET(Dummy, size)
END_IMGUI_FUNC
//    IMGUI_API void          Indent();                                                           // move content position toward the right by style.IndentSpacing pixels
IMGUI_FUNCTION(Indent)
CALL_FUNCTION_NO_RET(Indent)
END_IMGUI_FUNC
//    IMGUI_API void          Unindent();                                                         // move content position back to the left (cancel Indent)
IMGUI_FUNCTION(Unindent)
CALL_FUNCTION_NO_RET(Unindent)
END_IMGUI_FUNC
//    IMGUI_API void          Columns(int count = 1, const char* id = NULL, bool border=true);    // setup number of columns. use an identifier to distinguish multiple column sets. close with Columns(1).
IMGUI_FUNCTION(Columns)
OPTIONAL_INT_ARG(count, 1)
OPTIONAL_LABEL_ARG(id)
OPTIONAL_BOOL_ARG(border, true)
CALL_FUNCTION_NO_RET(Columns, count, id, border)
END_IMGUI_FUNC
//    IMGUI_API void          NextColumn();                                                       // next column
IMGUI_FUNCTION(NextColumn)
CALL_FUNCTION_NO_RET(NextColumn)
END_IMGUI_FUNC
//    IMGUI_API int           GetColumnIndex();                                                   // get current column index
// Unsupported return type int
//    IMGUI_API float         GetColumnOffset(int column_index = -1);                             // get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetcolumnsCount() inclusive. column 0 is usually 0.0f and not resizable unless you call this
IMGUI_FUNCTION(GetColumnOffset)
OPTIONAL_INT_ARG(column_index, -1)
CALL_FUNCTION(GetColumnOffset, float, column_index)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetColumnOffset(int column_index, float offset_x);                  // set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column
IMGUI_FUNCTION(SetColumnOffset)
INT_ARG(column_index)
NUMBER_ARG(offset_x)
CALL_FUNCTION_NO_RET(SetColumnOffset, column_index, offset_x)
END_IMGUI_FUNC
//    IMGUI_API float         GetColumnWidth(int column_index = -1);                              // column width (== GetColumnOffset(GetColumnIndex()+1) - GetColumnOffset(GetColumnOffset())
IMGUI_FUNCTION(GetColumnWidth)
OPTIONAL_INT_ARG(column_index, -1)
CALL_FUNCTION(GetColumnWidth, float, column_index)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API int           GetColumnsCount();                                                  // number of columns (what was passed to Columns())
// Unsupported return type int
//    IMGUI_API ImVec2        GetCursorPos();                                                     // cursor position is relative to window position
IMGUI_FUNCTION(GetCursorPos)
CALL_FUNCTION(GetCursorPos, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API float         GetCursorPosX();                                                    // "
IMGUI_FUNCTION(GetCursorPosX)
CALL_FUNCTION(GetCursorPosX, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetCursorPosY();                                                    // "
IMGUI_FUNCTION(GetCursorPosY)
CALL_FUNCTION(GetCursorPosY, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetCursorPos(const ImVec2& local_pos);                              // "
IMGUI_FUNCTION(SetCursorPos)
IM_VEC_2_ARG(local_pos)
CALL_FUNCTION_NO_RET(SetCursorPos, local_pos)
END_IMGUI_FUNC
//    IMGUI_API void          SetCursorPosX(float x);                                             // "
IMGUI_FUNCTION(SetCursorPosX)
NUMBER_ARG(x)
CALL_FUNCTION_NO_RET(SetCursorPosX, x)
END_IMGUI_FUNC
//    IMGUI_API void          SetCursorPosY(float y);                                             // "
IMGUI_FUNCTION(SetCursorPosY)
NUMBER_ARG(y)
CALL_FUNCTION_NO_RET(SetCursorPosY, y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetCursorStartPos();                                                // initial cursor position
IMGUI_FUNCTION(GetCursorStartPos)
CALL_FUNCTION(GetCursorStartPos, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetCursorScreenPos();                                               // cursor position in absolute screen coordinates [0..io.DisplaySize]
IMGUI_FUNCTION(GetCursorScreenPos)
CALL_FUNCTION(GetCursorScreenPos, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API void          SetCursorScreenPos(const ImVec2& pos);                              // cursor position in absolute screen coordinates [0..io.DisplaySize]
IMGUI_FUNCTION(SetCursorScreenPos)
IM_VEC_2_ARG(pos)
CALL_FUNCTION_NO_RET(SetCursorScreenPos, pos)
END_IMGUI_FUNC
//    IMGUI_API void          AlignFirstTextHeightToWidgets();                                    // call once if the first item on the line is a Text() item and you want to vertically lower it to match subsequent (bigger) widgets
IMGUI_FUNCTION(AlignFirstTextHeightToWidgets)
CALL_FUNCTION_NO_RET(AlignFirstTextHeightToWidgets)
END_IMGUI_FUNC
//    IMGUI_API float         GetTextLineHeight();                                                // height of font == GetWindowFontSize()
IMGUI_FUNCTION(GetTextLineHeight)
CALL_FUNCTION(GetTextLineHeight, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetTextLineHeightWithSpacing();                                     // distance (in pixels) between 2 consecutive lines of text == GetWindowFontSize() + GetStyle().ItemSpacing.y
IMGUI_FUNCTION(GetTextLineHeightWithSpacing)
CALL_FUNCTION(GetTextLineHeightWithSpacing, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetItemsLineHeightWithSpacing();                                    // distance (in pixels) between 2 consecutive lines of standard height widgets == GetWindowFontSize() + GetStyle().FramePadding.y*2 + GetStyle().ItemSpacing.y
IMGUI_FUNCTION(GetItemsLineHeightWithSpacing)
CALL_FUNCTION(GetItemsLineHeightWithSpacing, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          PushID(const char* str_id);                                         // push identifier into the ID stack. IDs are hash of the *entire* stack!
IMGUI_FUNCTION(PushID)
LABEL_ARG(str_id)
CALL_FUNCTION_NO_RET(PushID, str_id)
END_IMGUI_FUNC
//    IMGUI_API void          PushID(const char* str_id_begin, const char* str_id_end);
IMGUI_FUNCTION(PushID_2)
LABEL_ARG(str_id_begin)
LABEL_ARG(str_id_end)
CALL_FUNCTION_NO_RET(PushID, str_id_begin, str_id_end)
END_IMGUI_FUNC
//    IMGUI_API void          PushID(const void* ptr_id);
// Unsupported arg type const void* ptr_id
//    IMGUI_API void          PushID(int int_id);
IMGUI_FUNCTION(PushID_1)
INT_ARG(int_id)
CALL_FUNCTION_NO_RET(PushID, int_id)
END_IMGUI_FUNC
//    IMGUI_API void          PopID();
IMGUI_FUNCTION(PopID)
CALL_FUNCTION_NO_RET(PopID)
END_IMGUI_FUNC
//    IMGUI_API ImGuiID       GetID(const char* str_id);                                          // calculate unique ID (hash of whole ID stack + given parameter). useful if you want to query into ImGuiStorage yourself. otherwise rarely needed
// Unsupported return type ImGuiID
//    IMGUI_API ImGuiID       GetID(const char* str_id_begin, const char* str_id_end);
// Unsupported return type ImGuiID
//    IMGUI_API ImGuiID       GetID(const void* ptr_id);
// Unsupported return type ImGuiID
// Unsupported arg type const void* ptr_id
//    IMGUI_API void          Text(const char* fmt, ...) IM_PRINTFARGS(1);
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API void          TextV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextColored(const ImVec4& col, const char* fmt, ...) IM_PRINTFARGS(2);  // shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
// Unsupported arg type const ImVec4& col
// Unsupported arg type  ...) IM_PRINTFARGS(2
//    IMGUI_API void          TextColoredV(const ImVec4& col, const char* fmt, va_list args);
// Unsupported arg type const ImVec4& col
// Unsupported arg type  va_list args
//    IMGUI_API void          TextDisabled(const char* fmt, ...) IM_PRINTFARGS(1);                    // shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API void          TextDisabledV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextWrapped(const char* fmt, ...) IM_PRINTFARGS(1);                     // shortcut for PushTextWrapPos(0.0f); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API void          TextWrappedV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextUnformatted(const char* text, const char* text_end = NULL);         // doesn't require null terminated string if 'text_end' is specified. no copy done to any bounded stack buffer, recommended for long chunks of text
IMGUI_FUNCTION(TextUnformatted)
LABEL_ARG(text)
OPTIONAL_LABEL_ARG(text_end)
CALL_FUNCTION_NO_RET(TextUnformatted, text, text_end)
END_IMGUI_FUNC
//    IMGUI_API void          LabelText(const char* label, const char* fmt, ...) IM_PRINTFARGS(2);    // display text+label aligned the same way as value+label widgets
// Unsupported arg type  ...) IM_PRINTFARGS(2
//    IMGUI_API void          LabelTextV(const char* label, const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          Bullet();
IMGUI_FUNCTION(Bullet)
CALL_FUNCTION_NO_RET(Bullet)
END_IMGUI_FUNC
//    IMGUI_API void          BulletText(const char* fmt, ...) IM_PRINTFARGS(1);
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API void          BulletTextV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API bool          Button(const char* label, const ImVec2& size = ImVec2 0 0);
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API bool          SmallButton(const char* label);
IMGUI_FUNCTION(SmallButton)
LABEL_ARG(label)
CALL_FUNCTION(SmallButton, bool, label)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          InvisibleButton(const char* str_id, const ImVec2& size);
IMGUI_FUNCTION(InvisibleButton)
LABEL_ARG(str_id)
IM_VEC_2_ARG(size)
CALL_FUNCTION(InvisibleButton, bool, str_id, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2 0 0, const ImVec2& uv1 = ImVec2 1 1, const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0));
// Unsupported arg type ImTextureID user_texture_id
// Unsupported arg type  const ImVec2& uv0 = ImVec2 0 0
// Unsupported arg type  const ImVec2& uv1 = ImVec2 1 1
// Unsupported arg type  const ImVec4& tint_col = ImVec4(1
// Unsupported arg type 1
// Unsupported arg type 1
// Unsupported arg type 1)
// Unsupported arg type  const ImVec4& border_col = ImVec4(0
// Unsupported arg type 0
// Unsupported arg type 0
// Unsupported arg type 0)
//    IMGUI_API bool          ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2 0 0,  const ImVec2& uv1 = ImVec2 1 1, int frame_padding = -1, const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1));    // <0 frame_padding uses default frame padding settings. 0 for no padding
// Unsupported arg type ImTextureID user_texture_id
// Unsupported arg type  const ImVec2& uv0 = ImVec2 0 0
// Unsupported arg type   const ImVec2& uv1 = ImVec2 1 1
// Unsupported arg type  const ImVec4& bg_col = ImVec4(0
// Unsupported arg type 0
// Unsupported arg type 0
// Unsupported arg type 0)
// Unsupported arg type  const ImVec4& tint_col = ImVec4(1
// Unsupported arg type 1
// Unsupported arg type 1
// Unsupported arg type 1)
//    IMGUI_API bool          CollapsingHeader(const char* label, const char* str_id = NULL, bool display_frame = true, bool default_open = false);
IMGUI_FUNCTION(CollapsingHeader)
LABEL_ARG(label)
OPTIONAL_LABEL_ARG(str_id)
OPTIONAL_BOOL_ARG(display_frame, true)
OPTIONAL_BOOL_ARG(default_open, false)
CALL_FUNCTION(CollapsingHeader, bool, label, str_id, display_frame, default_open)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          Checkbox(const char* label, bool* v);
IMGUI_FUNCTION(Checkbox)
LABEL_ARG(label)
BOOL_POINTER_ARG(v)
CALL_FUNCTION(Checkbox, bool, label, v)
PUSH_BOOL(ret)
END_BOOL_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value);
// Unsupported arg type  unsigned int* flags
//    IMGUI_API bool          RadioButton(const char* label, bool active);
IMGUI_FUNCTION(RadioButton)
LABEL_ARG(label)
BOOL_ARG(active)
CALL_FUNCTION(RadioButton, bool, label, active)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          RadioButton(const char* label, int* v, int v_button);
// Unsupported arg type  int* v
//    IMGUI_API bool          Combo(const char* label, int* current_item, const char** items, int items_count, int height_in_items = -1);
// Unsupported arg type  int* current_item
// Unsupported arg type  const char** items
//    IMGUI_API bool          Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int height_in_items = -1);      // separate items with \0, end item-list with \0\0
// Unsupported arg type  int* current_item
//    IMGUI_API bool          Combo(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
// Unsupported arg type  int* current_item
// Unsupported arg type  bool (*items_getter)(void* data
// Unsupported arg type  const char** out_text)
// Unsupported arg type  void* data
//    IMGUI_API bool          ColorButton(const ImVec4& col, bool small_height = false, bool outline_border = true);
// Unsupported arg type const ImVec4& col
//    IMGUI_API bool          ColorEdit3(const char* label, float col[3]);
// Unsupported arg type  float col[3]
//    IMGUI_API bool          ColorEdit4(const char* label, float col[4], bool show_alpha = true);
// Unsupported arg type  float col[4]
//    IMGUI_API void          ColorEditMode(ImGuiColorEditMode mode);
IMGUI_FUNCTION(ColorEditMode)
INT_ARG(mode)
CALL_FUNCTION_NO_RET(ColorEditMode, mode)
END_IMGUI_FUNC
//    IMGUI_API void          PlotLines(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2 0 0, int stride = sizeof(float));
// Unsupported arg type  const float* values
// Unsupported arg type  ImVec2 graph_size = ImVec2 0 0
//    IMGUI_API void          PlotLines(const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2 0 0);
// Unsupported arg type  float (*values_getter)(void* data
// Unsupported arg type  void* data
// Unsupported arg type  ImVec2 graph_size = ImVec2 0 0
//    IMGUI_API void          PlotHistogram(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2 0 0, int stride = sizeof(float));
// Unsupported arg type  const float* values
// Unsupported arg type  ImVec2 graph_size = ImVec2 0 0
//    IMGUI_API void          PlotHistogram(const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2 0 0);
// Unsupported arg type  float (*values_getter)(void* data
// Unsupported arg type  void* data
// Unsupported arg type  ImVec2 graph_size = ImVec2 0 0
//    IMGUI_API bool          DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);     // If v_min >= v_max we have no bound
// Unsupported arg type  float* v
//    IMGUI_API bool          DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", const char* display_format_max = NULL, float power = 1.0f);
// Unsupported arg type  float* v_current_min
// Unsupported arg type  float* v_current_max
//    IMGUI_API bool          DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");                                       // If v_min >= v_max we have no bound
// Unsupported arg type  int* v
//    IMGUI_API bool          DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[2]
//    IMGUI_API bool          DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[3]
//    IMGUI_API bool          DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[4]
//    IMGUI_API bool          DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f", const char* display_format_max = NULL);
// Unsupported arg type  int* v_current_min
// Unsupported arg type  int* v_current_max
//    IMGUI_API bool          InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
// Unsupported arg type  char* buf
// Unsupported arg type  size_t buf_size
// Unsupported arg type  ImGuiTextEditCallback callback = NULL
// Unsupported arg type  void* user_data = NULL
//    IMGUI_API bool          InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2 0 0, ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
// Unsupported arg type  char* buf
// Unsupported arg type  size_t buf_size
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
// Unsupported arg type  ImGuiTextEditCallback callback = NULL
// Unsupported arg type  void* user_data = NULL
//    IMGUI_API bool          InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float* v
//    IMGUI_API bool          InputFloat2(const char* label, float v[2], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          InputFloat3(const char* label, float v[3], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          InputFloat4(const char* label, float v[4], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int* v
//    IMGUI_API bool          InputInt2(const char* label, int v[2], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[2]
//    IMGUI_API bool          InputInt3(const char* label, int v[3], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[3]
//    IMGUI_API bool          InputInt4(const char* label, int v[4], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[4]
//    IMGUI_API bool          SliderFloat(const char* label, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);     // adjust display_format to decorate the value with a prefix or a suffix. Use power!=1.0 for logarithmic sliders
// Unsupported arg type  float* v
//    IMGUI_API bool          SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f);
// Unsupported arg type  float* v_rad
//    IMGUI_API bool          SliderInt(const char* label, int* v, int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int* v
//    IMGUI_API bool          SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[2]
//    IMGUI_API bool          SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[3]
//    IMGUI_API bool          SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[4]
//    IMGUI_API bool          VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float* v
//    IMGUI_API bool          VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int* v
//    IMGUI_API bool          TreeNode(const char* str_label_id);                                     // if returning 'true' the node is open and the user is responsible for calling TreePop()
IMGUI_FUNCTION(TreeNode)
LABEL_ARG(str_label_id)
CALL_FUNCTION(TreeNode, bool, str_label_id)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          TreeNode(const char* str_id, const char* fmt, ...) IM_PRINTFARGS(2);    // "
// Unsupported arg type  ...) IM_PRINTFARGS(2
//    IMGUI_API bool          TreeNode(const void* ptr_id, const char* fmt, ...) IM_PRINTFARGS(2);    // "
// Unsupported arg type const void* ptr_id
// Unsupported arg type  ...) IM_PRINTFARGS(2
//    IMGUI_API bool          TreeNodeV(const char* str_id, const char* fmt, va_list args);           // "
// Unsupported arg type  va_list args
//    IMGUI_API bool          TreeNodeV(const void* ptr_id, const char* fmt, va_list args);           // "
// Unsupported arg type const void* ptr_id
// Unsupported arg type  va_list args
//    IMGUI_API void          TreePush(const char* str_id = NULL);                                    // already called by TreeNode(), but you can call Push/Pop yourself for layouting purpose
IMGUI_FUNCTION(TreePush)
OPTIONAL_LABEL_ARG(str_id)
CALL_FUNCTION_NO_RET(TreePush, str_id)
END_IMGUI_FUNC
//    IMGUI_API void          TreePush(const void* ptr_id = NULL);                                    // "
// Unsupported arg type const void* ptr_id = NULL
//    IMGUI_API void          TreePop();
IMGUI_FUNCTION(TreePop)
CALL_FUNCTION_NO_RET(TreePop)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextTreeNodeOpened(bool opened, ImGuiSetCond cond = 0);              // set next tree node to be opened.
IMGUI_FUNCTION(SetNextTreeNodeOpened)
BOOL_ARG(opened)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextTreeNodeOpened, opened, cond)
END_IMGUI_FUNC
//    IMGUI_API bool          Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2 0 0);  // size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API bool          Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2 0 0);
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API bool          ListBox(const char* label, int* current_item, const char** items, int items_count, int height_in_items = -1);
// Unsupported arg type  int* current_item
// Unsupported arg type  const char** items
//    IMGUI_API bool          ListBox(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
// Unsupported arg type  int* current_item
// Unsupported arg type  bool (*items_getter)(void* data
// Unsupported arg type  const char** out_text)
// Unsupported arg type  void* data
//    IMGUI_API bool          ListBoxHeader(const char* label, const ImVec2& size = ImVec2 0 0); // use if you want to reimplement ListBox() will custom data or interactions. make sure to call ListBoxFooter() afterwards.
// Unsupported arg type  const ImVec2& size = ImVec2 0 0
//    IMGUI_API bool          ListBoxHeader(const char* label, int items_count, int height_in_items = -1); // "
IMGUI_FUNCTION(ListBoxHeader)
LABEL_ARG(label)
INT_ARG(items_count)
OPTIONAL_INT_ARG(height_in_items, -1)
CALL_FUNCTION(ListBoxHeader, bool, label, items_count, height_in_items)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          ListBoxFooter();                                                    // terminate the scrolling region
IMGUI_FUNCTION(ListBoxFooter)
CALL_FUNCTION_NO_RET(ListBoxFooter)
END_IMGUI_FUNC
//    IMGUI_API void          Value(const char* prefix, bool b);
IMGUI_FUNCTION(Value)
LABEL_ARG(prefix)
BOOL_ARG(b)
CALL_FUNCTION_NO_RET(Value, prefix, b)
END_IMGUI_FUNC
//    IMGUI_API void          Value(const char* prefix, int v);
IMGUI_FUNCTION(Value_2)
LABEL_ARG(prefix)
INT_ARG(v)
CALL_FUNCTION_NO_RET(Value, prefix, v)
END_IMGUI_FUNC
//    IMGUI_API void          Value(const char* prefix, unsigned int v);
IMGUI_FUNCTION(Value_2_2)
LABEL_ARG(prefix)
UINT_ARG(v)
CALL_FUNCTION_NO_RET(Value, prefix, v)
END_IMGUI_FUNC
//    IMGUI_API void          Value(const char* prefix, float v, const char* float_format = NULL);
IMGUI_FUNCTION(Value_3)
LABEL_ARG(prefix)
NUMBER_ARG(v)
OPTIONAL_LABEL_ARG(float_format)
CALL_FUNCTION_NO_RET(Value, prefix, v, float_format)
END_IMGUI_FUNC
//    IMGUI_API void          Color(const char* prefix, const ImVec4& v);
// Unsupported arg type  const ImVec4& v
//    IMGUI_API void          Color(const char* prefix, unsigned int v);
IMGUI_FUNCTION(Color)
LABEL_ARG(prefix)
UINT_ARG(v)
CALL_FUNCTION_NO_RET(Color, prefix, v)
END_IMGUI_FUNC
//    IMGUI_API void          SetTooltip(const char* fmt, ...) IM_PRINTFARGS(1);                  // set tooltip under mouse-cursor, typically use with ImGui::IsHovered(). last call wins
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API void          SetTooltipV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          BeginTooltip();                                                     // use to create full-featured tooltip windows that aren't just text
IMGUI_FUNCTION(BeginTooltip)
CALL_FUNCTION_NO_RET(BeginTooltip)
ADD_END_STACK(3)
END_IMGUI_FUNC
//    IMGUI_API void          EndTooltip();
IMGUI_FUNCTION(EndTooltip)
CALL_FUNCTION_NO_RET(EndTooltip)
POP_END_STACK(3)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMainMenuBar();                                                 // create and append to a full screen menu-bar. only call EndMainMenuBar() if this returns true!
IMGUI_FUNCTION(BeginMainMenuBar)
CALL_FUNCTION(BeginMainMenuBar, bool)
IF_RET_ADD_END_STACK(4)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMainMenuBar();
IMGUI_FUNCTION(EndMainMenuBar)
CALL_FUNCTION_NO_RET(EndMainMenuBar)
POP_END_STACK(4)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMenuBar();                                                     // append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set). only call EndMenuBar() if this returns true!
IMGUI_FUNCTION(BeginMenuBar)
CALL_FUNCTION(BeginMenuBar, bool)
IF_RET_ADD_END_STACK(5)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMenuBar();
IMGUI_FUNCTION(EndMenuBar)
CALL_FUNCTION_NO_RET(EndMenuBar)
POP_END_STACK(5)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMenu(const char* label, bool enabled = true);                  // create a sub-menu entry. only call EndMenu() if this returns true!
IMGUI_FUNCTION(BeginMenu)
LABEL_ARG(label)
OPTIONAL_BOOL_ARG(enabled, true)
CALL_FUNCTION(BeginMenu, bool, label, enabled)
IF_RET_ADD_END_STACK(6)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMenu();
IMGUI_FUNCTION(EndMenu)
CALL_FUNCTION_NO_RET(EndMenu)
POP_END_STACK(6)
END_IMGUI_FUNC
//    IMGUI_API bool          MenuItem(const char* label, const char* shortcut = NULL, bool selected = false, bool enabled = true);  // return true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment
IMGUI_FUNCTION(MenuItem)
LABEL_ARG(label)
OPTIONAL_LABEL_ARG(shortcut)
OPTIONAL_BOOL_ARG(selected, false)
OPTIONAL_BOOL_ARG(enabled, true)
CALL_FUNCTION(MenuItem, bool, label, shortcut, selected, enabled)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled = true);              // return true when activated + toggle (*p_selected) if p_selected != NULL
IMGUI_FUNCTION(MenuItem_4)
LABEL_ARG(label)
LABEL_ARG(shortcut)
BOOL_POINTER_ARG(p_selected)
OPTIONAL_BOOL_ARG(enabled, true)
CALL_FUNCTION(MenuItem, bool, label, shortcut, p_selected, enabled)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_selected)
END_IMGUI_FUNC
//    IMGUI_API void          OpenPopup(const char* str_id);                                      // mark popup as open. popup identifiers are relative to the current ID-stack (so OpenPopup and BeginPopup needs to be at the same level). close childs popups if any. will close popup when user click outside, or activate a pressable item, or CloseCurrentPopup() is called within a BeginPopup()/EndPopup() block.
IMGUI_FUNCTION(OpenPopup)
LABEL_ARG(str_id)
CALL_FUNCTION_NO_RET(OpenPopup, str_id)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopup(const char* str_id);                                     // return true if popup if opened and start outputting to it. only call EndPopup() if BeginPopup() returned true!
IMGUI_FUNCTION(BeginPopup)
LABEL_ARG(str_id)
CALL_FUNCTION(BeginPopup, bool, str_id)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupModal(const char* name, bool* p_opened = NULL, ImGuiWindowFlags extra_flags = 0);             // modal dialog (can't close them by clicking outside)
IMGUI_FUNCTION(BeginPopupModal)
LABEL_ARG(name)
OPTIONAL_BOOL_POINTER_ARG(p_opened)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(BeginPopupModal, bool, name, p_opened, extra_flags)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_opened)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextItem(const char* str_id, int mouse_button = 1);                                        // helper to open and begin popup when clicked on last item
IMGUI_FUNCTION(BeginPopupContextItem)
LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextItem, bool, str_id, mouse_button)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextWindow(bool also_over_items = true, const char* str_id = NULL, int mouse_button = 1);  // helper to open and begin popup when clicked on current window
IMGUI_FUNCTION(BeginPopupContextWindow)
OPTIONAL_BOOL_ARG(also_over_items, true)
OPTIONAL_LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextWindow, bool, also_over_items, str_id, mouse_button)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextVoid(const char* str_id = NULL, int mouse_button = 1);                                 // helper to open and begin popup when clicked in void (no window)
IMGUI_FUNCTION(BeginPopupContextVoid)
OPTIONAL_LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextVoid, bool, str_id, mouse_button)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndPopup();
IMGUI_FUNCTION(EndPopup)
CALL_FUNCTION_NO_RET(EndPopup)
POP_END_STACK(7)
END_IMGUI_FUNC
//    IMGUI_API void          CloseCurrentPopup();                                                // close the popup we have begin-ed into. clicking on a MenuItem or Selectable automatically close the current popup.
IMGUI_FUNCTION(CloseCurrentPopup)
CALL_FUNCTION_NO_RET(CloseCurrentPopup)
END_IMGUI_FUNC
//    IMGUI_API void          LogToTTY(int max_depth = -1);                                       // start logging to tty
IMGUI_FUNCTION(LogToTTY)
OPTIONAL_INT_ARG(max_depth, -1)
CALL_FUNCTION_NO_RET(LogToTTY, max_depth)
END_IMGUI_FUNC
//    IMGUI_API void          LogToFile(int max_depth = -1, const char* filename = NULL);         // start logging to file
IMGUI_FUNCTION(LogToFile)
OPTIONAL_INT_ARG(max_depth, -1)
OPTIONAL_LABEL_ARG(filename)
CALL_FUNCTION_NO_RET(LogToFile, max_depth, filename)
END_IMGUI_FUNC
//    IMGUI_API void          LogToClipboard(int max_depth = -1);                                 // start logging to OS clipboard
IMGUI_FUNCTION(LogToClipboard)
OPTIONAL_INT_ARG(max_depth, -1)
CALL_FUNCTION_NO_RET(LogToClipboard, max_depth)
END_IMGUI_FUNC
//    IMGUI_API void          LogFinish();                                                        // stop logging (close file, etc.)
IMGUI_FUNCTION(LogFinish)
CALL_FUNCTION_NO_RET(LogFinish)
END_IMGUI_FUNC
//    IMGUI_API void          LogButtons();                                                       // helper to display buttons for logging to tty/file/clipboard
IMGUI_FUNCTION(LogButtons)
CALL_FUNCTION_NO_RET(LogButtons)
END_IMGUI_FUNC
//    IMGUI_API void          LogText(const char* fmt, ...) IM_PRINTFARGS(1);                     // pass text data straight to log (without being displayed)
// Unsupported arg type  ...) IM_PRINTFARGS(1
//    IMGUI_API bool          IsItemHovered();                                                    // was the last item hovered by mouse?
IMGUI_FUNCTION(IsItemHovered)
CALL_FUNCTION(IsItemHovered, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemHoveredRect();                                                // was the last item hovered by mouse? even if another item is active while we are hovering this
IMGUI_FUNCTION(IsItemHoveredRect)
CALL_FUNCTION(IsItemHoveredRect, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemActive();                                                     // was the last item active? (e.g. button being held, text field being edited- items that don't interact will always return false)
IMGUI_FUNCTION(IsItemActive)
CALL_FUNCTION(IsItemActive, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemVisible();                                                    // was the last item visible? (aka not out of sight due to clipping/scrolling.)
IMGUI_FUNCTION(IsItemVisible)
CALL_FUNCTION(IsItemVisible, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsAnyItemHovered();
IMGUI_FUNCTION(IsAnyItemHovered)
CALL_FUNCTION(IsAnyItemHovered, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsAnyItemActive();
IMGUI_FUNCTION(IsAnyItemActive)
CALL_FUNCTION(IsAnyItemActive, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetItemRectMin();                                                   // get bounding rect of last item in screen space
IMGUI_FUNCTION(GetItemRectMin)
CALL_FUNCTION(GetItemRectMin, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetItemRectMax();                                                   // "
IMGUI_FUNCTION(GetItemRectMax)
CALL_FUNCTION(GetItemRectMax, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetItemRectSize();                                                  // "
IMGUI_FUNCTION(GetItemRectSize)
CALL_FUNCTION(GetItemRectSize, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API bool          IsWindowHovered();                                                  // is current window hovered and hoverable (not blocked by a popup) (differentiate child windows from each others)
IMGUI_FUNCTION(IsWindowHovered)
CALL_FUNCTION(IsWindowHovered, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsWindowFocused();                                                  // is current window focused
IMGUI_FUNCTION(IsWindowFocused)
CALL_FUNCTION(IsWindowFocused, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRootWindowFocused();                                              // is current root window focused (top parent window in case of child windows)
IMGUI_FUNCTION(IsRootWindowFocused)
CALL_FUNCTION(IsRootWindowFocused, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRootWindowOrAnyChildFocused();                                    // is current root window or any of its child (including current window) focused
IMGUI_FUNCTION(IsRootWindowOrAnyChildFocused)
CALL_FUNCTION(IsRootWindowOrAnyChildFocused, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRectVisible(const ImVec2& size);                                  // test if rectangle of given size starting from cursor pos is visible (not clipped). to perform coarse clipping on user's side (as an optimization)
IMGUI_FUNCTION(IsRectVisible)
IM_VEC_2_ARG(size)
CALL_FUNCTION(IsRectVisible, bool, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsPosHoveringAnyWindow(const ImVec2& pos);                          // is given position hovering any active imgui window
IMGUI_FUNCTION(IsPosHoveringAnyWindow)
IM_VEC_2_ARG(pos)
CALL_FUNCTION(IsPosHoveringAnyWindow, bool, pos)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API float         GetTime();
IMGUI_FUNCTION(GetTime)
CALL_FUNCTION(GetTime, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API int           GetFrameCount();
// Unsupported return type int
//    IMGUI_API const char*   GetStyleColName(ImGuiCol idx);
// Unsupported return type const
//    IMGUI_API ImVec2        CalcItemRectClosestPoint(const ImVec2& pos, bool on_edge = false, float outward = +0.0f);   // utility to find the closest point the last item bounding rectangle edge. useful to visually link items
IMGUI_FUNCTION(CalcItemRectClosestPoint)
IM_VEC_2_ARG(pos)
OPTIONAL_BOOL_ARG(on_edge, false)
OPTIONAL_NUMBER_ARG(outward, +0.0f)
CALL_FUNCTION(CalcItemRectClosestPoint, ImVec2, pos, on_edge, +0.0f)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        CalcTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
IMGUI_FUNCTION(CalcTextSize)
LABEL_ARG(text)
OPTIONAL_LABEL_ARG(text_end)
OPTIONAL_BOOL_ARG(hide_text_after_double_hash, false)
OPTIONAL_NUMBER_ARG(wrap_width, -1.0f)
CALL_FUNCTION(CalcTextSize, ImVec2, text, text_end, hide_text_after_double_hash, -1.0f)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API void          CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end);    // calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.
// Unsupported arg type  int* out_items_display_start
// Unsupported arg type  int* out_items_display_end
//    IMGUI_API bool          BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags extra_flags = 0);	// helper to create a child window / scrolling region that looks like a normal widget frame
// Unsupported arg type ImGuiID id
//    IMGUI_API void          EndChildFrame();
IMGUI_FUNCTION(EndChildFrame)
CALL_FUNCTION_NO_RET(EndChildFrame)
POP_END_STACK(8)
END_IMGUI_FUNC
//    IMGUI_API ImVec4        ColorConvertU32ToFloat4(ImU32 in);
// Unsupported return type ImVec4
// Unsupported arg type ImU32 in
//    IMGUI_API ImU32         ColorConvertFloat4ToU32(const ImVec4& in);
// Unsupported return type ImU32
// Unsupported arg type const ImVec4& in
//    IMGUI_API void          ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v);
// Unsupported arg type  float& out_h
// Unsupported arg type  float& out_s
// Unsupported arg type  float& out_v
//    IMGUI_API void          ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b);
// Unsupported arg type  float& out_r
// Unsupported arg type  float& out_g
// Unsupported arg type  float& out_b
//    IMGUI_API int           GetKeyIndex(ImGuiKey key);                                          // map ImGuiKey_* values into user's key index. == io.KeyMap[key]
// Unsupported return type int
//    IMGUI_API bool          IsKeyDown(int key_index);                                           // key_index into the keys_down[] array, imgui doesn't know the semantic of each entry, uses your own indices!
IMGUI_FUNCTION(IsKeyDown)
INT_ARG(key_index)
CALL_FUNCTION(IsKeyDown, bool, key_index)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsKeyPressed(int key_index, bool repeat = true);                    // uses user's key indices as stored in the keys_down[] array. if repeat=true. uses io.KeyRepeatDelay / KeyRepeatRate
IMGUI_FUNCTION(IsKeyPressed)
INT_ARG(key_index)
OPTIONAL_BOOL_ARG(repeat, true)
CALL_FUNCTION(IsKeyPressed, bool, key_index, repeat)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsKeyReleased(int key_index);                                       // "
IMGUI_FUNCTION(IsKeyReleased)
INT_ARG(key_index)
CALL_FUNCTION(IsKeyReleased, bool, key_index)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseDown(int button);                                            // is mouse button held
IMGUI_FUNCTION(IsMouseDown)
INT_ARG(button)
CALL_FUNCTION(IsMouseDown, bool, button)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseClicked(int button, bool repeat = false);                    // did mouse button clicked (went from !Down to Down)
IMGUI_FUNCTION(IsMouseClicked)
INT_ARG(button)
OPTIONAL_BOOL_ARG(repeat, false)
CALL_FUNCTION(IsMouseClicked, bool, button, repeat)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseDoubleClicked(int button);                                   // did mouse button double-clicked. a double-click returns false in IsMouseClicked(). uses io.MouseDoubleClickTime.
IMGUI_FUNCTION(IsMouseDoubleClicked)
INT_ARG(button)
CALL_FUNCTION(IsMouseDoubleClicked, bool, button)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseReleased(int button);                                        // did mouse button released (went from Down to !Down)
IMGUI_FUNCTION(IsMouseReleased)
INT_ARG(button)
CALL_FUNCTION(IsMouseReleased, bool, button)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseHoveringWindow();                                            // is mouse hovering current window ("window" in API names always refer to current window). disregarding of any consideration of being blocked by a popup. (unlike IsWindowHovered() this will return true even if the window is blocked because of a popup)
IMGUI_FUNCTION(IsMouseHoveringWindow)
CALL_FUNCTION(IsMouseHoveringWindow, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseHoveringAnyWindow();                                         // is mouse hovering any visible window
IMGUI_FUNCTION(IsMouseHoveringAnyWindow)
CALL_FUNCTION(IsMouseHoveringAnyWindow, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseHoveringRect(const ImVec2& pos_min, const ImVec2& pos_max, bool clip = true);  // is mouse hovering given bounding rect (in screen space). clipped by current clipping settings. disregarding of consideration of focus/window ordering/blocked by a popup.
IMGUI_FUNCTION(IsMouseHoveringRect)
IM_VEC_2_ARG(pos_min)
IM_VEC_2_ARG(pos_max)
OPTIONAL_BOOL_ARG(clip, true)
CALL_FUNCTION(IsMouseHoveringRect, bool, pos_min, pos_max, clip)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseDragging(int button = 0, float lock_threshold = -1.0f);      // is mouse dragging. if lock_threshold < -1.0f uses io.MouseDraggingThreshold
IMGUI_FUNCTION(IsMouseDragging)
OPTIONAL_INT_ARG(button, 0)
OPTIONAL_NUMBER_ARG(lock_threshold, -1.0f)
CALL_FUNCTION(IsMouseDragging, bool, button, -1.0f)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetMousePos();                                                      // shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls
IMGUI_FUNCTION(GetMousePos)
CALL_FUNCTION(GetMousePos, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetMousePosOnOpeningCurrentPopup();                                 // retrieve backup of mouse positioning at the time of opening popup we have BeginPopup() into
IMGUI_FUNCTION(GetMousePosOnOpeningCurrentPopup)
CALL_FUNCTION(GetMousePosOnOpeningCurrentPopup, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetMouseDragDelta(int button = 0, float lock_threshold = -1.0f);    // dragging amount since clicking. if lock_threshold < -1.0f uses io.MouseDraggingThreshold
IMGUI_FUNCTION(GetMouseDragDelta)
OPTIONAL_INT_ARG(button, 0)
OPTIONAL_NUMBER_ARG(lock_threshold, -1.0f)
CALL_FUNCTION(GetMouseDragDelta, ImVec2, button, -1.0f)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API void          ResetMouseDragDelta(int button = 0);                                //
IMGUI_FUNCTION(ResetMouseDragDelta)
OPTIONAL_INT_ARG(button, 0)
CALL_FUNCTION_NO_RET(ResetMouseDragDelta, button)
END_IMGUI_FUNC
//    IMGUI_API ImGuiMouseCursor GetMouseCursor();                                                // get desired cursor type, reset in ImGui::NewFrame(), this updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you
// Unsupported return type ImGuiMouseCursor
//    IMGUI_API void          SetMouseCursor(ImGuiMouseCursor type);                              // set desired cursor type
IMGUI_FUNCTION(SetMouseCursor)
INT_ARG(type)
CALL_FUNCTION_NO_RET(SetMouseCursor, type)
END_IMGUI_FUNC
//    IMGUI_API void          CaptureKeyboardFromApp();                                           // manually enforce imgui setting the io.WantCaptureKeyboard flag next frame (your application needs to handle it). e.g. capture keyboard when your widget is being hovered.
IMGUI_FUNCTION(CaptureKeyboardFromApp)
CALL_FUNCTION_NO_RET(CaptureKeyboardFromApp)
END_IMGUI_FUNC
//    IMGUI_API void          CaptureMouseFromApp();                                              // manually enforce imgui setting the io.WantCaptureMouse flag next frame (your application needs to handle it).
IMGUI_FUNCTION(CaptureMouseFromApp)
CALL_FUNCTION_NO_RET(CaptureMouseFromApp)
END_IMGUI_FUNC
//    IMGUI_API void*         MemAlloc(size_t sz);
// Unsupported return type void*
// Unsupported arg type size_t sz
//    IMGUI_API void          MemFree(void* ptr);
// Unsupported arg type void* ptr
//    IMGUI_API const char*   GetClipboardText();
// Unsupported return type const
//    IMGUI_API void          SetClipboardText(const char* text);
IMGUI_FUNCTION(SetClipboardText)
LABEL_ARG(text)
CALL_FUNCTION_NO_RET(SetClipboardText, text)
END_IMGUI_FUNC
//    IMGUI_API const char*   GetVersion();
// Unsupported return type const
//    IMGUI_API void*         GetInternalState();
// Unsupported return type void*
//    IMGUI_API size_t        GetInternalStateSize();
// Unsupported return type size_t
//    IMGUI_API void          SetInternalState(void* state, bool construct = false);
// Unsupported arg type void* state
END_STACK_START
END_STACK_OPTION(0, End)
END_STACK_OPTION(1, EndChild)
END_STACK_OPTION(2, EndGroup)
END_STACK_OPTION(3, EndTooltip)
END_STACK_OPTION(4, EndMainMenuBar)
END_STACK_OPTION(5, EndMenuBar)
END_STACK_OPTION(6, EndMenu)
END_STACK_OPTION(7, EndPopup)
END_STACK_OPTION(8, EndChildFrame)
END_STACK_END
