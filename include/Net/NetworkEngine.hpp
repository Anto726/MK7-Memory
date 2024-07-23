#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkEngine
    {
    public:
        u8 gap_0x0[0x290];
        NetworkErrorHandler *m_network_error_handler;
        u8 gap_0x294[0x304];
    };
    static_assert(sizeof(NetworkEngine) == 0x598);
}