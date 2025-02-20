#pragma once

#include "VisualControl.hpp"

namespace UI
{
    class TimeControl : public VisualControl
    {
    public:
        u8 gap_0x78[0x24];
    };
    static_assert(sizeof(TimeControl) == 0x9C);
}