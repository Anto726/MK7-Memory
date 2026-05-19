#pragma once

#include "base.hpp"

#include "../Entry/CannonPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCannonPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataCannonPoint, MapdataCannonPoint::SData>/BSIZE@0x18/
    /END/

    // NOTE: guessed name
    inline auto GetCannonPointAccessor()
    {
        return GetDirector()->m_course_info->m_cannon_point_accessor;
    }
}