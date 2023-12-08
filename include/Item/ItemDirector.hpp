#pragma once

#include "../forward.hpp"

namespace Item
{
    class ItemDirector
    {
    public:
        u8 gap_0x0[240];
        RaceSys::ModeManagerBase *m_mode_manager_base;
    };
    static_assert(sizeof(ItemDirector) == 0xF4);
}