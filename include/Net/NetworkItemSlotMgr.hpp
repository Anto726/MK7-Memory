#pragma once

namespace Net
{
    class NetworkItemSlotMgr
    {
    public:
        struct Buffer
        {
        };
        static_assert(sizeof(Buffer) == 0x1);
    };
    static_assert(sizeof(NetworkItemSlotMgr) == 0x1);
}