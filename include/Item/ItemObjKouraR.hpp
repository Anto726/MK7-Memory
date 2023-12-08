#pragma once

#include "../forward.hpp"

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjKouraR : public ItemObjBase
    {
    public:
        u8 gap_0x1F8[144];
        RaceSys::LapRankChecker *m_lap_rank_checker;
    };
    static_assert(sizeof(ItemObjKouraR) == 0x28C);
}