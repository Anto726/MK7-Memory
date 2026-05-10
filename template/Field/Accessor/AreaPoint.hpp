#pragma once

#include "Base.hpp"

#include "../Entry/AreaPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataAreaAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataAreaPoint, MapdataAreaPointData>/BSIZE@0x18/
    /END/

    inline auto GetAreaAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_area_accessor;
    }
}