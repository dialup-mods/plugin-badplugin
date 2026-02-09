#include "BadPlugin.h"

extern "C" __declspec(dllexport) void*
create() {
    printf("load() called\n");
    return new BadPlugin();
}

extern "C" __declspec(dllexport) void
destroy() {}