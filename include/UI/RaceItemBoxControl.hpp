#pragma once

#include "../types.hpp"

namespace UI
{
    class RaceItemBoxControl
    {
    public:
        enum Animation : s32
        {
            Animation_None,
            Animation_Receive,
            Animation_Use,
        };
    };
    static_assert(sizeof(RaceItemBoxControl) == 0x1);
}