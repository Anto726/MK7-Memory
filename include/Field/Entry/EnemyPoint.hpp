#pragma once

#include <math/seadVector.h>

namespace Field
{
    class MapdataEnemyPoint
    {
    public:
        struct SData
        {
            sead::Vector3f position;
            u8 gap_0xC[0xC];
        };
        static_assert(sizeof(SData) == 0x18);

        SData *m_data;
        u8 gap_0x4[0x50];
    };
    static_assert(sizeof(MapdataEnemyPoint) == 0x54);
}