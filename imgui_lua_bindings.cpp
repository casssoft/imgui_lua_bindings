#include <stdio.h>
#include <imgui.h>
#include <deque>

extern "C" {
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"
}


// THIS IS FOR LUA 5.3 although you can make a few changes for other versions



// define ENABLE_IM_LUA_END_STACK
// to keep track of end and begins and clean up the imgui stack
// if lua errors


// define this global before you call RunString or LoadImGuiBindings
lua_State* lState;

#ifdef ENABLE_IM_LUA_END_STACK
// Stack for imgui begin and end
std::deque<int> endStack;
static void AddToStack(int type) {
  endStack.push_back(type);
}

static void PopEndStack(int type) {
  if (!endStack.empty()) {
    endStack.pop_back(); // hopefully the type matches
  }
}

static void ImEndStack(int type);

#endif

// Example lua run string function
// returns NULL on success and error string on error
const char * RunString(const char* szLua) {
  if (!lState) {
    fprintf(stderr, "You didn't assign the global lState, either assign that or refactor LoadImguiBindings and RunString\n");
  }

  int iStatus = luaL_loadstring(lState, szLua);
  if(iStatus) {
    return lua_tostring(lState, -1);
    //fprintf(stderr, "Lua syntax error: %s\n", lua_tostring(lState, -1));
    //return;
  }
#ifdef ENABLE_IM_LUA_END_STACK
  endStack.clear();
#endif
  iStatus = lua_pcall( lState, 0, 0, 0 );

#ifdef ENABLE_IM_LUA_END_STACK
  bool wasEmpty = endStack.empty();
  while(!endStack.empty()) {
    ImEndStack(endStack.back());
    endStack.pop_back();
  }

#endif
  if( iStatus )
  {
      return lua_tostring(lState, -1);
      //fprintf(stderr, "Error: %s\n", lua_tostring( lState, -1 ));
      //return;
  }
#ifdef ENABLE_IM_LUA_END_STACK
  else if (!wasEmpty) {
    return "Script didn't clean up imgui stack properly";
  }
#endif
  return NULL;
}



#define IMGUI_FUNCTION(name) \
static int impl_##name(lua_State *L) { \
  int max_args = lua_gettop(L); \
  int arg = 1; \
  int stackval = 0;

#define OPTIONAL_LABEL_ARG(name) \
  const char* name; \
  if (arg <= max_args) { \
    name = lua_tostring(L, arg++); \
  } else { \
    name = NULL; \
  }

#define LABEL_ARG(name) \
  size_t i_##name##_size; \
  const char * name = luaL_checklstring(L, arg++, &(i_##name##_size));

#define IM_VEC_2_ARG(name)\
  const lua_Number i_##name##_x = luaL_checknumber(L, arg++); \
  const lua_Number i_##name##_y = luaL_checknumber(L, arg++); \
  const ImVec2 name((double)i_##name##_x, (double)i_##name##_y);

#define OPTIONAL_IM_VEC_2_ARG(name, x, y) \
  lua_Number i_##name##_x = x; \
  lua_Number i_##name##_y = y; \
  if (arg <= max_args - 1) { \
    i_##name##_x = luaL_checknumber(L, arg++); \
    i_##name##_y = luaL_checknumber(L, arg++); \
  } \
  const ImVec2 name((double)i_##name##_x, (double)i_##name##_y);

#define NUMBER_ARG(name)\
  lua_Number name = luaL_checknumber(L, arg++);

#define OPTIONAL_NUMBER_ARG(name, otherwise)\
  lua_Number name = otherwise; \
  if (arg <= max_args) { \
    name = lua_tonumber(L, arg++); \
  }

#define FLOAT_POINTER_ARG(name) \
  float i_##name##_value = luaL_checknumber(L, arg++); \
  float* name = &(i_##name##_value);

#define END_FLOAT_POINTER(name) \
  if (name != NULL) { \
    lua_pushnumber(L, i_##name##_value); \
    stackval++; \
  }

#define OPTIONAL_INT_ARG(name, otherwise)\
  int name = otherwise; \
  if (arg <= max_args) { \
    name = (int)lua_tonumber(L, arg++); \
  }

#define INT_ARG(name) \
  const int name = (int)luaL_checknumber(L, arg++);

#define OPTIONAL_UINT_ARG(name, otherwise)\
  unsigned int name = otherwise; \
  if (arg <= max_args) { \
    name = (unsigned int)lua_tounsigned(L, arg++); \
  }

#define UINT_ARG(name) \
  const unsigned int name = (unsigned int)luaL_checkinteger(L, arg++);

#define INT_POINTER_ARG(name) \
  int i_##name##_value = (int)luaL_checkinteger(L, arg++); \
  int* name = &(i_##name##_value);

#define END_INT_POINTER(name) \
  if (name != NULL) { \
    lua_pushnumber(L, i_##name##_value); \
    stackval++; \
  }

#define UINT_POINTER_ARG(name) \
  unsigned int i_##name##_value = (unsigned int)luaL_checkinteger(L, arg++); \
  unsigned int* name = &(i_##name##_value);

#define END_UINT_POINTER(name) \
  if (name != NULL) { \
    lua_pushnumber(L, i_##name##_value); \
    stackval++; \
  }

#define BOOL_POINTER_ARG(name) \
  bool i_##name##_value = lua_toboolean(L, arg++); \
  bool* name = &(i_##name##_value);

#define OPTIONAL_BOOL_POINTER_ARG(name) \
  bool i_##name##_value; \
  bool* name = NULL; \
  if (arg <= max_args) { \
    i_##name##_value = lua_toboolean(L, arg++); \
    name = &(i_##name##_value); \
  }

#define OPTIONAL_BOOL_ARG(name, otherwise) \
  bool name = otherwise; \
  if (arg <= max_args) { \
    name = lua_toboolean(L, arg++); \
  }

#define BOOL_ARG(name) \
  bool name = lua_toboolean(L, arg++);

#define CALL_FUNCTION(name, retType,...) \
  retType ret = ImGui::name(__VA_ARGS__);

#define CALL_FUNCTION_NO_RET(name, ...) \
  ImGui::name(__VA_ARGS__);

#define PUSH_NUMBER(name) \
  lua_pushnumber(L, name); \
  stackval++;

#define PUSH_BOOL(name) \
  lua_pushboolean(L, (int) name); \
  stackval++;

#define END_BOOL_POINTER(name) \
  if (name != NULL) { \
    lua_pushboolean(L, (int)i_##name##_value); \
    stackval++; \
  }

#define END_IMGUI_FUNC \
  return stackval; \
}

#ifdef ENABLE_IM_LUA_END_STACK
#define IF_RET_ADD_END_STACK(type) \
  if (ret) { \
    AddToStack(type); \
  }

#define ADD_END_STACK(type) \
  AddToStack(type);

#define POP_END_STACK(type) \
  PopEndStack(type);

#define END_STACK_START \
static void ImEndStack(int type) { \
  switch(type) {

#define END_STACK_OPTION(type, function) \
    case type: \
      ImGui::function(); \
      break;

#define END_STACK_END \
  } \
}
#else
#define END_STACK_START
#define END_STACK_OPTION(type, function)
#define END_STACK_END
#define IF_RET_ADD_END_STACK(type)
#define ADD_END_STACK(type)
#define POP_END_STACK(type)
#endif

#include "imgui_iterator.cpp"


static const struct luaL_Reg imguilib [] = {
#undef IMGUI_FUNCTION
#define IMGUI_FUNCTION(name) {#name, impl_##name},
// These defines are just redefining everything to nothing so
// we can get the function names
#undef OPTIONAL_LABEL_ARG
#define OPTIONAL_LABEL_ARG(name)
#undef LABEL_ARG
#define LABEL_ARG(name)
#undef IM_VEC_2_ARG
#define IM_VEC_2_ARG(name)
#undef OPTIONAL_IM_VEC_2_ARG
#define OPTIONAL_IM_VEC_2_ARG(name, x, y)
#undef NUMBER_ARG
#define NUMBER_ARG(name)
#undef OPTIONAL_NUMBER_ARG
#define OPTIONAL_NUMBER_ARG(name, otherwise)
#undef FLOAT_POINTER_ARG
#define FLOAT_POINTER_ARG(name)
#undef END_FLOAT_POINTER
#define END_FLOAT_POINTER(name)
#undef OPTIONAL_INT_ARG
#define OPTIONAL_INT_ARG(name, otherwise)
#undef INT_ARG
#define INT_ARG(name)
#undef OPTIONAL_UINT_ARG
#define OPTIONAL_UINT_ARG(name, otherwise)
#undef UINT_ARG
#define UINT_ARG(name)
#undef INT_POINTER_ARG
#define INT_POINTER_ARG(name)
#undef END_INT_POINTER
#define END_INT_POINTER(name)
#undef UINT_POINTER_ARG
#define UINT_POINTER_ARG(name)
#undef END_UINT_POINTER
#define END_UINT_POINTER(name)
#undef BOOL_POINTER_ARG
#define BOOL_POINTER_ARG(name)
#undef OPTIONAL_BOOL_POINTER_ARG
#define OPTIONAL_BOOL_POINTER_ARG(name)
#undef OPTIONAL_BOOL_ARG
#define OPTIONAL_BOOL_ARG(name, otherwise)
#undef BOOL_ARG
#define BOOL_ARG(name)
#undef CALL_FUNCTION
#define CALL_FUNCTION(name, retType, ...)
#undef CALL_FUNCTION_NO_RET
#define CALL_FUNCTION_NO_RET(name, ...)
#undef PUSH_NUMBER
#define PUSH_NUMBER(name)
#undef PUSH_BOOL
#define PUSH_BOOL(name)
#undef END_BOOL_POINTER
#define END_BOOL_POINTER(name)
#undef END_IMGUI_FUNC
#define END_IMGUI_FUNC
#undef END_STACK_START
#define END_STACK_START
#undef END_STACK_OPTION
#define END_STACK_OPTION(type, function)
#undef END_STACK_END
#define END_STACK_END
#undef IF_RET_ADD_END_STACK
#define IF_RET_ADD_END_STACK(type)
#undef ADD_END_STACK
#define ADD_END_STACK(type)
#undef POP_END_STACK
#define POP_END_STACK(type)

#include "imgui_iterator.cpp"
  {"Button", impl_Button},
  {NULL, NULL}
};

void LoadImguiBindings() {
  if (!lState) {
    fprintf(stderr, "You didn't assign the global lState, either assign that or refactor LoadImguiBindings and RunString\n");
  }
  lua_newtable(lState);
  luaL_setfuncs(lState, imguilib, 0);
  lua_setglobal(lState, "imgui");

// Enums not handled by iterator yet
lua_pushnumber(lState, 1 << 0);
lua_setglobal(lState, "ImGuiWindowFlags_NoTitleBar"); // Disable title-bar
lua_pushnumber(lState, 1 << 1);
lua_setglobal(lState, "ImGuiWindowFlags_NoResize"); // Disable user resizing with the lower-right grip
lua_pushnumber(lState, 1 << 2);
lua_setglobal(lState, "ImGuiWindowFlags_NoMove"); // Disable user moving the window
lua_pushnumber(lState, 1 << 3);
lua_setglobal(lState, "ImGuiWindowFlags_NoScrollbar"); // Disable scrollbar (window can still scroll with mouse or programatically)
lua_pushnumber(lState, 1 << 4);
lua_setglobal(lState, "ImGuiWindowFlags_NoScrollWithMouse"); // Disable user scrolling with mouse wheel
lua_pushnumber(lState, 1 << 5);
lua_setglobal(lState, "ImGuiWindowFlags_NoCollapse"); // Disable user collapsing window by double-clicking on it
lua_pushnumber(lState, 1 << 6);
lua_setglobal(lState, "ImGuiWindowFlags_AlwaysAutoResize"); // Resize every window to its content every frame
lua_pushnumber(lState, 1 << 7);
lua_setglobal(lState, "ImGuiWindowFlags_ShowBorders"); // Show borders around windows and items
lua_pushnumber(lState, 1 << 8);
lua_setglobal(lState, "ImGuiWindowFlags_NoSavedSettings"); // Never load/save settings in .ini file
lua_pushnumber(lState, 1 << 9);
lua_setglobal(lState, "ImGuiWindowFlags_NoInputs"); // Disable catching mouse or keyboard inputs
lua_pushnumber(lState, 1 << 1);
lua_setglobal(lState, "ImGuiWindowFlags_MenuBar"); // Has a menu-bar

lua_pushnumber(lState, 1 << 0);
lua_setglobal(lState, "ImGuiSetCond_Always"); // Set the variable
lua_pushnumber(lState, 1 << 1);
lua_setglobal(lState, "ImGuiSetCond_Once"); // Only set the variable on the first call per runtime session
lua_pushnumber(lState, 1 << 2);
lua_setglobal(lState, "ImGuiSetCond_FirstUseEver"); // Only set the variable if the window doesn't exist in the .ini file
lua_pushnumber(lState, 1 << 3);
lua_setglobal(lState, "ImGuiSetCond_Appearing"); // Only set the variable if the window is appearing after being inactive (or the first time)

}
