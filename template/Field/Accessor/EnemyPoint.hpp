#pragma once

#include "Base.hpp"

#include "../Entry/EnemyPoint.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataEnemyPointAccessor : public MapdataAccessorBase<MapdataEnemyPoint, MapdataEnemyPoint::SData> {};
    static_assert(sizeof(MapdataEnemyPointAccessor) == 0x18);

    static auto GetEnemyPointAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_enemy_point_accessor;
    }
}