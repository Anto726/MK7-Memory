#pragma once

#include "Base.hpp"

#include "../Entry/StartPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataStartPointAccessor : public MapdataAccessorBase<MapdataStartPoint, MapdataStartPoint::SData> {};
    static_assert(sizeof(MapdataStartPointAccessor) == 0x18);

    inline auto GetStartPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_start_point_accessor;
    }
}