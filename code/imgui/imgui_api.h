#ifndef IMGUI_API_H
#define IMGUI_API_H

#include "../ccall.h"

CCALL void imgui_init();
CCALL void imgui_render();
CCALL void imgui_frame_start();
CCALL void imgui_frame_end();

#endif
