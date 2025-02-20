#pragma once

#include "BaseRacePage.hpp"

namespace Sequence
{
    class RacePage : public BaseRacePage
    {
    public:
        u8 gap_0x31FC[0x124];
    };
    static_assert(sizeof(RacePage) == 0x3320);
}