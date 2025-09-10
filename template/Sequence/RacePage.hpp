#pragma once

#include "../types.hpp"
#include "BaseRacePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    class RacePage : public BaseRacePage
    {
    public:
        u8 gap_0x31FC[0x124];
    };
    static_assert(sizeof(RacePage) == 0x3320);
}