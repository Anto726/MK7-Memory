#pragma once

#include "../forward.hpp"

#include "../Util/JmpResource.hpp"

namespace Field
{
    class JmpResourceCourse : public Util::JmpResource
    {
    public:
        MapdataStartPointAccessor *m_start_point_accessor;
        MapdataEnemyPointAccessor *m_enemy_point_accessor;
        MapdataEnemyPathAccessor *m_enemy_path_accessor;
        MapdataItemPointAccessor *m_item_point_accessor;
        MapdataItemPathAccessor *m_item_path_accessor;
        MapdataCheckPointAccessor *m_check_point_accessor;
        MapdataCheckPathAccessor *m_check_path_accessor;
        MapdataGeoObjAccessor *m_geo_obj_accessor;
        MapdataPathAccessor *m_path_accessor;
        MapdataAreaAccessor *m_area_accessor;
        MapdataCameraAccessor *m_camera_accessor;
        MapdataJugemPointAccessor *m_jugem_point_accessor;
        MapdataCannonPointAccessor *m_cannon_point_accessor;
        MapdataMissionPointAccessor *m_mission_point_accessor;
        MapdataStageAccessor *m_stage_accessor;
        MapdataCourseAccessor *m_course_accessor;
        MapdataGlidePointAccessor *m_glide_point_accessor;
        MapdataGlidePathAccessor *m_glide_path_accessor;
    };
    static_assert(sizeof(JmpResourceCourse) == 0x58);
}