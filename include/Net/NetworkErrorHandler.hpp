#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkErrorHandler
    {
    public:
        u8 gap_0x0[0x38];
        u32 m_error_code;
        u8 gap_0x3C[4];
    };
    static_assert(sizeof(NetworkErrorHandler) == 0x40);
}