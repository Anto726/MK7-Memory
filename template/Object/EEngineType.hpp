#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Object)
{
    enum class EEngineType : u32
    {
        Character,
        Camera,
        Render,
        System,
        Sequence,
        Mii,
        Sound,
        Network,
        Effect,
        _9,
        MAX
    };
}