#pragma once

#include "../types.hpp"

namespace RaceSys
{
    class ModeManagerBase
    {
    public:
        enum class ERaceState : u8
        {
            Race = 2,
        };

    public:
        u8 m_0x0[72];
        ERaceState m_race_state;
    };
    static_assert(sizeof(ModeManagerBase) == 0x49);
}