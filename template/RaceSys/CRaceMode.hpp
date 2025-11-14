#pragma once

#include "../types.hpp"

#include "ERacePlayMode.hpp"
#include "ERaceRuleMode.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@CRaceMode/SIZE@0xC/
    public:
        // unknown name
        enum class RaceType : s32
        {
            Coin,
            Balloon,
            Race,
        };

        /M/ERacePlayMode m_play_mode/0x4/0x0/
        /M/ERaceRuleMode m_rule_mode/0x4/0x4/
        /M/RaceType m_type/0x4/0x8/
    /END/
}