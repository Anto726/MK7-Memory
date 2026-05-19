#pragma once

#include "base.hpp"

#include "../Entry/EnemyPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataEnemyPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataEnemyPoint, MapdataEnemyPoint::SData>/BSIZE@0x18/
    /END/

    inline auto GetEnemyPointAccessor()
    {
        return GetDirector()->m_course_info->m_enemy_point_accessor;
    }
}