#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkEventModule
    {
    public:
        struct Slot
        {
            u8 gap_0x0[0x4];
            u32 frame;
            u8 gap_0x8[0x1C];
        };
        static_assert(sizeof(Slot) == 0x24);
    };
    static_assert(sizeof(NetworkEventModule) == 0x1);
}