//struct ImVec2

//struct ImVec4

//namespace ImGui

//    IMGUI_API ImGuiIO&      GetIO();
// Unsupported return type ImGuiIO&
//    IMGUI_API ImGuiStyle&   GetStyle();
// Unsupported return type ImGuiStyle&
//    IMGUI_API ImDrawData*   GetDrawData();                              // same value as passed to your io.RenderDrawListsFn() function. valid after Render() and until the next call to NewFrame()
// Unsupported return type ImDrawData*
//    IMGUI_API void          NewFrame();                                 // start a new ImGui frame, you can submit any command from this point until NewFrame()/Render().
//Not allowed to use this function
//    IMGUI_API void          Render();                                   // ends the ImGui frame, finalize rendering data, then call your io.RenderDrawListsFn() function if set.
//Not allowed to use this function
//    IMGUI_API void          Shutdown();
//Not allowed to use this function
//    IMGUI_API void          ShowUserGuide();                            // help block
IMGUI_FUNCTION(ShowUserGuide)
CALL_FUNCTION_NO_RET(ShowUserGuide)
END_IMGUI_FUNC
//    IMGUI_API void          ShowStyleEditor(ImGuiStyle* ref = NULL);    // style editor block. you can pass in a reference ImGuiStyle structure to compare to, revert to and save to (else it uses the default style)
// Unsupported arg type ImGuiStyle* ref = NULL
//    IMGUI_API void          ShowTestWindow(bool* p_open = NULL);        // test window demonstrating ImGui features
IMGUI_FUNCTION(ShowTestWindow)
OPTIONAL_BOOL_POINTER_ARG(p_open)
CALL_FUNCTION_NO_RET(ShowTestWindow, p_open)
END_BOOL_POINTER(p_open)
END_IMGUI_FUNC
//    IMGUI_API void          ShowMetricsWindow(bool* p_open = NULL);     // metrics window for debugging ImGui (browse draw commands, individual vertices, window list, etc.)
IMGUI_FUNCTION(ShowMetricsWindow)
OPTIONAL_BOOL_POINTER_ARG(p_open)
CALL_FUNCTION_NO_RET(ShowMetricsWindow, p_open)
END_BOOL_POINTER(p_open)
END_IMGUI_FUNC
//    IMGUI_API bool          Begin(const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0);                                                   // push window to the stack and start appending to it. see .cpp for details. return false when window is collapsed, so you can early out in your code. 'bool* p_open' creates a widget on the upper-right to close the window (which sets your bool to false).
IMGUI_FUNCTION(Begin)
LABEL_ARG(name)
OPTIONAL_BOOL_POINTER_ARG(p_open)
OPTIONAL_INT_ARG(flags, 0)
CALL_FUNCTION(Begin, bool, name, p_open, flags)
IF_RET_ADD_END_STACK(0)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_open)
END_IMGUI_FUNC
//    IMGUI_API bool          Begin(const char* name, bool* p_open, const ImVec2& size_on_first_use, float bg_alpha = -1.0f, ImGuiWindowFlags flags = 0); // OBSOLETE. this is the older/longer API. the extra parameters aren't very relevant. call SetNextWindowSize() instead if you want to set a window size. For regular windows, 'size_on_first_use' only applies to the first time EVER the window is created and probably not what you want! might obsolete this API eventually.
IMGUI_FUNCTION(Begin_5)
LABEL_ARG(name)
BOOL_POINTER_ARG(p_open)
IM_VEC_2_ARG(size_on_first_use)
OPTIONAL_NUMBER_ARG(bg_alpha, -1.0f)
OPTIONAL_INT_ARG(flags, 0)
CALL_FUNCTION(Begin, bool, name, p_open, size_on_first_use, bg_alpha, flags)
IF_RET_ADD_END_STACK(0)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_open)
END_IMGUI_FUNC
//    IMGUI_API void          End();                                                                                                                      // finish appending to current window, pop it off the window stack.
IMGUI_FUNCTION(End)
CALL_FUNCTION_NO_RET(End)
POP_END_STACK(0)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginChild(const char* str_id, const ImVec2& size = ImVec2 0 0, bool border = false, ImGuiWindowFlags extra_flags = 0);    // begin a scrolling region. size==0.0f: use remaining window size, size<0.0f: use remaining window size minus abs(size). size>0.0f: fixed size. each axis can use a different mode, e.g. ImVec2 0 400.
IMGUI_FUNCTION(BeginChild)
LABEL_ARG(str_id)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
OPTIONAL_BOOL_ARG(border, false)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(BeginChild, bool, str_id, size, border, extra_flags)
IF_RET_ADD_END_STACK(1)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginChild(ImGuiID id, const ImVec2& size = ImVec2 0 0, bool border = false, ImGuiWindowFlags extra_flags = 0);            // "
IMGUI_FUNCTION(BeginChild_4)
UINT_ARG(id)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
OPTIONAL_BOOL_ARG(border, false)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(BeginChild, bool, id, size, border, extra_flags)
IF_RET_ADD_END_STACK(1)
PUSH_BOOL(ret)
END_IMGUI_FUNC
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
//    IMGUI_API void          SetWindowFontScale(float scale);                                    // per-window font scale. Adjust IO.FontGlobalScale if you want to scale all windows
IMGUI_FUNCTION(SetWindowFontScale)
NUMBER_ARG(scale)
CALL_FUNCTION_NO_RET(SetWindowFontScale, scale)
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
//    IMGUI_API void          SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeConstraintCallback custom_callback = NULL, void* custom_callback_data = NULL); // set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Use callback to apply non-trivial programmatic constraints.
// Unsupported arg type  ImGuiSizeConstraintCallback custom_callback = NULL
// Unsupported arg type  void* custom_callback_data = NULL
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
//    IMGUI_API void          SetWindowPos(const ImVec2& pos, ImGuiSetCond cond = 0);             // (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
IMGUI_FUNCTION(SetWindowPos)
IM_VEC_2_ARG(pos)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowPos, pos, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowSize(const ImVec2& size, ImGuiSetCond cond = 0);           // (not recommended) set current window size - call within Begin()/End(). set to ImVec2 0 0 to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.    
IMGUI_FUNCTION(SetWindowSize)
IM_VEC_2_ARG(size)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowSize, size, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowCollapsed(bool collapsed, ImGuiSetCond cond = 0);          // (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
IMGUI_FUNCTION(SetWindowCollapsed)
BOOL_ARG(collapsed)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowCollapsed, collapsed, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowFocus();                                                   // (not recommended) set current window to be focused / front-most. prefer using SetNextWindowFocus().
IMGUI_FUNCTION(SetWindowFocus)
CALL_FUNCTION_NO_RET(SetWindowFocus)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowPos(const char* name, const ImVec2& pos, ImGuiSetCond cond = 0);      // set named window position.
IMGUI_FUNCTION(SetWindowPos_3)
LABEL_ARG(name)
IM_VEC_2_ARG(pos)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetWindowPos, name, pos, cond)
END_IMGUI_FUNC
//    IMGUI_API void          SetWindowSize(const char* name, const ImVec2& size, ImGuiSetCond cond = 0);    // set named window size. set axis to 0.0f to force an auto-fit on this axis.
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
CALL_FUNCTION_NO_RET(SetScrollHere, center_y_ratio)
END_IMGUI_FUNC
//    IMGUI_API void          SetScrollFromPosY(float pos_y, float center_y_ratio = 0.5f);        // adjust scrolling amount to make given position valid. use GetCursorPos() or GetCursorStartPos()+offset to get valid positions.
IMGUI_FUNCTION(SetScrollFromPosY)
NUMBER_ARG(pos_y)
OPTIONAL_NUMBER_ARG(center_y_ratio, 0.5f)
CALL_FUNCTION_NO_RET(SetScrollFromPosY, pos_y, center_y_ratio)
END_IMGUI_FUNC
//    IMGUI_API void          SetKeyboardFocusHere(int offset = 0);                               // focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use negative 'offset' to access previous widgets.
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
IMGUI_FUNCTION(PushStyleColor)
INT_ARG(idx)
IM_VEC_4_ARG(col)
CALL_FUNCTION_NO_RET(PushStyleColor, idx, col)
END_IMGUI_FUNC
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
ADD_END_STACK(2)
END_IMGUI_FUNC
//    IMGUI_API void          PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);
IMGUI_FUNCTION(PushStyleVar_2)
INT_ARG(idx)
IM_VEC_2_ARG(val)
CALL_FUNCTION_NO_RET(PushStyleVar, idx, val)
ADD_END_STACK(2)
END_IMGUI_FUNC
//    IMGUI_API void          PopStyleVar(int count = 1);
IMGUI_FUNCTION(PopStyleVar)
OPTIONAL_INT_ARG(count, 1)
CALL_FUNCTION_NO_RET(PopStyleVar, count)
POP_END_STACK(2)
END_IMGUI_FUNC
//    IMGUI_API ImFont*       GetFont();                                                          // get current font
// Unsupported return type ImFont*
//    IMGUI_API float         GetFontSize();                                                      // get current font size (= height in pixels) of current font with current scale applied
IMGUI_FUNCTION(GetFontSize)
CALL_FUNCTION(GetFontSize, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        GetFontTexUvWhitePixel();                                           // get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API
IMGUI_FUNCTION(GetFontTexUvWhitePixel)
CALL_FUNCTION(GetFontTexUvWhitePixel, ImVec2)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImU32         GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f);                  // retrieve given style color with style alpha applied and optional extra alpha multiplier
IMGUI_FUNCTION(GetColorU32)
INT_ARG(idx)
OPTIONAL_NUMBER_ARG(alpha_mul, 1.0f)
CALL_FUNCTION(GetColorU32, unsigned int, idx, alpha_mul)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImU32         GetColorU32(const ImVec4& col);                                     // retrieve given color with style alpha applied
IMGUI_FUNCTION(GetColorU32_1)
IM_VEC_4_ARG(col)
CALL_FUNCTION(GetColorU32, unsigned int, col)
PUSH_NUMBER(ret)
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
CALL_FUNCTION_NO_RET(PushTextWrapPos, wrap_pos_x)
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
//    IMGUI_API void          Separator();                                                        // horizontal line
IMGUI_FUNCTION(Separator)
CALL_FUNCTION_NO_RET(Separator)
END_IMGUI_FUNC
//    IMGUI_API void          SameLine(float pos_x = 0.0f, float spacing_w = -1.0f);              // call between widgets or groups to layout them horizontally
IMGUI_FUNCTION(SameLine)
OPTIONAL_NUMBER_ARG(pos_x, 0.0f)
OPTIONAL_NUMBER_ARG(spacing_w, -1.0f)
CALL_FUNCTION_NO_RET(SameLine, pos_x, spacing_w)
END_IMGUI_FUNC
//    IMGUI_API void          NewLine();                                                          // undo a SameLine()
IMGUI_FUNCTION(NewLine)
CALL_FUNCTION_NO_RET(NewLine)
END_IMGUI_FUNC
//    IMGUI_API void          Spacing();                                                          // add vertical spacing
IMGUI_FUNCTION(Spacing)
CALL_FUNCTION_NO_RET(Spacing)
END_IMGUI_FUNC
//    IMGUI_API void          Dummy(const ImVec2& size);                                          // add a dummy item of given size
IMGUI_FUNCTION(Dummy)
IM_VEC_2_ARG(size)
CALL_FUNCTION_NO_RET(Dummy, size)
END_IMGUI_FUNC
//    IMGUI_API void          Indent(float indent_w = 0.0f);                                      // move content position toward the right, by style.IndentSpacing or indent_w if >0
IMGUI_FUNCTION(Indent)
OPTIONAL_NUMBER_ARG(indent_w, 0.0f)
CALL_FUNCTION_NO_RET(Indent, indent_w)
END_IMGUI_FUNC
//    IMGUI_API void          Unindent(float indent_w = 0.0f);                                    // move content position back to the left, by style.IndentSpacing or indent_w if >0
IMGUI_FUNCTION(Unindent)
OPTIONAL_NUMBER_ARG(indent_w, 0.0f)
CALL_FUNCTION_NO_RET(Unindent, indent_w)
END_IMGUI_FUNC
//    IMGUI_API void          BeginGroup();                                                       // lock horizontal starting position + capture group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)
IMGUI_FUNCTION(BeginGroup)
CALL_FUNCTION_NO_RET(BeginGroup)
ADD_END_STACK(3)
END_IMGUI_FUNC
//    IMGUI_API void          EndGroup();
IMGUI_FUNCTION(EndGroup)
CALL_FUNCTION_NO_RET(EndGroup)
POP_END_STACK(3)
END_IMGUI_FUNC
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
//    IMGUI_API ImVec2        GetCursorScreenPos();                                               // cursor position in absolute screen coordinates [0..io.DisplaySize] (useful to work with ImDrawList API)
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
//    IMGUI_API void          Columns(int count = 1, const char* id = NULL, bool border = true);  // setup number of columns. use an identifier to distinguish multiple column sets. close with Columns(1).
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
IMGUI_FUNCTION(GetID)
LABEL_ARG(str_id)
CALL_FUNCTION(GetID, unsigned int, str_id)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImGuiID       GetID(const char* str_id_begin, const char* str_id_end);
IMGUI_FUNCTION(GetID_2)
LABEL_ARG(str_id_begin)
LABEL_ARG(str_id_end)
CALL_FUNCTION(GetID, unsigned int, str_id_begin, str_id_end)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API ImGuiID       GetID(const void* ptr_id);
// Unsupported arg type const void* ptr_id
//    IMGUI_API void          Text(const char* fmt, ...);
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(Text)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(Text, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          TextV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextColored(const ImVec4& col, const char* fmt, ...);  // shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(TextColored)
IM_VEC_4_ARG(col)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(TextColored, col, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          TextColoredV(const ImVec4& col, const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextDisabled(const char* fmt, ...);                    // shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(TextDisabled)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(TextDisabled, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          TextDisabledV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextWrapped(const char* fmt, ...);                     // shortcut for PushTextWrapPos(0.0f); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(TextWrapped)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(TextWrapped, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          TextWrappedV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          TextUnformatted(const char* text, const char* text_end = NULL);         // doesn't require null terminated string if 'text_end' is specified. no copy done to any bounded stack buffer, recommended for long chunks of text
IMGUI_FUNCTION(TextUnformatted)
LABEL_ARG(text)
OPTIONAL_LABEL_ARG(text_end)
CALL_FUNCTION_NO_RET(TextUnformatted, text, text_end)
END_IMGUI_FUNC
//    IMGUI_API void          LabelText(const char* label, const char* fmt, ...);    // display text+label aligned the same way as value+label widgets
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(LabelText)
LABEL_ARG(label)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(LabelText, label, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          LabelTextV(const char* label, const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          Bullet();                                                               // draw a small circle and keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses
IMGUI_FUNCTION(Bullet)
CALL_FUNCTION_NO_RET(Bullet)
END_IMGUI_FUNC
//    IMGUI_API void          BulletText(const char* fmt, ...);                      // shortcut for Bullet()+Text()
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(BulletText)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(BulletText, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          BulletTextV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API bool          Button(const char* label, const ImVec2& size = ImVec2 0 0);            // button
IMGUI_FUNCTION(Button)
LABEL_ARG(label)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
CALL_FUNCTION(Button, bool, label, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          SmallButton(const char* label);                                         // button with FramePadding=(0,0)
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
//    IMGUI_API void          Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2 0 0, const ImVec2& uv1 = ImVec2 1 1, const ImVec4& tint_col = ImVec4 1 1 1 1, const ImVec4& border_col = ImVec4 0 0 0 0);
IMGUI_FUNCTION(Image)
IM_TEXTURE_ID_ARG(user_texture_id)
IM_VEC_2_ARG(size)
OPTIONAL_IM_VEC_2_ARG(uv0, 0, 0)
OPTIONAL_IM_VEC_2_ARG(uv1, 1, 1)
OPTIONAL_IM_VEC_4_ARG(tint_col, 1, 1, 1, 1)
OPTIONAL_IM_VEC_4_ARG(border_col, 0, 0, 0, 0)
CALL_FUNCTION_NO_RET(Image, user_texture_id, size, uv0, uv1, tint_col, border_col)
END_IMGUI_FUNC
//    IMGUI_API bool          ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2 0 0,  const ImVec2& uv1 = ImVec2 1 1, int frame_padding = -1, const ImVec4& bg_col = ImVec4 0 0 0 0, const ImVec4& tint_col = ImVec4 1 1 1 1);    // <0 frame_padding uses default frame padding settings. 0 for no padding
IMGUI_FUNCTION(ImageButton)
IM_TEXTURE_ID_ARG(user_texture_id)
IM_VEC_2_ARG(size)
OPTIONAL_IM_VEC_2_ARG(uv0, 0, 0)
OPTIONAL_IM_VEC_2_ARG(uv1, 1, 1)
OPTIONAL_INT_ARG(frame_padding, -1)
OPTIONAL_IM_VEC_4_ARG(bg_col, 0, 0, 0, 0)
OPTIONAL_IM_VEC_4_ARG(tint_col, 1, 1, 1, 1)
CALL_FUNCTION(ImageButton, bool, user_texture_id, size, uv0, uv1, frame_padding, bg_col, tint_col)
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
IMGUI_FUNCTION(CheckboxFlags)
LABEL_ARG(label)
UINT_POINTER_ARG(flags)
UINT_ARG(flags_value)
CALL_FUNCTION(CheckboxFlags, bool, label, flags, flags_value)
PUSH_BOOL(ret)
END_UINT_POINTER(flags)
END_IMGUI_FUNC
//    IMGUI_API bool          RadioButton(const char* label, bool active);
IMGUI_FUNCTION(RadioButton)
LABEL_ARG(label)
BOOL_ARG(active)
CALL_FUNCTION(RadioButton, bool, label, active)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          RadioButton(const char* label, int* v, int v_button);
IMGUI_FUNCTION(RadioButton_3)
LABEL_ARG(label)
INT_POINTER_ARG(v)
INT_ARG(v_button)
CALL_FUNCTION(RadioButton, bool, label, v, v_button)
PUSH_BOOL(ret)
END_INT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          Combo(const char* label, int* current_item, const char* const* items, int items_count, int height_in_items = -1);
// Unsupported arg type  const char* const* items
//    IMGUI_API bool          Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int height_in_items = -1);      // separate items with \0, end item-list with \0\0
IMGUI_FUNCTION(Combo)
LABEL_ARG(label)
INT_POINTER_ARG(current_item)
LABEL_ARG(items_separated_by_zeros)
OPTIONAL_INT_ARG(height_in_items, -1)
CALL_FUNCTION(Combo, bool, label, current_item, items_separated_by_zeros, height_in_items)
PUSH_BOOL(ret)
END_INT_POINTER(current_item)
END_IMGUI_FUNC
//    IMGUI_API bool          Combo(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
// Unsupported arg type  bool (*items_getter)(void* data
// Unsupported arg type  const char** out_text)
// Unsupported arg type  void* data
//    IMGUI_API bool          ColorButton(const ImVec4& col, bool small_height = false, bool outline_border = true);
IMGUI_FUNCTION(ColorButton)
IM_VEC_4_ARG(col)
OPTIONAL_BOOL_ARG(small_height, false)
OPTIONAL_BOOL_ARG(outline_border, true)
CALL_FUNCTION(ColorButton, bool, col, small_height, outline_border)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          ColorEdit3(const char* label, float col[3]);                            // Hint: 'float col[3]' function argument is same as 'float* col'. You can pass address of first element out of a contiguous set, e.g. &myvector.x
// Unsupported arg type  float col[3]
//    IMGUI_API bool          ColorEdit4(const char* label, float col[4], bool show_alpha = true);    // "
// Unsupported arg type  float col[4]
//    IMGUI_API void          ColorEditMode(ImGuiColorEditMode mode);                                 // FIXME-OBSOLETE: This is inconsistent with most of the API and will be obsoleted/replaced.
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
//    IMGUI_API void          ProgressBar(float fraction, const ImVec2& size_arg = ImVec2 -1 0, const char* overlay = NULL);
IMGUI_FUNCTION(ProgressBar)
NUMBER_ARG(fraction)
OPTIONAL_IM_VEC_2_ARG(size_arg, -1, 0)
OPTIONAL_LABEL_ARG(overlay)
CALL_FUNCTION_NO_RET(ProgressBar, fraction, size_arg, overlay)
END_IMGUI_FUNC
//    IMGUI_API bool          DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);     // If v_min >= v_max we have no bound
IMGUI_FUNCTION(DragFloat)
LABEL_ARG(label)
FLOAT_POINTER_ARG(v)
OPTIONAL_NUMBER_ARG(v_speed, 1.0f)
OPTIONAL_NUMBER_ARG(v_min, 0.0f)
OPTIONAL_NUMBER_ARG(v_max, 0.0f)
LABEL_ARG(display_format)
OPTIONAL_NUMBER_ARG(power, 1.0f)
CALL_FUNCTION(DragFloat, bool, label, v, v_speed, v_min, v_max, display_format, power)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", const char* display_format_max = NULL, float power = 1.0f);
IMGUI_FUNCTION(DragFloatRange2)
LABEL_ARG(label)
FLOAT_POINTER_ARG(v_current_min)
FLOAT_POINTER_ARG(v_current_max)
OPTIONAL_NUMBER_ARG(v_speed, 1.0f)
OPTIONAL_NUMBER_ARG(v_min, 0.0f)
OPTIONAL_NUMBER_ARG(v_max, 0.0f)
LABEL_ARG(display_format)
OPTIONAL_LABEL_ARG(display_format_max)
OPTIONAL_NUMBER_ARG(power, 1.0f)
CALL_FUNCTION(DragFloatRange2, bool, label, v_current_min, v_current_max, v_speed, v_min, v_max, display_format, display_format_max, power)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v_current_min)
END_FLOAT_POINTER(v_current_max)
END_IMGUI_FUNC
//    IMGUI_API bool          DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");                                       // If v_min >= v_max we have no bound
IMGUI_FUNCTION(DragInt)
LABEL_ARG(label)
INT_POINTER_ARG(v)
OPTIONAL_NUMBER_ARG(v_speed, 1.0f)
OPTIONAL_INT_ARG(v_min, 0)
OPTIONAL_INT_ARG(v_max, 0)
LABEL_ARG(display_format)
CALL_FUNCTION(DragInt, bool, label, v, v_speed, v_min, v_max, display_format)
PUSH_BOOL(ret)
END_INT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[2]
//    IMGUI_API bool          DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[3]
//    IMGUI_API bool          DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
// Unsupported arg type  int v[4]
//    IMGUI_API bool          DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f", const char* display_format_max = NULL);
IMGUI_FUNCTION(DragIntRange2)
LABEL_ARG(label)
INT_POINTER_ARG(v_current_min)
INT_POINTER_ARG(v_current_max)
OPTIONAL_NUMBER_ARG(v_speed, 1.0f)
OPTIONAL_INT_ARG(v_min, 0)
OPTIONAL_INT_ARG(v_max, 0)
LABEL_ARG(display_format)
OPTIONAL_LABEL_ARG(display_format_max)
CALL_FUNCTION(DragIntRange2, bool, label, v_current_min, v_current_max, v_speed, v_min, v_max, display_format, display_format_max)
PUSH_BOOL(ret)
END_INT_POINTER(v_current_min)
END_INT_POINTER(v_current_max)
END_IMGUI_FUNC
//    IMGUI_API bool          InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
// Unsupported arg type  char* buf
// Unsupported arg type  size_t buf_size
// Unsupported arg type  ImGuiTextEditCallback callback = NULL
// Unsupported arg type  void* user_data = NULL
//    IMGUI_API bool          InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2 0 0, ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
// Unsupported arg type  char* buf
// Unsupported arg type  size_t buf_size
// Unsupported arg type  ImGuiTextEditCallback callback = NULL
// Unsupported arg type  void* user_data = NULL
//    IMGUI_API bool          InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
IMGUI_FUNCTION(InputFloat)
LABEL_ARG(label)
FLOAT_POINTER_ARG(v)
OPTIONAL_NUMBER_ARG(step, 0.0f)
OPTIONAL_NUMBER_ARG(step_fast, 0.0f)
OPTIONAL_INT_ARG(decimal_precision, -1)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(InputFloat, bool, label, v, step, step_fast, decimal_precision, extra_flags)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          InputFloat2(const char* label, float v[2], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          InputFloat3(const char* label, float v[3], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          InputFloat4(const char* label, float v[4], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags extra_flags = 0);
IMGUI_FUNCTION(InputInt)
LABEL_ARG(label)
INT_POINTER_ARG(v)
OPTIONAL_INT_ARG(step, 1)
OPTIONAL_INT_ARG(step_fast, 100)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(InputInt, bool, label, v, step, step_fast, extra_flags)
PUSH_BOOL(ret)
END_INT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          InputInt2(const char* label, int v[2], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[2]
//    IMGUI_API bool          InputInt3(const char* label, int v[3], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[3]
//    IMGUI_API bool          InputInt4(const char* label, int v[4], ImGuiInputTextFlags extra_flags = 0);
// Unsupported arg type  int v[4]
//    IMGUI_API bool          SliderFloat(const char* label, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);     // adjust display_format to decorate the value with a prefix or a suffix. Use power!=1.0 for logarithmic sliders
IMGUI_FUNCTION(SliderFloat)
LABEL_ARG(label)
FLOAT_POINTER_ARG(v)
NUMBER_ARG(v_min)
NUMBER_ARG(v_max)
LABEL_ARG(display_format)
OPTIONAL_NUMBER_ARG(power, 1.0f)
CALL_FUNCTION(SliderFloat, bool, label, v, v_min, v_max, display_format, power)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[2]
//    IMGUI_API bool          SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[3]
//    IMGUI_API bool          SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
// Unsupported arg type  float v[4]
//    IMGUI_API bool          SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f);
IMGUI_FUNCTION(SliderAngle)
LABEL_ARG(label)
FLOAT_POINTER_ARG(v_rad)
OPTIONAL_NUMBER_ARG(v_degrees_min, -360.0f)
OPTIONAL_NUMBER_ARG(v_degrees_max, +360.0f)
CALL_FUNCTION(SliderAngle, bool, label, v_rad, v_degrees_min, v_degrees_max)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v_rad)
END_IMGUI_FUNC
//    IMGUI_API bool          SliderInt(const char* label, int* v, int v_min, int v_max, const char* display_format = "%.0f");
IMGUI_FUNCTION(SliderInt)
LABEL_ARG(label)
INT_POINTER_ARG(v)
INT_ARG(v_min)
INT_ARG(v_max)
LABEL_ARG(display_format)
CALL_FUNCTION(SliderInt, bool, label, v, v_min, v_max, display_format)
PUSH_BOOL(ret)
END_INT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[2]
//    IMGUI_API bool          SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[3]
//    IMGUI_API bool          SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* display_format = "%.0f");
// Unsupported arg type  int v[4]
//    IMGUI_API bool          VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
IMGUI_FUNCTION(VSliderFloat)
LABEL_ARG(label)
IM_VEC_2_ARG(size)
FLOAT_POINTER_ARG(v)
NUMBER_ARG(v_min)
NUMBER_ARG(v_max)
LABEL_ARG(display_format)
OPTIONAL_NUMBER_ARG(power, 1.0f)
CALL_FUNCTION(VSliderFloat, bool, label, size, v, v_min, v_max, display_format, power)
PUSH_BOOL(ret)
END_FLOAT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* display_format = "%.0f");
IMGUI_FUNCTION(VSliderInt)
LABEL_ARG(label)
IM_VEC_2_ARG(size)
INT_POINTER_ARG(v)
INT_ARG(v_min)
INT_ARG(v_max)
LABEL_ARG(display_format)
CALL_FUNCTION(VSliderInt, bool, label, size, v, v_min, v_max, display_format)
PUSH_BOOL(ret)
END_INT_POINTER(v)
END_IMGUI_FUNC
//    IMGUI_API bool          TreeNode(const char* label);                                            // if returning 'true' the node is open and the tree id is pushed into the id stack. user is responsible for calling TreePop().
IMGUI_FUNCTION(TreeNode)
LABEL_ARG(label)
CALL_FUNCTION(TreeNode, bool, label)
IF_RET_ADD_END_STACK(4)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          TreeNode(const char* str_id, const char* fmt, ...);    // read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(TreeNode_3)
LABEL_ARG(str_id)
LABEL_ARG(fmt)
CALL_FUNCTION(TreeNode, bool, str_id, fmt)
IF_RET_ADD_END_STACK(4)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          TreeNode(const void* ptr_id, const char* fmt, ...);    // "
// Unsupported arg type const void* ptr_id
// Variadic functions aren't suppported but here it is anyway
//    IMGUI_API bool          TreeNodeV(const char* str_id, const char* fmt, va_list args);           // "
// Unsupported arg type  va_list args
//    IMGUI_API bool          TreeNodeV(const void* ptr_id, const char* fmt, va_list args);           // "
// Unsupported arg type const void* ptr_id
// Unsupported arg type  va_list args
//    IMGUI_API bool          TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags = 0);
// Unsupported arg type  ImGuiTreeNodeFlags flags = 0
//    IMGUI_API bool          TreeNodeEx(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, ...);
// Unsupported arg type  ImGuiTreeNodeFlags flags
// Variadic functions aren't suppported but here it is anyway
//    IMGUI_API bool          TreeNodeEx(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, ...);
// Unsupported arg type const void* ptr_id
// Unsupported arg type  ImGuiTreeNodeFlags flags
// Variadic functions aren't suppported but here it is anyway
//    IMGUI_API bool          TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args);
// Unsupported arg type  ImGuiTreeNodeFlags flags
// Unsupported arg type  va_list args
//    IMGUI_API bool          TreeNodeExV(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args);
// Unsupported arg type const void* ptr_id
// Unsupported arg type  ImGuiTreeNodeFlags flags
// Unsupported arg type  va_list args
//    IMGUI_API void          TreePush(const char* str_id = NULL);                                    // ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call Push/Pop yourself for layout purpose
IMGUI_FUNCTION(TreePush)
OPTIONAL_LABEL_ARG(str_id)
CALL_FUNCTION_NO_RET(TreePush, str_id)
ADD_END_STACK(4)
END_IMGUI_FUNC
//    IMGUI_API void          TreePush(const void* ptr_id = NULL);                                    // "
// Unsupported arg type const void* ptr_id = NULL
//    IMGUI_API void          TreePop();                                                              // ~ Unindent()+PopId()
IMGUI_FUNCTION(TreePop)
CALL_FUNCTION_NO_RET(TreePop)
POP_END_STACK(4)
END_IMGUI_FUNC
//    IMGUI_API void          TreeAdvanceToLabelPos();                                                // advance cursor x position by GetTreeNodeToLabelSpacing()
IMGUI_FUNCTION(TreeAdvanceToLabelPos)
CALL_FUNCTION_NO_RET(TreeAdvanceToLabelPos)
END_IMGUI_FUNC
//    IMGUI_API float         GetTreeNodeToLabelSpacing();                                            // horizontal distance preceding label when using TreeNode*() or Bullet() == (g.FontSize + style.FramePadding.x*2) for a regular unframed TreeNode
IMGUI_FUNCTION(GetTreeNodeToLabelSpacing)
CALL_FUNCTION(GetTreeNodeToLabelSpacing, float)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetNextTreeNodeOpen(bool is_open, ImGuiSetCond cond = 0);               // set next TreeNode/CollapsingHeader open state.
IMGUI_FUNCTION(SetNextTreeNodeOpen)
BOOL_ARG(is_open)
OPTIONAL_INT_ARG(cond, 0)
CALL_FUNCTION_NO_RET(SetNextTreeNodeOpen, is_open, cond)
END_IMGUI_FUNC
//    IMGUI_API bool          CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags = 0);      // if returning 'true' the header is open. doesn't indent nor push on ID stack. user doesn't have to call TreePop().
// Unsupported arg type  ImGuiTreeNodeFlags flags = 0
//    IMGUI_API bool          CollapsingHeader(const char* label, bool* p_open, ImGuiTreeNodeFlags flags = 0); // when 'p_open' isn't NULL, display an additional small close button on upper right of the header
// Unsupported arg type  ImGuiTreeNodeFlags flags = 0
//    IMGUI_API bool          Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2 0 0);  // size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
IMGUI_FUNCTION(Selectable)
LABEL_ARG(label)
OPTIONAL_BOOL_ARG(selected, false)
OPTIONAL_INT_ARG(flags, 0)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
CALL_FUNCTION(Selectable, bool, label, selected, flags, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2 0 0);
IMGUI_FUNCTION(Selectable_4)
LABEL_ARG(label)
BOOL_POINTER_ARG(p_selected)
OPTIONAL_INT_ARG(flags, 0)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
CALL_FUNCTION(Selectable, bool, label, p_selected, flags, size)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_selected)
END_IMGUI_FUNC
//    IMGUI_API bool          ListBox(const char* label, int* current_item, const char* const* items, int items_count, int height_in_items = -1);
// Unsupported arg type  const char* const* items
//    IMGUI_API bool          ListBox(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
// Unsupported arg type  bool (*items_getter)(void* data
// Unsupported arg type  const char** out_text)
// Unsupported arg type  void* data
//    IMGUI_API bool          ListBoxHeader(const char* label, const ImVec2& size = ImVec2 0 0); // use if you want to reimplement ListBox() will custom data or interactions. make sure to call ListBoxFooter() afterwards.
IMGUI_FUNCTION(ListBoxHeader)
LABEL_ARG(label)
OPTIONAL_IM_VEC_2_ARG(size, 0, 0)
CALL_FUNCTION(ListBoxHeader, bool, label, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          ListBoxHeader(const char* label, int items_count, int height_in_items = -1); // "
IMGUI_FUNCTION(ListBoxHeader_3)
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
//    IMGUI_API void          ValueColor(const char* prefix, const ImVec4& v);
IMGUI_FUNCTION(ValueColor)
LABEL_ARG(prefix)
IM_VEC_4_ARG(v)
CALL_FUNCTION_NO_RET(ValueColor, prefix, v)
END_IMGUI_FUNC
//    IMGUI_API void          ValueColor(const char* prefix, ImU32 v);
IMGUI_FUNCTION(ValueColor_2)
LABEL_ARG(prefix)
UINT_ARG(v)
CALL_FUNCTION_NO_RET(ValueColor, prefix, v)
END_IMGUI_FUNC
//    IMGUI_API void          SetTooltip(const char* fmt, ...);                  // set tooltip under mouse-cursor, typically use with ImGui::IsHovered(). last call wins
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(SetTooltip)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(SetTooltip, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          SetTooltipV(const char* fmt, va_list args);
// Unsupported arg type  va_list args
//    IMGUI_API void          BeginTooltip();                                                     // use to create full-featured tooltip windows that aren't just text
IMGUI_FUNCTION(BeginTooltip)
CALL_FUNCTION_NO_RET(BeginTooltip)
ADD_END_STACK(5)
END_IMGUI_FUNC
//    IMGUI_API void          EndTooltip();
IMGUI_FUNCTION(EndTooltip)
CALL_FUNCTION_NO_RET(EndTooltip)
POP_END_STACK(5)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMainMenuBar();                                                 // create and append to a full screen menu-bar. only call EndMainMenuBar() if this returns true!
IMGUI_FUNCTION(BeginMainMenuBar)
CALL_FUNCTION(BeginMainMenuBar, bool)
IF_RET_ADD_END_STACK(6)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMainMenuBar();
IMGUI_FUNCTION(EndMainMenuBar)
CALL_FUNCTION_NO_RET(EndMainMenuBar)
POP_END_STACK(6)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMenuBar();                                                     // append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set). only call EndMenuBar() if this returns true!
IMGUI_FUNCTION(BeginMenuBar)
CALL_FUNCTION(BeginMenuBar, bool)
IF_RET_ADD_END_STACK(7)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMenuBar();
IMGUI_FUNCTION(EndMenuBar)
CALL_FUNCTION_NO_RET(EndMenuBar)
POP_END_STACK(7)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginMenu(const char* label, bool enabled = true);                  // create a sub-menu entry. only call EndMenu() if this returns true!
IMGUI_FUNCTION(BeginMenu)
LABEL_ARG(label)
OPTIONAL_BOOL_ARG(enabled, true)
CALL_FUNCTION(BeginMenu, bool, label, enabled)
IF_RET_ADD_END_STACK(8)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndMenu();
IMGUI_FUNCTION(EndMenu)
CALL_FUNCTION_NO_RET(EndMenu)
POP_END_STACK(8)
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
//    IMGUI_API void          OpenPopup(const char* str_id);                                      // mark popup as open. popups are closed when user click outside, or activate a pressable item, or CloseCurrentPopup() is called within a BeginPopup()/EndPopup() block. popup identifiers are relative to the current ID-stack (so OpenPopup and BeginPopup needs to be at the same level).
IMGUI_FUNCTION(OpenPopup)
LABEL_ARG(str_id)
CALL_FUNCTION_NO_RET(OpenPopup, str_id)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopup(const char* str_id);                                     // return true if the popup is open, and you can start outputting to it. only call EndPopup() if BeginPopup() returned true!
IMGUI_FUNCTION(BeginPopup)
LABEL_ARG(str_id)
CALL_FUNCTION(BeginPopup, bool, str_id)
IF_RET_ADD_END_STACK(9)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupModal(const char* name, bool* p_open = NULL, ImGuiWindowFlags extra_flags = 0);               // modal dialog (block interactions behind the modal window, can't close the modal window by clicking outside)
IMGUI_FUNCTION(BeginPopupModal)
LABEL_ARG(name)
OPTIONAL_BOOL_POINTER_ARG(p_open)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(BeginPopupModal, bool, name, p_open, extra_flags)
IF_RET_ADD_END_STACK(9)
PUSH_BOOL(ret)
END_BOOL_POINTER(p_open)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextItem(const char* str_id, int mouse_button = 1);                                        // helper to open and begin popup when clicked on last item. read comments in .cpp!
IMGUI_FUNCTION(BeginPopupContextItem)
LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextItem, bool, str_id, mouse_button)
IF_RET_ADD_END_STACK(9)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextWindow(bool also_over_items = true, const char* str_id = NULL, int mouse_button = 1);  // helper to open and begin popup when clicked on current window.
IMGUI_FUNCTION(BeginPopupContextWindow)
OPTIONAL_BOOL_ARG(also_over_items, true)
OPTIONAL_LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextWindow, bool, also_over_items, str_id, mouse_button)
IF_RET_ADD_END_STACK(9)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginPopupContextVoid(const char* str_id = NULL, int mouse_button = 1);                                 // helper to open and begin popup when clicked in void (no window).
IMGUI_FUNCTION(BeginPopupContextVoid)
OPTIONAL_LABEL_ARG(str_id)
OPTIONAL_INT_ARG(mouse_button, 1)
CALL_FUNCTION(BeginPopupContextVoid, bool, str_id, mouse_button)
IF_RET_ADD_END_STACK(9)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndPopup();
IMGUI_FUNCTION(EndPopup)
CALL_FUNCTION_NO_RET(EndPopup)
POP_END_STACK(9)
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
//    IMGUI_API void          LogText(const char* fmt, ...);                     // pass text data straight to log (without being displayed)
// Variadic functions aren't suppported but here it is anyway
IMGUI_FUNCTION(LogText)
LABEL_ARG(fmt)
CALL_FUNCTION_NO_RET(LogText, fmt)
END_IMGUI_FUNC
//    IMGUI_API void          PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect);
IMGUI_FUNCTION(PushClipRect)
IM_VEC_2_ARG(clip_rect_min)
IM_VEC_2_ARG(clip_rect_max)
BOOL_ARG(intersect_with_current_clip_rect)
CALL_FUNCTION_NO_RET(PushClipRect, clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
END_IMGUI_FUNC
//    IMGUI_API void          PopClipRect();
IMGUI_FUNCTION(PopClipRect)
CALL_FUNCTION_NO_RET(PopClipRect)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemHovered();                                                    // was the last item hovered by mouse?
IMGUI_FUNCTION(IsItemHovered)
CALL_FUNCTION(IsItemHovered, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemHoveredRect();                                                // was the last item hovered by mouse? even if another item is active or window is blocked by popup while we are hovering this
IMGUI_FUNCTION(IsItemHoveredRect)
CALL_FUNCTION(IsItemHoveredRect, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemActive();                                                     // was the last item active? (e.g. button being held, text field being edited- items that don't interact will always return false)
IMGUI_FUNCTION(IsItemActive)
CALL_FUNCTION(IsItemActive, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsItemClicked(int mouse_button = 0);                                // was the last item clicked? (e.g. button/node just clicked on)
IMGUI_FUNCTION(IsItemClicked)
OPTIONAL_INT_ARG(mouse_button, 0)
CALL_FUNCTION(IsItemClicked, bool, mouse_button)
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
//    IMGUI_API void          SetItemAllowOverlap();                                              // allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.
IMGUI_FUNCTION(SetItemAllowOverlap)
CALL_FUNCTION_NO_RET(SetItemAllowOverlap)
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
//    IMGUI_API bool          IsRootWindowFocused();                                              // is current root window focused (root = top-most parent of a child, otherwise self)
IMGUI_FUNCTION(IsRootWindowFocused)
CALL_FUNCTION(IsRootWindowFocused, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRootWindowOrAnyChildFocused();                                    // is current root window or any of its child (including current window) focused
IMGUI_FUNCTION(IsRootWindowOrAnyChildFocused)
CALL_FUNCTION(IsRootWindowOrAnyChildFocused, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRootWindowOrAnyChildHovered();                                    // is current root window or any of its child (including current window) hovered and hoverable (not blocked by a popup)
IMGUI_FUNCTION(IsRootWindowOrAnyChildHovered)
CALL_FUNCTION(IsRootWindowOrAnyChildHovered, bool)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRectVisible(const ImVec2& size);                                  // test if rectangle (of given size, starting from cursor position) is visible / not clipped.
IMGUI_FUNCTION(IsRectVisible)
IM_VEC_2_ARG(size)
CALL_FUNCTION(IsRectVisible, bool, size)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsRectVisible(const ImVec2& rect_min, const ImVec2& rect_max);      // test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user's side.
IMGUI_FUNCTION(IsRectVisible_2)
IM_VEC_2_ARG(rect_min)
IM_VEC_2_ARG(rect_max)
CALL_FUNCTION(IsRectVisible, bool, rect_min, rect_max)
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
IMGUI_FUNCTION(GetStyleColName)
INT_ARG(idx)
CALL_FUNCTION(GetStyleColName, const char*, idx)
PUSH_STRING(ret)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        CalcItemRectClosestPoint(const ImVec2& pos, bool on_edge = false, float outward = +0.0f);   // utility to find the closest point the last item bounding rectangle edge. useful to visually link items
IMGUI_FUNCTION(CalcItemRectClosestPoint)
IM_VEC_2_ARG(pos)
OPTIONAL_BOOL_ARG(on_edge, false)
OPTIONAL_NUMBER_ARG(outward, +0.0f)
CALL_FUNCTION(CalcItemRectClosestPoint, ImVec2, pos, on_edge, outward)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API ImVec2        CalcTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
IMGUI_FUNCTION(CalcTextSize)
LABEL_ARG(text)
OPTIONAL_LABEL_ARG(text_end)
OPTIONAL_BOOL_ARG(hide_text_after_double_hash, false)
OPTIONAL_NUMBER_ARG(wrap_width, -1.0f)
CALL_FUNCTION(CalcTextSize, ImVec2, text, text_end, hide_text_after_double_hash, wrap_width)
PUSH_NUMBER(ret.x)
PUSH_NUMBER(ret.y)
END_IMGUI_FUNC
//    IMGUI_API void          CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end);    // calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.
IMGUI_FUNCTION(CalcListClipping)
INT_ARG(items_count)
NUMBER_ARG(items_height)
INT_POINTER_ARG(out_items_display_start)
INT_POINTER_ARG(out_items_display_end)
CALL_FUNCTION_NO_RET(CalcListClipping, items_count, items_height, out_items_display_start, out_items_display_end)
END_INT_POINTER(out_items_display_start)
END_INT_POINTER(out_items_display_end)
END_IMGUI_FUNC
//    IMGUI_API bool          BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags extra_flags = 0);	// helper to create a child window / scrolling region that looks like a normal widget frame
IMGUI_FUNCTION(BeginChildFrame)
UINT_ARG(id)
IM_VEC_2_ARG(size)
OPTIONAL_INT_ARG(extra_flags, 0)
CALL_FUNCTION(BeginChildFrame, bool, id, size, extra_flags)
IF_RET_ADD_END_STACK(10)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API void          EndChildFrame();
IMGUI_FUNCTION(EndChildFrame)
CALL_FUNCTION_NO_RET(EndChildFrame)
POP_END_STACK(10)
END_IMGUI_FUNC
//    IMGUI_API ImVec4        ColorConvertU32ToFloat4(ImU32 in);
// Unsupported return type ImVec4
//    IMGUI_API ImU32         ColorConvertFloat4ToU32(const ImVec4& in);
IMGUI_FUNCTION(ColorConvertFloat4ToU32)
IM_VEC_4_ARG(in)
CALL_FUNCTION(ColorConvertFloat4ToU32, unsigned int, in)
PUSH_NUMBER(ret)
END_IMGUI_FUNC
//    IMGUI_API void          ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v);
// Unsupported arg type  float& out_h
// Unsupported arg type  float& out_s
// Unsupported arg type  float& out_v
//    IMGUI_API void          ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b);
// Unsupported arg type  float& out_r
// Unsupported arg type  float& out_g
// Unsupported arg type  float& out_b
//    IMGUI_API int           GetKeyIndex(ImGuiKey imgui_key);                                    // map ImGuiKey_* values into user's key index. == io.KeyMap[key]
// Unsupported return type int
//    IMGUI_API bool          IsKeyDown(int user_key_index);                                      // is key being held. == io.KeysDown[user_key_index]. note that imgui doesn't know the semantic of each entry of io.KeyDown[]. Use your own indices/enums according to how your backend/engine stored them into KeyDown[]!
IMGUI_FUNCTION(IsKeyDown)
INT_ARG(user_key_index)
CALL_FUNCTION(IsKeyDown, bool, user_key_index)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsKeyPressed(int user_key_index, bool repeat = true);               // was key pressed (went from !Down to Down). if repeat=true, uses io.KeyRepeatDelay / KeyRepeatRate
IMGUI_FUNCTION(IsKeyPressed)
INT_ARG(user_key_index)
OPTIONAL_BOOL_ARG(repeat, true)
CALL_FUNCTION(IsKeyPressed, bool, user_key_index, repeat)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsKeyReleased(int user_key_index);                                  // was key released (went from Down to !Down)..
IMGUI_FUNCTION(IsKeyReleased)
INT_ARG(user_key_index)
CALL_FUNCTION(IsKeyReleased, bool, user_key_index)
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
//    IMGUI_API bool          IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip = true);  // is mouse hovering given bounding rect (in screen space). clipped by current clipping settings. disregarding of consideration of focus/window ordering/blocked by a popup.
IMGUI_FUNCTION(IsMouseHoveringRect)
IM_VEC_2_ARG(r_min)
IM_VEC_2_ARG(r_max)
OPTIONAL_BOOL_ARG(clip, true)
CALL_FUNCTION(IsMouseHoveringRect, bool, r_min, r_max, clip)
PUSH_BOOL(ret)
END_IMGUI_FUNC
//    IMGUI_API bool          IsMouseDragging(int button = 0, float lock_threshold = -1.0f);      // is mouse dragging. if lock_threshold < -1.0f uses io.MouseDraggingThreshold
IMGUI_FUNCTION(IsMouseDragging)
OPTIONAL_INT_ARG(button, 0)
OPTIONAL_NUMBER_ARG(lock_threshold, -1.0f)
CALL_FUNCTION(IsMouseDragging, bool, button, lock_threshold)
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
CALL_FUNCTION(GetMouseDragDelta, ImVec2, button, lock_threshold)
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
//    IMGUI_API void          CaptureKeyboardFromApp(bool capture = true);                        // manually override io.WantCaptureKeyboard flag next frame (said flag is entirely left for your application handle). e.g. force capture keyboard when your widget is being hovered.
IMGUI_FUNCTION(CaptureKeyboardFromApp)
OPTIONAL_BOOL_ARG(capture, true)
CALL_FUNCTION_NO_RET(CaptureKeyboardFromApp, capture)
END_IMGUI_FUNC
//    IMGUI_API void          CaptureMouseFromApp(bool capture = true);                           // manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application handle).
IMGUI_FUNCTION(CaptureMouseFromApp)
OPTIONAL_BOOL_ARG(capture, true)
CALL_FUNCTION_NO_RET(CaptureMouseFromApp, capture)
END_IMGUI_FUNC
//    IMGUI_API void*         MemAlloc(size_t sz);
// Unsupported return type void*
// Unsupported arg type size_t sz
//    IMGUI_API void          MemFree(void* ptr);
// Unsupported arg type void* ptr
//    IMGUI_API const char*   GetClipboardText();
IMGUI_FUNCTION(GetClipboardText)
CALL_FUNCTION(GetClipboardText, const char*)
PUSH_STRING(ret)
END_IMGUI_FUNC
//    IMGUI_API void          SetClipboardText(const char* text);
IMGUI_FUNCTION(SetClipboardText)
LABEL_ARG(text)
CALL_FUNCTION_NO_RET(SetClipboardText, text)
END_IMGUI_FUNC
//    IMGUI_API const char*   GetVersion();
IMGUI_FUNCTION(GetVersion)
CALL_FUNCTION(GetVersion, const char*)
PUSH_STRING(ret)
END_IMGUI_FUNC
//    IMGUI_API ImGuiContext* CreateContext(void* (*malloc_fn)(size_t) = NULL, void (*free_fn)(void*) = NULL);
// Unsupported return type ImGuiContext*
// Unsupported arg type void* (*malloc_fn)(size_t) = NULL
// Unsupported arg type  void (*free_fn)(void*) = NULL
//    IMGUI_API void          DestroyContext(ImGuiContext* ctx);
// Unsupported arg type ImGuiContext* ctx
//    IMGUI_API ImGuiContext* GetCurrentContext();
// Unsupported return type ImGuiContext*
//    IMGUI_API void          SetCurrentContext(ImGuiContext* ctx);
// Unsupported arg type ImGuiContext* ctx
END_STACK_START
END_STACK_OPTION(0, End)
END_STACK_OPTION(1, EndChild)
END_STACK_OPTION(2, PopStyleVar)
END_STACK_OPTION(3, EndGroup)
END_STACK_OPTION(4, TreePop)
END_STACK_OPTION(5, EndTooltip)
END_STACK_OPTION(6, EndMainMenuBar)
END_STACK_OPTION(7, EndMenuBar)
END_STACK_OPTION(8, EndMenu)
END_STACK_OPTION(9, EndPopup)
END_STACK_OPTION(10, EndChildFrame)
END_STACK_END
//enum ImGuiWindowFlags_

START_ENUM(WindowFlags)
//    ImGuiWindowFlags_NoTitleBar             = 1 << 0,   // Disable title-bar
MAKE_ENUM(ImGuiWindowFlags_NoTitleBar,NoTitleBar)
//    ImGuiWindowFlags_NoResize               = 1 << 1,   // Disable user resizing with the lower-right grip
MAKE_ENUM(ImGuiWindowFlags_NoResize,NoResize)
//    ImGuiWindowFlags_NoMove                 = 1 << 2,   // Disable user moving the window
MAKE_ENUM(ImGuiWindowFlags_NoMove,NoMove)
//    ImGuiWindowFlags_NoScrollbar            = 1 << 3,   // Disable scrollbars (window can still scroll with mouse or programatically)
MAKE_ENUM(ImGuiWindowFlags_NoScrollbar,NoScrollbar)
//    ImGuiWindowFlags_NoScrollWithMouse      = 1 << 4,   // Disable user vertically scrolling with mouse wheel
MAKE_ENUM(ImGuiWindowFlags_NoScrollWithMouse,NoScrollWithMouse)
//    ImGuiWindowFlags_NoCollapse             = 1 << 5,   // Disable user collapsing window by double-clicking on it
MAKE_ENUM(ImGuiWindowFlags_NoCollapse,NoCollapse)
//    ImGuiWindowFlags_AlwaysAutoResize       = 1 << 6,   // Resize every window to its content every frame
MAKE_ENUM(ImGuiWindowFlags_AlwaysAutoResize,AlwaysAutoResize)
//    ImGuiWindowFlags_ShowBorders            = 1 << 7,   // Show borders around windows and items
MAKE_ENUM(ImGuiWindowFlags_ShowBorders,ShowBorders)
//    ImGuiWindowFlags_NoSavedSettings        = 1 << 8,   // Never load/save settings in .ini file
MAKE_ENUM(ImGuiWindowFlags_NoSavedSettings,NoSavedSettings)
//    ImGuiWindowFlags_NoInputs               = 1 << 9,   // Disable catching mouse or keyboard inputs
MAKE_ENUM(ImGuiWindowFlags_NoInputs,NoInputs)
//    ImGuiWindowFlags_MenuBar                = 1 << 10,  // Has a menu-bar
MAKE_ENUM(ImGuiWindowFlags_MenuBar,MenuBar)
//    ImGuiWindowFlags_HorizontalScrollbar    = 1 << 11,  // Allow horizontal scrollbar to appear (off by default). You may use SetNextWindowContentSize(ImVec2(width,0.0f)); prior to calling Begin() to specify width. Read code in imgui_demo in the "Horizontal Scrolling" section.
MAKE_ENUM(ImGuiWindowFlags_HorizontalScrollbar,HorizontalScrollbar)
//    ImGuiWindowFlags_NoFocusOnAppearing     = 1 << 12,  // Disable taking focus when transitioning from hidden to visible state
MAKE_ENUM(ImGuiWindowFlags_NoFocusOnAppearing,NoFocusOnAppearing)
//    ImGuiWindowFlags_NoBringToFrontOnFocus  = 1 << 13,  // Disable bringing window to front when taking focus (e.g. clicking on it or programatically giving it focus)
MAKE_ENUM(ImGuiWindowFlags_NoBringToFrontOnFocus,NoBringToFrontOnFocus)
//    ImGuiWindowFlags_AlwaysVerticalScrollbar= 1 << 14,  // Always show vertical scrollbar (even if ContentSize.y < Size.y)
MAKE_ENUM(ImGuiWindowFlags_AlwaysVerticalScrollbar,AlwaysVerticalScrollbar)
//    ImGuiWindowFlags_AlwaysHorizontalScrollbar=1<< 15,  // Always show horizontal scrollbar (even if ContentSize.x < Size.x)
MAKE_ENUM(ImGuiWindowFlags_AlwaysHorizontalScrollbar,AlwaysHorizontalScrollbar)
//    ImGuiWindowFlags_AlwaysUseWindowPadding = 1 << 16,  // Ensure child windows without border uses style.WindowPadding (ignored by default for non-bordered child windows, because more convenient)
MAKE_ENUM(ImGuiWindowFlags_AlwaysUseWindowPadding,AlwaysUseWindowPadding)
//    ImGuiWindowFlags_ChildWindow            = 1 << 20,  // Don't use! For internal use by BeginChild()
MAKE_ENUM(ImGuiWindowFlags_ChildWindow,ChildWindow)
//    ImGuiWindowFlags_ChildWindowAutoFitX    = 1 << 21,  // Don't use! For internal use by BeginChild()
MAKE_ENUM(ImGuiWindowFlags_ChildWindowAutoFitX,ChildWindowAutoFitX)
//    ImGuiWindowFlags_ChildWindowAutoFitY    = 1 << 22,  // Don't use! For internal use by BeginChild()
MAKE_ENUM(ImGuiWindowFlags_ChildWindowAutoFitY,ChildWindowAutoFitY)
//    ImGuiWindowFlags_ComboBox               = 1 << 23,  // Don't use! For internal use by ComboBox()
MAKE_ENUM(ImGuiWindowFlags_ComboBox,ComboBox)
//    ImGuiWindowFlags_Tooltip                = 1 << 24,  // Don't use! For internal use by BeginTooltip()
MAKE_ENUM(ImGuiWindowFlags_Tooltip,Tooltip)
//    ImGuiWindowFlags_Popup                  = 1 << 25,  // Don't use! For internal use by BeginPopup()
MAKE_ENUM(ImGuiWindowFlags_Popup,Popup)
//    ImGuiWindowFlags_Modal                  = 1 << 26,  // Don't use! For internal use by BeginPopupModal()
MAKE_ENUM(ImGuiWindowFlags_Modal,Modal)
//    ImGuiWindowFlags_ChildMenu              = 1 << 27   // Don't use! For internal use by BeginMenu()
MAKE_ENUM(ImGuiWindowFlags_ChildMenu,ChildMenu)
END_ENUM(WindowFlags)
//enum ImGuiInputTextFlags_

START_ENUM(InputTextFlags)
//    ImGuiInputTextFlags_CharsDecimal        = 1 << 0,   // Allow 0123456789.+-*/
MAKE_ENUM(ImGuiInputTextFlags_CharsDecimal,CharsDecimal)
//    ImGuiInputTextFlags_CharsHexadecimal    = 1 << 1,   // Allow 0123456789ABCDEFabcdef
MAKE_ENUM(ImGuiInputTextFlags_CharsHexadecimal,CharsHexadecimal)
//    ImGuiInputTextFlags_CharsUppercase      = 1 << 2,   // Turn a..z into A..Z
MAKE_ENUM(ImGuiInputTextFlags_CharsUppercase,CharsUppercase)
//    ImGuiInputTextFlags_CharsNoBlank        = 1 << 3,   // Filter out spaces, tabs
MAKE_ENUM(ImGuiInputTextFlags_CharsNoBlank,CharsNoBlank)
//    ImGuiInputTextFlags_AutoSelectAll       = 1 << 4,   // Select entire text when first taking mouse focus
MAKE_ENUM(ImGuiInputTextFlags_AutoSelectAll,AutoSelectAll)
//    ImGuiInputTextFlags_EnterReturnsTrue    = 1 << 5,   // Return 'true' when Enter is pressed (as opposed to when the value was modified)
MAKE_ENUM(ImGuiInputTextFlags_EnterReturnsTrue,EnterReturnsTrue)
//    ImGuiInputTextFlags_CallbackCompletion  = 1 << 6,   // Call user function on pressing TAB (for completion handling)
MAKE_ENUM(ImGuiInputTextFlags_CallbackCompletion,CallbackCompletion)
//    ImGuiInputTextFlags_CallbackHistory     = 1 << 7,   // Call user function on pressing Up/Down arrows (for history handling)
MAKE_ENUM(ImGuiInputTextFlags_CallbackHistory,CallbackHistory)
//    ImGuiInputTextFlags_CallbackAlways      = 1 << 8,   // Call user function every time. User code may query cursor position, modify text buffer.
MAKE_ENUM(ImGuiInputTextFlags_CallbackAlways,CallbackAlways)
//    ImGuiInputTextFlags_CallbackCharFilter  = 1 << 9,   // Call user function to filter character. Modify data->EventChar to replace/filter input, or return 1 to discard character.
MAKE_ENUM(ImGuiInputTextFlags_CallbackCharFilter,CallbackCharFilter)
//    ImGuiInputTextFlags_AllowTabInput       = 1 << 10,  // Pressing TAB input a '\t' character into the text field
MAKE_ENUM(ImGuiInputTextFlags_AllowTabInput,AllowTabInput)
//    ImGuiInputTextFlags_CtrlEnterForNewLine = 1 << 11,  // In multi-line mode, unfocus with Enter, add new line with Ctrl+Enter (default is opposite: unfocus with Ctrl+Enter, add line with Enter).
MAKE_ENUM(ImGuiInputTextFlags_CtrlEnterForNewLine,CtrlEnterForNewLine)
//    ImGuiInputTextFlags_NoHorizontalScroll  = 1 << 12,  // Disable following the cursor horizontally
MAKE_ENUM(ImGuiInputTextFlags_NoHorizontalScroll,NoHorizontalScroll)
//    ImGuiInputTextFlags_AlwaysInsertMode    = 1 << 13,  // Insert mode
MAKE_ENUM(ImGuiInputTextFlags_AlwaysInsertMode,AlwaysInsertMode)
//    ImGuiInputTextFlags_ReadOnly            = 1 << 14,  // Read-only mode
MAKE_ENUM(ImGuiInputTextFlags_ReadOnly,ReadOnly)
//    ImGuiInputTextFlags_Password            = 1 << 15,  // Password mode, display all characters as '*'
MAKE_ENUM(ImGuiInputTextFlags_Password,Password)
//    ImGuiInputTextFlags_Multiline           = 1 << 20   // For internal use by InputTextMultiline()
MAKE_ENUM(ImGuiInputTextFlags_Multiline,Multiline)
END_ENUM(InputTextFlags)
//enum ImGuiTreeNodeFlags_

START_ENUM(TreeNodeFlags)
//    ImGuiTreeNodeFlags_Selected             = 1 << 0,   // Draw as selected
MAKE_ENUM(ImGuiTreeNodeFlags_Selected,Selected)
//    ImGuiTreeNodeFlags_Framed               = 1 << 1,   // Full colored frame (e.g. for CollapsingHeader)
MAKE_ENUM(ImGuiTreeNodeFlags_Framed,Framed)
//    ImGuiTreeNodeFlags_AllowOverlapMode     = 1 << 2,   // Hit testing to allow subsequent widgets to overlap this one
MAKE_ENUM(ImGuiTreeNodeFlags_AllowOverlapMode,AllowOverlapMode)
//    ImGuiTreeNodeFlags_NoTreePushOnOpen     = 1 << 3,   // Don't do a TreePush() when open (e.g. for CollapsingHeader) = no extra indent nor pushing on ID stack
MAKE_ENUM(ImGuiTreeNodeFlags_NoTreePushOnOpen,NoTreePushOnOpen)
//    ImGuiTreeNodeFlags_NoAutoOpenOnLog      = 1 << 4,   // Don't automatically and temporarily open node when Logging is active (by default logging will automatically open tree nodes)
MAKE_ENUM(ImGuiTreeNodeFlags_NoAutoOpenOnLog,NoAutoOpenOnLog)
//    ImGuiTreeNodeFlags_DefaultOpen          = 1 << 5,   // Default node to be open
MAKE_ENUM(ImGuiTreeNodeFlags_DefaultOpen,DefaultOpen)
//    ImGuiTreeNodeFlags_OpenOnDoubleClick    = 1 << 6,   // Need double-click to open node
MAKE_ENUM(ImGuiTreeNodeFlags_OpenOnDoubleClick,OpenOnDoubleClick)
//    ImGuiTreeNodeFlags_OpenOnArrow          = 1 << 7,   // Only open when clicking on the arrow part. If ImGuiTreeNodeFlags_OpenOnDoubleClick is also set, single-click arrow or double-click all box to open.
MAKE_ENUM(ImGuiTreeNodeFlags_OpenOnArrow,OpenOnArrow)
//    ImGuiTreeNodeFlags_Leaf                 = 1 << 8,   // No collapsing, no arrow (use as a convenience for leaf nodes). 
MAKE_ENUM(ImGuiTreeNodeFlags_Leaf,Leaf)
//    ImGuiTreeNodeFlags_Bullet               = 1 << 9,   // Display a bullet instead of arrow
MAKE_ENUM(ImGuiTreeNodeFlags_Bullet,Bullet)
//    ImGuiTreeNodeFlags_CollapsingHeader     = ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_NoAutoOpenOnLog
MAKE_ENUM(ImGuiTreeNodeFlags_CollapsingHeader,CollapsingHeader)
END_ENUM(TreeNodeFlags)
//enum ImGuiSelectableFlags_

START_ENUM(SelectableFlags)
//    ImGuiSelectableFlags_DontClosePopups    = 1 << 0,   // Clicking this don't close parent popup window
MAKE_ENUM(ImGuiSelectableFlags_DontClosePopups,DontClosePopups)
//    ImGuiSelectableFlags_SpanAllColumns     = 1 << 1,   // Selectable frame can span all columns (text will still fit in current column)
MAKE_ENUM(ImGuiSelectableFlags_SpanAllColumns,SpanAllColumns)
//    ImGuiSelectableFlags_AllowDoubleClick   = 1 << 2    // Generate press events on double clicks too
MAKE_ENUM(ImGuiSelectableFlags_AllowDoubleClick,AllowDoubleClick)
END_ENUM(SelectableFlags)
//enum ImGuiKey_

START_ENUM(Key)
//    ImGuiKey_Tab,       // for tabbing through fields
MAKE_ENUM(ImGuiKey_Tab,Tab)
//    ImGuiKey_LeftArrow, // for text edit
MAKE_ENUM(ImGuiKey_LeftArrow,LeftArrow)
//    ImGuiKey_RightArrow,// for text edit
MAKE_ENUM(ImGuiKey_RightArrow,RightArrow)
//    ImGuiKey_UpArrow,   // for text edit
MAKE_ENUM(ImGuiKey_UpArrow,UpArrow)
//    ImGuiKey_DownArrow, // for text edit
MAKE_ENUM(ImGuiKey_DownArrow,DownArrow)
//    ImGuiKey_PageUp,
MAKE_ENUM(ImGuiKey_PageUp,PageUp)
//    ImGuiKey_PageDown,
MAKE_ENUM(ImGuiKey_PageDown,PageDown)
//    ImGuiKey_Home,      // for text edit
MAKE_ENUM(ImGuiKey_Home,Home)
//    ImGuiKey_End,       // for text edit
MAKE_ENUM(ImGuiKey_End,End)
//    ImGuiKey_Delete,    // for text edit
MAKE_ENUM(ImGuiKey_Delete,Delete)
//    ImGuiKey_Backspace, // for text edit
MAKE_ENUM(ImGuiKey_Backspace,Backspace)
//    ImGuiKey_Enter,     // for text edit
MAKE_ENUM(ImGuiKey_Enter,Enter)
//    ImGuiKey_Escape,    // for text edit
MAKE_ENUM(ImGuiKey_Escape,Escape)
//    ImGuiKey_A,         // for text edit CTRL+A: select all
MAKE_ENUM(ImGuiKey_A,A)
//    ImGuiKey_C,         // for text edit CTRL+C: copy
MAKE_ENUM(ImGuiKey_C,C)
//    ImGuiKey_V,         // for text edit CTRL+V: paste
MAKE_ENUM(ImGuiKey_V,V)
//    ImGuiKey_X,         // for text edit CTRL+X: cut
MAKE_ENUM(ImGuiKey_X,X)
//    ImGuiKey_Y,         // for text edit CTRL+Y: redo
MAKE_ENUM(ImGuiKey_Y,Y)
//    ImGuiKey_Z,         // for text edit CTRL+Z: undo
MAKE_ENUM(ImGuiKey_Z,Z)
//    ImGuiKey_COUNT
MAKE_ENUM(ImGuiKey_COUNT,COUNT)
END_ENUM(Key)
//enum ImGuiCol_

START_ENUM(Col)
//    ImGuiCol_Text,
MAKE_ENUM(ImGuiCol_Text,Text)
//    ImGuiCol_TextDisabled,
MAKE_ENUM(ImGuiCol_TextDisabled,TextDisabled)
//    ImGuiCol_WindowBg,              // Background of normal windows
MAKE_ENUM(ImGuiCol_WindowBg,WindowBg)
//    ImGuiCol_ChildWindowBg,         // Background of child windows
MAKE_ENUM(ImGuiCol_ChildWindowBg,ChildWindowBg)
//    ImGuiCol_PopupBg,               // Background of popups, menus, tooltips windows
MAKE_ENUM(ImGuiCol_PopupBg,PopupBg)
//    ImGuiCol_Border,
MAKE_ENUM(ImGuiCol_Border,Border)
//    ImGuiCol_BorderShadow,
MAKE_ENUM(ImGuiCol_BorderShadow,BorderShadow)
//    ImGuiCol_FrameBg,               // Background of checkbox, radio button, plot, slider, text input
MAKE_ENUM(ImGuiCol_FrameBg,FrameBg)
//    ImGuiCol_FrameBgHovered,
MAKE_ENUM(ImGuiCol_FrameBgHovered,FrameBgHovered)
//    ImGuiCol_FrameBgActive,
MAKE_ENUM(ImGuiCol_FrameBgActive,FrameBgActive)
//    ImGuiCol_TitleBg,
MAKE_ENUM(ImGuiCol_TitleBg,TitleBg)
//    ImGuiCol_TitleBgCollapsed,
MAKE_ENUM(ImGuiCol_TitleBgCollapsed,TitleBgCollapsed)
//    ImGuiCol_TitleBgActive,
MAKE_ENUM(ImGuiCol_TitleBgActive,TitleBgActive)
//    ImGuiCol_MenuBarBg,
MAKE_ENUM(ImGuiCol_MenuBarBg,MenuBarBg)
//    ImGuiCol_ScrollbarBg,
MAKE_ENUM(ImGuiCol_ScrollbarBg,ScrollbarBg)
//    ImGuiCol_ScrollbarGrab,
MAKE_ENUM(ImGuiCol_ScrollbarGrab,ScrollbarGrab)
//    ImGuiCol_ScrollbarGrabHovered,
MAKE_ENUM(ImGuiCol_ScrollbarGrabHovered,ScrollbarGrabHovered)
//    ImGuiCol_ScrollbarGrabActive,
MAKE_ENUM(ImGuiCol_ScrollbarGrabActive,ScrollbarGrabActive)
//    ImGuiCol_ComboBg,
MAKE_ENUM(ImGuiCol_ComboBg,ComboBg)
//    ImGuiCol_CheckMark,
MAKE_ENUM(ImGuiCol_CheckMark,CheckMark)
//    ImGuiCol_SliderGrab,
MAKE_ENUM(ImGuiCol_SliderGrab,SliderGrab)
//    ImGuiCol_SliderGrabActive,
MAKE_ENUM(ImGuiCol_SliderGrabActive,SliderGrabActive)
//    ImGuiCol_Button,
MAKE_ENUM(ImGuiCol_Button,Button)
//    ImGuiCol_ButtonHovered,
MAKE_ENUM(ImGuiCol_ButtonHovered,ButtonHovered)
//    ImGuiCol_ButtonActive,
MAKE_ENUM(ImGuiCol_ButtonActive,ButtonActive)
//    ImGuiCol_Header,
MAKE_ENUM(ImGuiCol_Header,Header)
//    ImGuiCol_HeaderHovered,
MAKE_ENUM(ImGuiCol_HeaderHovered,HeaderHovered)
//    ImGuiCol_HeaderActive,
MAKE_ENUM(ImGuiCol_HeaderActive,HeaderActive)
//    ImGuiCol_Column,
MAKE_ENUM(ImGuiCol_Column,Column)
//    ImGuiCol_ColumnHovered,
MAKE_ENUM(ImGuiCol_ColumnHovered,ColumnHovered)
//    ImGuiCol_ColumnActive,
MAKE_ENUM(ImGuiCol_ColumnActive,ColumnActive)
//    ImGuiCol_ResizeGrip,
MAKE_ENUM(ImGuiCol_ResizeGrip,ResizeGrip)
//    ImGuiCol_ResizeGripHovered,
MAKE_ENUM(ImGuiCol_ResizeGripHovered,ResizeGripHovered)
//    ImGuiCol_ResizeGripActive,
MAKE_ENUM(ImGuiCol_ResizeGripActive,ResizeGripActive)
//    ImGuiCol_CloseButton,
MAKE_ENUM(ImGuiCol_CloseButton,CloseButton)
//    ImGuiCol_CloseButtonHovered,
MAKE_ENUM(ImGuiCol_CloseButtonHovered,CloseButtonHovered)
//    ImGuiCol_CloseButtonActive,
MAKE_ENUM(ImGuiCol_CloseButtonActive,CloseButtonActive)
//    ImGuiCol_PlotLines,
MAKE_ENUM(ImGuiCol_PlotLines,PlotLines)
//    ImGuiCol_PlotLinesHovered,
MAKE_ENUM(ImGuiCol_PlotLinesHovered,PlotLinesHovered)
//    ImGuiCol_PlotHistogram,
MAKE_ENUM(ImGuiCol_PlotHistogram,PlotHistogram)
//    ImGuiCol_PlotHistogramHovered,
MAKE_ENUM(ImGuiCol_PlotHistogramHovered,PlotHistogramHovered)
//    ImGuiCol_TextSelectedBg,
MAKE_ENUM(ImGuiCol_TextSelectedBg,TextSelectedBg)
//    ImGuiCol_ModalWindowDarkening,  // darken entire screen when a modal window is active
MAKE_ENUM(ImGuiCol_ModalWindowDarkening,ModalWindowDarkening)
//    ImGuiCol_COUNT
MAKE_ENUM(ImGuiCol_COUNT,COUNT)
END_ENUM(Col)
//enum ImGuiStyleVar_

START_ENUM(StyleVar)
//    ImGuiStyleVar_Alpha,               // float
MAKE_ENUM(ImGuiStyleVar_Alpha,Alpha)
//    ImGuiStyleVar_WindowPadding,       // ImVec2
MAKE_ENUM(ImGuiStyleVar_WindowPadding,WindowPadding)
//    ImGuiStyleVar_WindowRounding,      // float
MAKE_ENUM(ImGuiStyleVar_WindowRounding,WindowRounding)
//    ImGuiStyleVar_WindowMinSize,       // ImVec2
MAKE_ENUM(ImGuiStyleVar_WindowMinSize,WindowMinSize)
//    ImGuiStyleVar_ChildWindowRounding, // float
MAKE_ENUM(ImGuiStyleVar_ChildWindowRounding,ChildWindowRounding)
//    ImGuiStyleVar_FramePadding,        // ImVec2
MAKE_ENUM(ImGuiStyleVar_FramePadding,FramePadding)
//    ImGuiStyleVar_FrameRounding,       // float
MAKE_ENUM(ImGuiStyleVar_FrameRounding,FrameRounding)
//    ImGuiStyleVar_ItemSpacing,         // ImVec2
MAKE_ENUM(ImGuiStyleVar_ItemSpacing,ItemSpacing)
//    ImGuiStyleVar_ItemInnerSpacing,    // ImVec2
MAKE_ENUM(ImGuiStyleVar_ItemInnerSpacing,ItemInnerSpacing)
//    ImGuiStyleVar_IndentSpacing,       // float
MAKE_ENUM(ImGuiStyleVar_IndentSpacing,IndentSpacing)
//    ImGuiStyleVar_GrabMinSize,         // float
MAKE_ENUM(ImGuiStyleVar_GrabMinSize,GrabMinSize)
//    ImGuiStyleVar_ButtonTextAlign,     // flags ImGuiAlign_*
MAKE_ENUM(ImGuiStyleVar_ButtonTextAlign,ButtonTextAlign)
END_ENUM(StyleVar)
//enum ImGuiColorEditMode_

START_ENUM(ColorEditMode)
//    ImGuiColorEditMode_UserSelect = -2,
MAKE_ENUM(ImGuiColorEditMode_UserSelect,UserSelect)
//    ImGuiColorEditMode_UserSelectShowButton = -1,
MAKE_ENUM(ImGuiColorEditMode_UserSelectShowButton,UserSelectShowButton)
//    ImGuiColorEditMode_RGB = 0,
MAKE_ENUM(ImGuiColorEditMode_RGB,RGB)
//    ImGuiColorEditMode_HSV = 1,
MAKE_ENUM(ImGuiColorEditMode_HSV,HSV)
//    ImGuiColorEditMode_HEX = 2
MAKE_ENUM(ImGuiColorEditMode_HEX,HEX)
END_ENUM(ColorEditMode)
//enum ImGuiMouseCursor_

START_ENUM(MouseCursor)
//    ImGuiMouseCursor_None = -1,
MAKE_ENUM(ImGuiMouseCursor_None,None)
//    ImGuiMouseCursor_Arrow = 0,
MAKE_ENUM(ImGuiMouseCursor_Arrow,Arrow)
//    ImGuiMouseCursor_TextInput,         // When hovering over InputText, etc.
MAKE_ENUM(ImGuiMouseCursor_TextInput,TextInput)
//    ImGuiMouseCursor_Move,              // Unused
MAKE_ENUM(ImGuiMouseCursor_Move,Move)
//    ImGuiMouseCursor_ResizeNS,          // Unused
MAKE_ENUM(ImGuiMouseCursor_ResizeNS,ResizeNS)
//    ImGuiMouseCursor_ResizeEW,          // When hovering over a column
MAKE_ENUM(ImGuiMouseCursor_ResizeEW,ResizeEW)
//    ImGuiMouseCursor_ResizeNESW,        // Unused
MAKE_ENUM(ImGuiMouseCursor_ResizeNESW,ResizeNESW)
//    ImGuiMouseCursor_ResizeNWSE,        // When hovering over the bottom-right corner of a window
MAKE_ENUM(ImGuiMouseCursor_ResizeNWSE,ResizeNWSE)
END_ENUM(MouseCursor)
//enum ImGuiSetCond_

START_ENUM(SetCond)
//    ImGuiSetCond_Always        = 1 << 0, // Set the variable
MAKE_ENUM(ImGuiSetCond_Always,Always)
//    ImGuiSetCond_Once          = 1 << 1, // Set the variable once per runtime session (only the first call with succeed)
MAKE_ENUM(ImGuiSetCond_Once,Once)
//    ImGuiSetCond_FirstUseEver  = 1 << 2, // Set the variable if the window has no saved data (if doesn't exist in the .ini file)
MAKE_ENUM(ImGuiSetCond_FirstUseEver,FirstUseEver)
//    ImGuiSetCond_Appearing     = 1 << 3  // Set the variable if the window is appearing after being hidden/inactive (or the first time)
MAKE_ENUM(ImGuiSetCond_Appearing,Appearing)
END_ENUM(SetCond)
//struct ImGuiStyle

//struct ImGuiIO

//class ImVector

//struct ImGuiOnceUponAFrame

//struct ImGuiTextFilter

//struct ImGuiTextBuffer

//struct ImGuiStorage

//struct ImGuiTextEditCallbackData

//struct ImGuiSizeConstraintCallbackData

//struct ImColor

//struct ImGuiListClipper

//struct ImDrawCmd

//struct ImDrawVert

//struct ImDrawChannel

//struct ImDrawList

//    IMGUI_API void  PushClipRect(ImVec2 clip_rect_min, ImVec2 clip_rect_max, bool intersect_with_current_clip_rect = false);  // Render-level scissoring. This is passed down to your render function but not used for CPU-side coarse clipping. Prefer using higher-level ImGui::PushClipRect() to affect logic (hit-testing and widget culling)
IMGUI_FUNCTION_DRAW_LIST(PushClipRect)
IM_VEC_2_ARG(clip_rect_min)
IM_VEC_2_ARG(clip_rect_max)
OPTIONAL_BOOL_ARG(intersect_with_current_clip_rect, false)
DRAW_LIST_CALL_FUNCTION_NO_RET(PushClipRect, clip_rect_min, clip_rect_max, intersect_with_current_clip_rect)
END_IMGUI_FUNC
//    IMGUI_API void  PushClipRectFullScreen();
IMGUI_FUNCTION_DRAW_LIST(PushClipRectFullScreen)
DRAW_LIST_CALL_FUNCTION_NO_RET(PushClipRectFullScreen)
END_IMGUI_FUNC
//    IMGUI_API void  PopClipRect();
IMGUI_FUNCTION_DRAW_LIST(PopClipRect)
DRAW_LIST_CALL_FUNCTION_NO_RET(PopClipRect)
END_IMGUI_FUNC
//    IMGUI_API void  PushTextureID(const ImTextureID& texture_id);
IMGUI_FUNCTION_DRAW_LIST(PushTextureID)
IM_TEXTURE_ID_ARG(texture_id)
DRAW_LIST_CALL_FUNCTION_NO_RET(PushTextureID, texture_id)
END_IMGUI_FUNC
//    IMGUI_API void  PopTextureID();
IMGUI_FUNCTION_DRAW_LIST(PopTextureID)
DRAW_LIST_CALL_FUNCTION_NO_RET(PopTextureID)
END_IMGUI_FUNC
//    IMGUI_API void  AddLine(const ImVec2& a, const ImVec2& b, ImU32 col, float thickness = 1.0f);
IMGUI_FUNCTION_DRAW_LIST(AddLine)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
UINT_ARG(col)
OPTIONAL_NUMBER_ARG(thickness, 1.0f)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddLine, a, b, col, thickness)
END_IMGUI_FUNC
//    IMGUI_API void  AddRect(const ImVec2& a, const ImVec2& b, ImU32 col, float rounding = 0.0f, int rounding_corners_flags = ~0, float thickness = 1.0f);   // a: upper-left, b: lower-right, rounding_corners_flags: 4-bits corresponding to which corner to round
IMGUI_FUNCTION_DRAW_LIST(AddRect)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
UINT_ARG(col)
OPTIONAL_NUMBER_ARG(rounding, 0.0f)
OPTIONAL_INT_ARG(rounding_corners_flags, ~0)
OPTIONAL_NUMBER_ARG(thickness, 1.0f)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddRect, a, b, col, rounding, rounding_corners_flags, thickness)
END_IMGUI_FUNC
//    IMGUI_API void  AddRectFilled(const ImVec2& a, const ImVec2& b, ImU32 col, float rounding = 0.0f, int rounding_corners_flags = ~0);                     // a: upper-left, b: lower-right
IMGUI_FUNCTION_DRAW_LIST(AddRectFilled)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
UINT_ARG(col)
OPTIONAL_NUMBER_ARG(rounding, 0.0f)
OPTIONAL_INT_ARG(rounding_corners_flags, ~0)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddRectFilled, a, b, col, rounding, rounding_corners_flags)
END_IMGUI_FUNC
//    IMGUI_API void  AddRectFilledMultiColor(const ImVec2& a, const ImVec2& b, ImU32 col_upr_left, ImU32 col_upr_right, ImU32 col_bot_right, ImU32 col_bot_left);
IMGUI_FUNCTION_DRAW_LIST(AddRectFilledMultiColor)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
UINT_ARG(col_upr_left)
UINT_ARG(col_upr_right)
UINT_ARG(col_bot_right)
UINT_ARG(col_bot_left)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddRectFilledMultiColor, a, b, col_upr_left, col_upr_right, col_bot_right, col_bot_left)
END_IMGUI_FUNC
//    IMGUI_API void  AddQuad(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, ImU32 col, float thickness = 1.0f);
IMGUI_FUNCTION_DRAW_LIST(AddQuad)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
IM_VEC_2_ARG(d)
UINT_ARG(col)
OPTIONAL_NUMBER_ARG(thickness, 1.0f)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddQuad, a, b, c, d, col, thickness)
END_IMGUI_FUNC
//    IMGUI_API void  AddQuadFilled(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, ImU32 col);
IMGUI_FUNCTION_DRAW_LIST(AddQuadFilled)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
IM_VEC_2_ARG(d)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddQuadFilled, a, b, c, d, col)
END_IMGUI_FUNC
//    IMGUI_API void  AddTriangle(const ImVec2& a, const ImVec2& b, const ImVec2& c, ImU32 col, float thickness = 1.0f);
IMGUI_FUNCTION_DRAW_LIST(AddTriangle)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
UINT_ARG(col)
OPTIONAL_NUMBER_ARG(thickness, 1.0f)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddTriangle, a, b, c, col, thickness)
END_IMGUI_FUNC
//    IMGUI_API void  AddTriangleFilled(const ImVec2& a, const ImVec2& b, const ImVec2& c, ImU32 col);
IMGUI_FUNCTION_DRAW_LIST(AddTriangleFilled)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddTriangleFilled, a, b, c, col)
END_IMGUI_FUNC
//    IMGUI_API void  AddCircle(const ImVec2& centre, float radius, ImU32 col, int num_segments = 12, float thickness = 1.0f);
IMGUI_FUNCTION_DRAW_LIST(AddCircle)
IM_VEC_2_ARG(centre)
NUMBER_ARG(radius)
UINT_ARG(col)
OPTIONAL_INT_ARG(num_segments, 12)
OPTIONAL_NUMBER_ARG(thickness, 1.0f)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddCircle, centre, radius, col, num_segments, thickness)
END_IMGUI_FUNC
//    IMGUI_API void  AddCircleFilled(const ImVec2& centre, float radius, ImU32 col, int num_segments = 12);
IMGUI_FUNCTION_DRAW_LIST(AddCircleFilled)
IM_VEC_2_ARG(centre)
NUMBER_ARG(radius)
UINT_ARG(col)
OPTIONAL_INT_ARG(num_segments, 12)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddCircleFilled, centre, radius, col, num_segments)
END_IMGUI_FUNC
//    IMGUI_API void  AddText(const ImVec2& pos, ImU32 col, const char* text_begin, const char* text_end = NULL);
IMGUI_FUNCTION_DRAW_LIST(AddText)
IM_VEC_2_ARG(pos)
UINT_ARG(col)
LABEL_ARG(text_begin)
OPTIONAL_LABEL_ARG(text_end)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddText, pos, col, text_begin, text_end)
END_IMGUI_FUNC
//    IMGUI_API void  AddText(const ImFont* font, float font_size, const ImVec2& pos, ImU32 col, const char* text_begin, const char* text_end = NULL, float wrap_width = 0.0f, const ImVec4* cpu_fine_clip_rect = NULL);
// Unsupported arg type const ImFont* font
// Unsupported arg type  const ImVec4* cpu_fine_clip_rect = NULL
//    IMGUI_API void  AddImage(ImTextureID user_texture_id, const ImVec2& a, const ImVec2& b, const ImVec2& uv_a = ImVec2 0 0, const ImVec2& uv_b = ImVec2 1 1, ImU32 col = 0xFFFFFFFF);
IMGUI_FUNCTION_DRAW_LIST(AddImage)
IM_TEXTURE_ID_ARG(user_texture_id)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
OPTIONAL_IM_VEC_2_ARG(uv_a, 0, 0)
OPTIONAL_IM_VEC_2_ARG(uv_b, 1, 1)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddImage, user_texture_id, a, b, uv_a, uv_b, col)
END_IMGUI_FUNC
//    IMGUI_API void  AddImageQuad(ImTextureID user_texture_id, const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, const ImVec2& uv_a = ImVec2 0 0, const ImVec2& uv_b = ImVec2 1 0, const ImVec2& uv_c = ImVec2 1 1, const ImVec2& uv_d = ImVec2 0 1, ImU32 col = 0xFFFFFFFF);
IMGUI_FUNCTION_DRAW_LIST(AddImageQuad)
IM_TEXTURE_ID_ARG(user_texture_id)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
IM_VEC_2_ARG(d)
OPTIONAL_IM_VEC_2_ARG(uv_a, 0, 0)
OPTIONAL_IM_VEC_2_ARG(uv_b, 1, 0)
OPTIONAL_IM_VEC_2_ARG(uv_c, 1, 1)
OPTIONAL_IM_VEC_2_ARG(uv_d, 0, 1)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddImageQuad, user_texture_id, a, b, c, d, uv_a, uv_b, uv_c, uv_d, col)
END_IMGUI_FUNC
//    IMGUI_API void  AddPolyline(const ImVec2* points, const int num_points, ImU32 col, bool closed, float thickness, bool anti_aliased);
// Unsupported arg type const ImVec2* points
// Unsupported arg type  const int num_points
//    IMGUI_API void  AddConvexPolyFilled(const ImVec2* points, const int num_points, ImU32 col, bool anti_aliased);
// Unsupported arg type const ImVec2* points
// Unsupported arg type  const int num_points
//    IMGUI_API void  AddBezierCurve(const ImVec2& pos0, const ImVec2& cp0, const ImVec2& cp1, const ImVec2& pos1, ImU32 col, float thickness, int num_segments = 0);
IMGUI_FUNCTION_DRAW_LIST(AddBezierCurve)
IM_VEC_2_ARG(pos0)
IM_VEC_2_ARG(cp0)
IM_VEC_2_ARG(cp1)
IM_VEC_2_ARG(pos1)
UINT_ARG(col)
NUMBER_ARG(thickness)
OPTIONAL_INT_ARG(num_segments, 0)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddBezierCurve, pos0, cp0, cp1, pos1, col, thickness, num_segments)
END_IMGUI_FUNC
//    inline    void  PathClear()                                                 { _Path.resize(0); }
// Unsupported arg type )                                                 { _Path.resize(0
//    inline    void  PathLineTo(const ImVec2& pos)                               { _Path.push_back(pos); }
// Unsupported arg type const ImVec2& pos)                               { _Path.push_back(pos
//    inline    void  PathLineToMergeDuplicate(const ImVec2& pos)                 { if (_Path.Size == 0 || memcmp(&_Path[_Path.Size-1], &pos, 8) != 0) _Path.push_back(pos); }
// Unsupported arg type const ImVec2& pos)                 { if (_Path.Size == 0 || memcmp(&_Path[_Path.Size-1]
// Unsupported arg type  &pos
// Unsupported arg type  8) != 0) _Path.push_back(pos
//    inline    void  PathFillConvex(ImU32 col)                                   { AddConvexPolyFilled(_Path.Data, _Path.Size, col, true); PathClear(); }
// Unsupported arg type ImU32 col)                                   { AddConvexPolyFilled(_Path.Data
// Unsupported arg type  _Path.Size
// Unsupported arg type  col
// Unsupported arg type  true
//    inline    void  PathStroke(ImU32 col, bool closed, float thickness = 1.0f)  { AddPolyline(_Path.Data, _Path.Size, col, closed, thickness, true); PathClear(); }
// Unsupported arg type  float thickness = 1.0f)  { AddPolyline(_Path.Data
// Unsupported arg type  _Path.Size
// Unsupported arg type  col
// Unsupported arg type  closed
// Unsupported arg type  thickness
// Unsupported arg type  true
//    IMGUI_API void  PathArcTo(const ImVec2& centre, float radius, float a_min, float a_max, int num_segments = 10);
IMGUI_FUNCTION_DRAW_LIST(PathArcTo)
IM_VEC_2_ARG(centre)
NUMBER_ARG(radius)
NUMBER_ARG(a_min)
NUMBER_ARG(a_max)
OPTIONAL_INT_ARG(num_segments, 10)
DRAW_LIST_CALL_FUNCTION_NO_RET(PathArcTo, centre, radius, a_min, a_max, num_segments)
END_IMGUI_FUNC
//    IMGUI_API void  PathArcToFast(const ImVec2& centre, float radius, int a_min_of_12, int a_max_of_12);                                // Use precomputed angles for a 12 steps circle
IMGUI_FUNCTION_DRAW_LIST(PathArcToFast)
IM_VEC_2_ARG(centre)
NUMBER_ARG(radius)
INT_ARG(a_min_of_12)
INT_ARG(a_max_of_12)
DRAW_LIST_CALL_FUNCTION_NO_RET(PathArcToFast, centre, radius, a_min_of_12, a_max_of_12)
END_IMGUI_FUNC
//    IMGUI_API void  PathBezierCurveTo(const ImVec2& p1, const ImVec2& p2, const ImVec2& p3, int num_segments = 0);
IMGUI_FUNCTION_DRAW_LIST(PathBezierCurveTo)
IM_VEC_2_ARG(p1)
IM_VEC_2_ARG(p2)
IM_VEC_2_ARG(p3)
OPTIONAL_INT_ARG(num_segments, 0)
DRAW_LIST_CALL_FUNCTION_NO_RET(PathBezierCurveTo, p1, p2, p3, num_segments)
END_IMGUI_FUNC
//    IMGUI_API void  PathRect(const ImVec2& rect_min, const ImVec2& rect_max, float rounding = 0.0f, int rounding_corners_flags = ~0);   // rounding_corners_flags: 4-bits corresponding to which corner to round
IMGUI_FUNCTION_DRAW_LIST(PathRect)
IM_VEC_2_ARG(rect_min)
IM_VEC_2_ARG(rect_max)
OPTIONAL_NUMBER_ARG(rounding, 0.0f)
OPTIONAL_INT_ARG(rounding_corners_flags, ~0)
DRAW_LIST_CALL_FUNCTION_NO_RET(PathRect, rect_min, rect_max, rounding, rounding_corners_flags)
END_IMGUI_FUNC
//    IMGUI_API void  ChannelsSplit(int channels_count);
IMGUI_FUNCTION_DRAW_LIST(ChannelsSplit)
INT_ARG(channels_count)
DRAW_LIST_CALL_FUNCTION_NO_RET(ChannelsSplit, channels_count)
END_IMGUI_FUNC
//    IMGUI_API void  ChannelsMerge();
IMGUI_FUNCTION_DRAW_LIST(ChannelsMerge)
DRAW_LIST_CALL_FUNCTION_NO_RET(ChannelsMerge)
END_IMGUI_FUNC
//    IMGUI_API void  ChannelsSetCurrent(int channel_index);
IMGUI_FUNCTION_DRAW_LIST(ChannelsSetCurrent)
INT_ARG(channel_index)
DRAW_LIST_CALL_FUNCTION_NO_RET(ChannelsSetCurrent, channel_index)
END_IMGUI_FUNC
//    IMGUI_API void  AddCallback(ImDrawCallback callback, void* callback_data);  // Your rendering function must check for 'UserCallback' in ImDrawCmd and call the function instead of rendering triangles.
// Unsupported arg type ImDrawCallback callback
// Unsupported arg type  void* callback_data
//    IMGUI_API void  AddDrawCmd();                                               // This is useful if you need to forcefully create a new draw call (to allow for dependent rendering / blending). Otherwise primitives are merged into the same draw-call as much as possible
IMGUI_FUNCTION_DRAW_LIST(AddDrawCmd)
DRAW_LIST_CALL_FUNCTION_NO_RET(AddDrawCmd)
END_IMGUI_FUNC
//    IMGUI_API void  Clear();
IMGUI_FUNCTION_DRAW_LIST(Clear)
DRAW_LIST_CALL_FUNCTION_NO_RET(Clear)
END_IMGUI_FUNC
//    IMGUI_API void  ClearFreeMemory();
IMGUI_FUNCTION_DRAW_LIST(ClearFreeMemory)
DRAW_LIST_CALL_FUNCTION_NO_RET(ClearFreeMemory)
END_IMGUI_FUNC
//    IMGUI_API void  PrimReserve(int idx_count, int vtx_count);
IMGUI_FUNCTION_DRAW_LIST(PrimReserve)
INT_ARG(idx_count)
INT_ARG(vtx_count)
DRAW_LIST_CALL_FUNCTION_NO_RET(PrimReserve, idx_count, vtx_count)
END_IMGUI_FUNC
//    IMGUI_API void  PrimRect(const ImVec2& a, const ImVec2& b, ImU32 col);      // Axis aligned rectangle (composed of two triangles)
IMGUI_FUNCTION_DRAW_LIST(PrimRect)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(PrimRect, a, b, col)
END_IMGUI_FUNC
//    IMGUI_API void  PrimRectUV(const ImVec2& a, const ImVec2& b, const ImVec2& uv_a, const ImVec2& uv_b, ImU32 col);
IMGUI_FUNCTION_DRAW_LIST(PrimRectUV)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(uv_a)
IM_VEC_2_ARG(uv_b)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(PrimRectUV, a, b, uv_a, uv_b, col)
END_IMGUI_FUNC
//    IMGUI_API void  PrimQuadUV(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, const ImVec2& uv_a, const ImVec2& uv_b, const ImVec2& uv_c, const ImVec2& uv_d, ImU32 col);
IMGUI_FUNCTION_DRAW_LIST(PrimQuadUV)
IM_VEC_2_ARG(a)
IM_VEC_2_ARG(b)
IM_VEC_2_ARG(c)
IM_VEC_2_ARG(d)
IM_VEC_2_ARG(uv_a)
IM_VEC_2_ARG(uv_b)
IM_VEC_2_ARG(uv_c)
IM_VEC_2_ARG(uv_d)
UINT_ARG(col)
DRAW_LIST_CALL_FUNCTION_NO_RET(PrimQuadUV, a, b, c, d, uv_a, uv_b, uv_c, uv_d, col)
END_IMGUI_FUNC
//    inline    void  PrimVtx(const ImVec2& pos, const ImVec2& uv, ImU32 col)     { PrimWriteIdx((ImDrawIdx)_VtxCurrentIdx); PrimWriteVtx(pos, uv, col); }
// Unsupported arg type  ImU32 col)     { PrimWriteIdx((ImDrawIdx)_VtxCurrentIdx
//    IMGUI_API void  UpdateClipRect();
IMGUI_FUNCTION_DRAW_LIST(UpdateClipRect)
DRAW_LIST_CALL_FUNCTION_NO_RET(UpdateClipRect)
END_IMGUI_FUNC
//    IMGUI_API void  UpdateTextureID();
IMGUI_FUNCTION_DRAW_LIST(UpdateTextureID)
DRAW_LIST_CALL_FUNCTION_NO_RET(UpdateTextureID)
END_IMGUI_FUNC
//struct ImDrawData

//struct ImFontConfig

//struct ImFontAtlas

//struct ImFont

