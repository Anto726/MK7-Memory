#pragma once

#include "../types.hpp"
#include "../versions.h"

#if GAME_VERSION == VERSION_E3_2010

BEGIN_NAMESPACE(Debug)
{
    // 0x001b3608
    void PrintTextToTopScreenWChar(s32 pos_x, s32 pos_y, const char16_t *string, ...);
    // 0x001fb3b0
    void PrintTextToBottomScreenWChar(s32 pos_x, s32 pos_y, const char16_t *string, ...);
    // 0x001fb340
    void PrintTextToBottomScreenChar(s32 pos_x, s32 pos_y, const char *string, ...);
}

#endif
