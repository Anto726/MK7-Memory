#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
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