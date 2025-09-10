#pragma once

#include "Base.hpp"

#include "../Entry/ItemPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataItemPointAccessor : public MapdataAccessorBase<MapdataItemPoint, MapdataItemPoint::SData> {};
    static_assert(sizeof(MapdataItemPointAccessor) == 0x18);

    static auto GetItemPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_item_point_accessor;
    }
}