#pragma once

#include "../RaceSys/ECourseID.hpp"

#include <container/seadPtrArray.h>

namespace Sequence
{
    class MenuData
    {
    public:
        struct CourseVote
        {
            u8 gap_0x0[0x4];
            RaceSys::ECourseID course_id;
        };
        static_assert(sizeof(CourseVote) == 0x8);

        u8 gap_0x0[0x30];
        BaseRacePage *m_base_race_page;
        u8 gap_0x34[0x6F8];
        sead::PtrArray<CourseVote> m_course_votes;
        u8 gap_0x738[0x240];
    };
    static_assert(sizeof(MenuData) == 0x978);
}