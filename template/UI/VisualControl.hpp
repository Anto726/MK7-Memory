#pragma once

#include "Control.hpp"

namespace UI
{
    class VisualControl : public Control
    {
    public:
        u8 gap_0x64[0x14];
    };
    static_assert(sizeof(VisualControl) == 0x78);
}