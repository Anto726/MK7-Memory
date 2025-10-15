#pragma once

#include "Base.hpp"

#include "../Entry/AreaPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataAreaAccessor : public MapdataAccessorBase<MapdataAreaPoint, MapdataAreaPoint::SData> {};
    static_assert(sizeof(MapdataAreaAccessor) == 0x18);

    static auto GetAreaAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_area_accessor;
    }
}