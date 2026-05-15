#pragma once

#include "base.hpp"

#include "../Entry/EnemyPath.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataEnemyPathAccessor/SIZE@0x20/BASE@MapdataAccessorBase<MapdataEnemyPath, MapdataEnemyPath::SData>/BSIZE@0x18/
        /M/MapdataEnemyPointAccessor *m_enemy_point_accessor/0x4/0x18/
        /U/s32/0x4/0x1C/
    /END/

    inline auto GetEnemyPathAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_enemy_path_accessor;
    }
}