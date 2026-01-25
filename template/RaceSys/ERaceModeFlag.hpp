#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    struct ERaceModeFlag
    {
        u32
            race : 1,
            race_or_battle : 1,
            race_or_course_preview : 1,
            multiplayer_or_online : 1,
            replay_grand_prix : 1,
            time_trials : 1,
            live_view : 1,
            course_has_patch : 1, // v1.1+ (Wuhu Loop / Maka Wuhu / DK Jungle / GBA Bowser Castle 1)
            not_battle : 1;
    };
    static_assert(sizeof(ERaceModeFlag) == 0x4);
}