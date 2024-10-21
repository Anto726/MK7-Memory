#pragma once

#include "../types.hpp"

namespace Object
{
    enum class EEngineType : u32
    {
        Character,
        Camera,
        Render,
        System,
        MAX
    };
}