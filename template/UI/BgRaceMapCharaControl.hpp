#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    class BgRaceMapCharaControl
    {
    public:
        u8 gap_0x0[0xA2];
        bool m_killer_facing;
        u8 gap_0xA3[0x41];
    };
    static_assert(sizeof(BgRaceMapCharaControl) == 0xE4);
}