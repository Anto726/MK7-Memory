#pragma once

#include <math/seadVector.h>

namespace System
{
    class GameSetting
    {
    public:
        u8 gap_0x0[0xA];
        u8 m_region_id;
        u8 gap_0xB[0x1001];
        sead::Vector2<u16> m_globe_position;
        u16 m_country_id;
        u8 gap_0x1012[0x3E];
    };
    static_assert(sizeof(GameSetting) == 0x1050);
}