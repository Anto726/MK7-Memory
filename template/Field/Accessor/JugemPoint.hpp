#pragma once

#include "Base.hpp"

#include "../Entry/JugemPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataJugemPointAccessor : public MapdataAccessorBase<MapdataJugemPoint, MapdataJugemPoint::SData> {};
    static_assert(sizeof(MapdataJugemPointAccessor) == 0x18);

    inline auto GetJugemPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_jugem_point_accessor;
    }
}