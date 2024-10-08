#pragma once

#include "JmpResourceCourse.hpp"

namespace Field
{
    class CourseInfo : public JmpResourceCourse
    {
    public:
        u8 field_58;
    };
    static_assert(sizeof(CourseInfo) == 0x5C);
}