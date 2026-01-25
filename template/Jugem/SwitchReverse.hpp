#pragma once

#include "Switch.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class SwitchReverse : public Switch
    {
    public:
        float field_10;
        RaceSys::LapRankChecker *m_lap_rank_checker;
    };
    static_assert(sizeof(SwitchReverse) == 0x18);
}