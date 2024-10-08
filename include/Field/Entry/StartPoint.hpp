#pragma once

#include <math/seadVector.h>

namespace Field
{
    class MapdataStartPoint
    {
    public:
        struct SData
        {
            sead::Vector3f position;
            u8 gap_0xC[0x10];
        };
        static_assert(sizeof(SData) == 0x1C);

        SData *m_data;
        u8 gap_0x4[0x28];
    };
    static_assert(sizeof(MapdataStartPoint) == 0x2C);
}