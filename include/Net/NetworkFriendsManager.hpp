#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkFriendsManager
    {
    public:
        u8 gap_0x0[0xA314];
        u32 m_my_principal_id;
        u8 gap_0xA318[0x4E8];
    };
    static_assert(sizeof(NetworkFriendsManager) == 0xA800);
}