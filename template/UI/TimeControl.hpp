#pragma once

#include "../types.hpp"

#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    class TimeControl : public VisualControl
    {
    public:
        u8 gap_0x78[0x24];
    };
    static_assert(sizeof(TimeControl) == 0x9C);
}