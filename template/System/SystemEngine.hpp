#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    class SystemEngine
    {
    public:
        u8 gap_0x0[0x40];
        GameSetting *m_game_setting;
        u8 gap_0x44[0xB8];
    };
    static_assert(sizeof(SystemEngine) == 0xFC);
}