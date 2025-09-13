#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Net)
{
    enum class eNetworkBufferType : u8
    {
        SystemInfo,             // S:0xA0
        SelectMenu,             // S:0xA0
        GameData,               // S:0x30
        KartData,               // S:0x230
        ItemSlot,               // S:0x24
        ItemEvent,              // S:0x200
        Wbt,                    // S:0x384
        Friend,                 // S:0x264
        GameEvent,              // S:0x40
        Mii,                    // S:0xC0
        NetworkSupplyInfo,      // S:0x64
        Container,              // S:0xD2C
    };
}