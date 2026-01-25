#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Jugem)
{
    // NOTE: guessed symbol
    enum class eSwitchType : u32
    {
        CountDown,
        Lap,
        Lift,
        Reverse,
        Goal,
    };
}