#pragma once

#include "NetworkPlayerData.hpp"

#define PLAYER_MAX 10

namespace Net
{
    class NetworkPlayerDataManager
    {
    public:
        u8 gap_0x0[0x690];
        NetworkPlayerData m_network_player_datas_connected[PLAYER_MAX];
        u8 gap_0xD20[0xE0];
    };
    static_assert(sizeof(NetworkPlayerDataManager) == 0xE00);
}