#pragma once

#include "../types.hpp"

#include "PlayerFlagSaveData.hpp"

BEGIN_NAMESPACE(System)
{
    struct SystemSaveData
    {
        u8 gap_0x0[0x48D0];
        PlayerFlagSaveData m_player_flag_save_data;
    };
    static_assert(sizeof(SystemSaveData) == 0x50D0);
}