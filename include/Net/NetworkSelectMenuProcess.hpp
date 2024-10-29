#pragma once

#include "../types.hpp"

namespace Net
{
    class NetworkSelectMenuProcess
    {
    public:
        u8 gap_0x0[0x6B];
        u8 m_selected_course_vote_index;
        u8 gap_0x6C[0x4];
        u8 m_selected_random_course_id;
        u8 gap_0x71[0x5C3];
    };
    static_assert(sizeof(NetworkSelectMenuProcess) == 0x634);
}