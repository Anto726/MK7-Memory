#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class ERaceRuleMode : u32
    {
        GrandPrix,
        TimeTrials,
        Versus,
        Battle,
        Award,
        CoursePreview,
        DemoGrandPrix,
        DemoBattle,
        _8,
        MAX,
    };
}