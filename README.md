#These are imgui bindings for lua.#

ImGui https://github.com/ocornut/imgui

It supports a lot of common imgui operations except for initializing imgui.

Supported functions: 203 Unsupported functions 75 for 1.47 (WIP)

##How to call these imgui bindings from lua##

It mostly is the same as calling from C++ except for dealing with pointers and ImVecs

Function definition in C++
```c++
    IMGUI_API bool          RadioButton(const char* label, bool active);
```
How to call function in lua

```lua
ret = imgui.RadioButton("String goes here", isActive)
```

##Pointers:##

Lua doesn't have pointers but it has multiple return values
so instead of giving it a pointer, you give it a value and it will pass
back the new value.

Function definition in C++
```c++
    IMGUI_API void          ShowTestWindow(bool* opened = NULL);
```
How to call function in lua
```lua
opened = imgui.ShowTestWindow(opened)
```
This can make some functions a bit weird. For example Begin.

Function definition in C++
```c++
    IMGUI_API bool          Begin(const char* name, bool* p_opened = NULL, ImGuiWindowFlags flags = 0);
```

How to call function in lua (Note: optional arguments still work)
```lua
shoulddraw, p_opened = imgui.Begin("Name", p_opened)
```


Begin normally returns whether it's desirable to draw or not as well as setting the value
of p_opened to whether the window is open or not. Still use the first return value to decide to whether to call the ImGui functions for that window and imgui.End().


##ImVecs:##

Currently only ImVec2s are supported (it's not too hard to fix, take a look at the .pl file).

Those are arguments are expanded to two variables instead of one object.

Function definition in C++
```c+++
    IMGUI_API void          SetNextWindowPos(const ImVec2& pos, ImGuiSetCond cond = 0);
```

How to call function in lua
```lua
imgui.SetNextWindowPos(100, 50)
```


##How to build:##

Generate iterator file (or use the one for 1.47 WIP already in the repo)
```
./generate_imgui_bindings.pl <../imgui/imgui.h >imgui_iterator.cpp
```

This creates a file with info about imgui functions from the imgui.h file.

Then copy the macro definitions in imgui_lua_bindings.cpp and include imgui_iterator.cpp in that the cpp file. This will generate static int impl_FunctionName(lua_State*L) {} functions for each imgui function. Bind these to lua functions and your good to go. (Check out imgui_lua_bindings.cpp for a full example)

The imgui_lua_bindings.cpp has two functions RunString and LoadImguiBindings

To use the functions there first assign the global lState to a valid lua_State, then call LoadImguiBindings then run as many strings as you want.

##What is ENABLE_IM_LUA_END_STACK?##

I made something to keep track of the imgui begin stack so that I could continue using
imGui functions if an error ocurred in the lua script. If you don't care about that
don't define ENABLE_IM_LUA_END_STACK. I'm using a std::deque of ints to store what the last
begin calls were and then if the script errors I unwrap them with ends so that imgui won't
complain when I render.

##License?##
I don't feel like writing a license so here's it in laymans terms...

You can use this code for whatever just don't redistribute the exact same source code and try to sell it, or claim that the source code was made by you.
You can compile this source code and sell it. You can change this source code and sell the modified version.
You can include this source code in whatever open source project. You can include it in whatever closed source project.

Just be chill and if you make a billion dollars send me an email or something.
