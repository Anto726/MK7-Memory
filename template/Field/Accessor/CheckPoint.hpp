#pragma once

#include "base.hpp"

#include "../Entry/CheckPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCheckPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataCheckPoint, MapdataCheckPoint::SData>/BSIZE@0x18/
    /END/

    inline auto GetCheckPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_check_point_accessor;
    }
}