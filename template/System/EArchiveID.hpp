#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    enum class EArchiveID : u32
    {
        COMMON,                     // Common.szs
        RACE_COMMON,                // RaceCommon.szs
        COURSE,                     // Course directory
        UI_COMMON,                  // UI/common.szs
        UI_RACE,                    // UI/race.szs
        UI_MENU,                    // UI/menu.szs
        MENU_3D,                    // Menu3D.szs
        UI_TROPHY,                  // UI/trophy.szs
        UI_ENDING_AND_THANKYOU,     // UI/ending.szs and UI/thankyou.szs
        THANKYOU_3D,                // Thankyou3D.szs
        ARCHIVE_0xA,
        ROMFS_ROOT
    };
}