#pragma once

extern "C" {
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"
}

PUTILS_IMGUI_LUA_BINDINGS_EXPORT extern lua_State* lState;
PUTILS_IMGUI_LUA_BINDINGS_EXPORT void LoadImguiBindings();