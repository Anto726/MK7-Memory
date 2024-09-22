#pragma once

#include "../forward.hpp"

namespace RaceSys
{
    class RaceDirector
    {
    public:
        u8 gap_0x0[0x1BC];
        ModeManagerBase *m_mode_manager;
    };
    static_assert(sizeof(RaceDirector) == 0x1C0);
}