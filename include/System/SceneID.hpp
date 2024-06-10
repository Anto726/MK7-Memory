#pragma once

#include "../types.hpp"

#include <limits>
#include <type_traits>

namespace System
{
    enum class SceneID : u8
    {
        INVALID = std::numeric_limits<std::underlying_type_t<SceneID>>::max(),
    };
}