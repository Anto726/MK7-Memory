#pragma once

#include "FlagData.hpp"

namespace System
{
    struct PlayerFlagSaveData
    {
        FlagData m_flag_data;
        u8 gap_0x5F4[0x20C];
    };
    static_assert(sizeof(PlayerFlagSaveData) == 0x800);
}