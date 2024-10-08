#pragma once

#include <math/seadVector.h>

namespace Field
{
    class MapdataItemPoint
    {
    public:
        struct SData
        {
            sead::Vector3f position;
            u8 gap_0xC[0x8];
        };
        static_assert(sizeof(SData) == 0x14);

        SData *m_data;
        u8 gap_0x4[0x2C];
    };
    static_assert(sizeof(MapdataItemPoint) == 0x30);
}