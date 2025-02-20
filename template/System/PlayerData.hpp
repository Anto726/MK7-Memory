#pragma once

#include "PlayerDataNoMii.hpp"

#include "../CFLStoreData.hpp"

namespace System
{
    class PlayerData : public PlayerDataNoMii
    {
    public:
        CFLStoreData m_store_data;
        bool m_loaded;
    };
    static_assert(sizeof(PlayerData) == 0xA0);
}