#pragma once

#include "eNetworkBufferType.hpp"

namespace Net
{
    class NetworkBuffer
    {
    public:
        eNetworkBufferType m_type;
        u8 *m_data;
        size_t m_size;
        size_t m_offset;
    };
    static_assert(sizeof(NetworkBuffer) == 0x10);
}