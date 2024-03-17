#pragma once

#include "../types.hpp"

namespace Net
{
    struct NetworkReceivedInfo
    {
        void *data;
        size_t size;
        s32 player_id;
    };
    static_assert(sizeof(NetworkReceivedInfo) == 0xC);
}