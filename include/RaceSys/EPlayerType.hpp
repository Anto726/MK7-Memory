#pragma once

#include "../types.hpp"

namespace RaceSys
{
    enum class EPlayerType : u32
    {
        Master,
        CPU,
        User,
        Ghost,
        _4,
        MAX,
        INVALID,
    };
}