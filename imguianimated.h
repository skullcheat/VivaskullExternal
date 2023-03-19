#pragma once

#include "render/imgui.h"
#include "render/imgui_internal.h"

namespace ImGui
{
    IMGUI_API bool Toggle(const char* label, bool* v);

    IMGUI_API bool ButtonScrollableEx(const char* label, const ImVec2& size_arg = ImVec2(0, 0), ImGuiButtonFlags flags = 0);
    IMGUI_API bool ButtonScrollable(const char* label, const ImVec2& size_arg = ImVec2(0, 0));
}