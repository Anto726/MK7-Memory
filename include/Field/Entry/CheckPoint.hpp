#pragma once

#include <math/seadVector.h>

namespace Field
{
    class MapdataCheckPoint
    {
    public:
        struct SData
        {
            sead::Vector2f m_sector_left;
            sead::Vector2f m_sector_right;
            u8 gap_0x10[0x8];
        };
        static_assert(sizeof(SData) == 0x18);

        SData *m_data;
        u8 gap_0x4[0xCC];
    };
    static_assert(sizeof(MapdataCheckPoint) == 0xD0);
}