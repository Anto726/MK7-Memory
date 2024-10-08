#pragma once

#include "../Object/ActorEngine.hpp"

namespace Field
{
    class FieldDirector : public Object::ActorEngine
    {
    public:
        u8 gap_0x8[0x30];
        CourseInfo *m_course_info;
        u8 gap_0x3C[0x270];
    };
    static_assert(sizeof(FieldDirector) == 0x2AC);
}