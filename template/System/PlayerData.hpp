#pragma once

#include "../types.hpp"

#include "PlayerDataNoMii.hpp"

#include <3ds/services/act.h>

BEGIN_NAMESPACE(System)
{
    class PlayerData : public PlayerDataNoMii
    {
    public:
        CFLStoreData m_store_data;
        bool m_loaded;
    };
    static_assert(sizeof(PlayerData) == 0xA0);
}