#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class ERacePlayMode : u32
    {
        SinglePlayer,
        MultiPlayer,
        Online,
        TitleDemo,
        Replay,
        MAX,
    };
}