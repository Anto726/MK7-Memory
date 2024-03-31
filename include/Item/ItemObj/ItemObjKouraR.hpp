#pragma once

#include "ItemObjKouraG.hpp"

namespace Item
{
    class ItemObjKouraR : public ItemObjKouraG
    {
    public:
        u8 gap_0x23C[0x4C];
        RaceSys::LapRankChecker *m_lap_rank_checker;
        u8 gap_0x28C[0x38];
    };
    static_assert(sizeof(ItemObjKouraR) == 0x2C4);
}