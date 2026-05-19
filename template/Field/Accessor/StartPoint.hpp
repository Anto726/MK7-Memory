#pragma once

#include "base.hpp"

#include "../Entry/StartPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataStartPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataStartPoint, MapdataStartPoint::SData>/BSIZE@0x18/
    /END/

    inline auto GetStartPointAccessor()
    {
        return GetDirector()->m_course_info->m_start_point_accessor;
    }
}