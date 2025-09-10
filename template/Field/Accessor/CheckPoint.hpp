#pragma once

#include "Base.hpp"

#include "../Entry/CheckPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataCheckPointAccessor : public MapdataAccessorBase<MapdataCheckPoint, MapdataCheckPoint::SData> {};
    static_assert(sizeof(MapdataCheckPointAccessor) == 0x18);

    static auto GetCheckPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_check_point_accessor;
    }
}