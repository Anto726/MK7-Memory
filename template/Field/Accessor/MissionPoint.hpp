#pragma once

#include "base.hpp"

#include "../Entry/MissionPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataMissionPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataMissionPoint, MapdataMissionPoint::SData>/BSIZE@0x18/
    /END/

    // NOTE: guessed name
    inline auto GetMissionPointAccessor()
    {
        return GetDirector()->m_course_info->m_mission_point_accessor;
    }
}