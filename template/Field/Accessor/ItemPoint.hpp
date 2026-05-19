#pragma once

#include "base.hpp"

#include "../Entry/ItemPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataItemPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataItemPoint, MapdataItemPoint::SData>/BSIZE@0x18/
    /END/

    inline auto GetItemPointAccessor()
    {
        return GetDirector()->m_course_info->m_item_point_accessor;
    }
}