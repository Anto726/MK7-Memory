#pragma once

#include "base.hpp"

#include "../Entry/CannonPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCannonPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataCannonPoint, MapdataCannonPoint::SData>/BSIZE@0x18/
    /END/

    // NOTE: guessed name
    inline auto GetCannonPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_cannon_point_accessor;
    }
}