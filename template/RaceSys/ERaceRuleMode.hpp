#pragma once

#include "../types.hpp"

namespace RaceSys
{
    enum class ERaceRuleMode : u32
    {
        GrandPrix,
        TimeTrials,
        Versus,
        Battle_3,
        Battle_7 = 7,
    };
}