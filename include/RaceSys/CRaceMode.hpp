#pragma once

#include "ERaceRuleMode.hpp"

namespace RaceSys
{
    class CRaceMode
    {
    public:
        u8 gap_0x0[0x4];
        ERaceRuleMode m_race_rule_mode;
        u8 gap_0x8[0x4];
    };
    static_assert(sizeof(CRaceMode) == 0xC);
}