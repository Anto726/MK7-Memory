#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class ERaceEvent : u32
    {
        COUNTDOWN,
        RACE,
        PAUSE_IN,
        PAUSE_OUT,
        GOAL,

        RACE_EVENT_MAX
    };
}