#pragma once

#include "base.hpp"

#include "../Entry/Path.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataPathAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataPath, MapdataPath::SData>/BSIZE@0x18/
    /END/

    inline auto GetPathAccessor()
    {
        return GetDirector()->m_course_info->m_path_accessor;
    }
}