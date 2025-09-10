#pragma once

#include "../types.hpp"
#include "NetworkPlayerData.hpp"

#define PLAYER_MAX 10

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkPlayerDataManager/SIZE@0xE00/
    public:
        /M/NetworkPlayerData m_network_player_datas_connected[PLAYER_MAX]/0x690/0x690/
    /END/
}