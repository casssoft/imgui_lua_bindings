These are imgui bindings for lua.

It supports a lot of common imgui operations except for initializing imgui.


How to call these imgui bindings from lua

It mostly is the same as calling from C++ except for dealing with pointers and ImVecs

Function definition in C++
    IMGUI_API bool          RadioButton(const char* label, bool active);

How to call function in lua
ret = imgui.RadioButton("String goes here", isActive)


Pointers:

Lua doesn't have pointers but it has multiple return values
so instead of giving it a pointer, you give it a value and it will pass
back the new value.

Function definition in C++
    IMGUI_API void          ShowTestWindow(bool* opened = NULL);

How to call function in lua
opened = imgui.ShowTestWindow(opened)

This can make some functions weird. For example Begin.

Function definition in C++

    IMGUI_API bool          Begin(const char* name, bool* p_opened = NULL, ImGuiWindowFlags flags = 0);

How to call function in lua (Note: optional arguments still work)

isOpen, p_opened = imgui.Begin("Name", p_opened)

OR

p_opened = imgui.Begin("Name", p_opened)

As you can see Begin normally returns whether it's open or not as well as setting the value
of p_opened. In these lua bindings Begin returns two values which end up being the same (only if its passed a bool as a second argument)


ImVecs:

Currently only ImVec2s are supported (it's not too hard to fix, take a look at the .pl file).

Those are arguments are expanded to two variables instead of one object.

Function definition in C++
    IMGUI_API void          SetNextWindowPos(const ImVec2& pos, ImGuiSetCond cond = 0);

How to call function in lua

imgui.SetNextWindowPos(100, 50)



How to build:

Generate iterator file (or use the one for 1.47 WIP already in the repo)

./generate_imgui_bindings.pl <../imgui/imgui.h >imgui_iterator.cpp

This creates a file with info about imgui functions from the imgui.h file.

Then copy the macro definitions in imgui_lua_bindings.cpp and include imgui_iterator.cpp in that the cpp file. This will generate static int impl_FunctionName(lua_State*L) {} functions for each imgui function. Bind these to lua functions and your good to go. (Check out imgui_lua_bindings.cpp for a full example)



What is ENABLE_IM_LUA_END_STACK?

I made something to keep track of the imgui begin stack so that I could continue using
imGui functions if an error ocurred in the lua script. If you don't care about that
don't define ENABLE_IM_LUA_END_STACK. I'm using a std::deque of ints to store what the last
begin calls were and then if the script errors I unwrap them with ends so that imgui won't
complain when I render.

