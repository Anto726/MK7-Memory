#pragma once
#include "../fwddec.hpp"

namespace RaceSys
{
    class RaceDirector
    {
    public:
        u8 m_0x0[444];
        RaceSys::ModeManagerBase *m_mode_manager_base;
    };
    static_assert(sizeof(RaceDirector) == 0x1C0);
}