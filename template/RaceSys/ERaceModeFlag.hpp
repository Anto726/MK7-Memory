#pragma once

#include "../types.hpp"
#include "../versions.h"

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
#if ALL_V11 || ALL_V12
            // --- Added in v1.1 ---
            // If set, the game will load the KMP for the following courses
            // from the `Patch/Course` directory inside the game's (or patch's) filesystem:
            // (Wuhu Loop / Maka Wuhu / DK Jungle / GBA Bowser Castle 1)
            // Only used in online mode
            course_has_patch : 1,
            // --- Added in v1.1 ---
            // If set, the game will disable the "ghost checkpoints" bug,
            // fixing several respawn glitches.
            // Only used in online VS races
            disable_ghost_checkpoints : 1;
#endif
    };
    static_assert(sizeof(ERaceModeFlag) == 0x4);
}