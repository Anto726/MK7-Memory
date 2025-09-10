#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Sequence)
{
    class SequenceEngine
    {
    public:
        u8 gap_0x0[0xC0];
        MenuData *m_menu_data;
        u8 gap_0xC4[0x14];
        UI::MessageIDConverter *m_message_id_converter;
        u8 gap_0xDC[0x4];
    };
    static_assert(sizeof(SequenceEngine) == 0xE0);
}