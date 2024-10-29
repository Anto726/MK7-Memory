#pragma once

#include "../forward.hpp"
#include "../types.hpp"

namespace Sequence
{
    class SequenceEngine
    {
    public:
        u8 gap_0x0[0xD8];
        UI::MessageIDConverter *m_message_id_converter;
        u8 gap_0xDC[0x4];
    };
    static_assert(sizeof(SequenceEngine) == 0xE0);
}