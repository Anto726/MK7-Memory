#pragma once

#include "../System/PlayerData.hpp"

namespace Net
{
    class NetworkPlayerData : public System::PlayerData
    {
    public:
        u32 m_0xA0;
        bool m_created;
    };
    static_assert(sizeof(NetworkPlayerData) == 0xA8);
}