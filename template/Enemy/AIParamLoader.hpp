#pragma once

#include "../forward.hpp"

#include "EAILevel.hpp"

BEGIN_NAMESPACE(Enemy)
{
    // Note: the name of this struct is partially made up.
    /START_STRUCT/NAME@EnemyCourseParam/SIZE@0xC/
	public:
		/M/f32 m_offset_speed/0x4/0x0/
        /M/f32 m_gap_rate/0x4/0x4/
        /M/f32 m_min_speed/0x4/0x8/
	/END/

    // Note: the name of this struct is partially made up.
    /START_STRUCT/NAME@EnemyProbabilityParam/SIZE@0x1C/
	public:
		/M/s32 m_rocket/0x4/0x0/
        /M/s32 m_wheelspin/0x4/0x4/
        /M/s32 m_drift/0x4/0x8/
        /M/s32 m_miniturbo/0x4/0xC/
        /M/s32 m_blockline/0x4/0x10/
        /M/s32 m_jumpaction/0x4/0x14/
        /M/s32 m_sideattack/0x4/0x18/
	/END/

	/START_CLASS/NAME@AIParamLoader/SIZE@0x1C/
	public:
		/M/EnemyCourseParam *m_course_param/0x4/0x0/
        /M/EnemyProbabilityParam *m_probability_param/0x4/0x4/
        /M/CSVUtil::CSVParam *m_probability_table_easy/0x4/0x8/
        /M/CSVUtil::CSVParam *m_probability_table_normal/0x4/0xC/
        /M/CSVUtil::CSVParam *m_probability_table_hard/0x4/0x10/
        /M/CSVUtil::CSVParam *m_course_param_table/0x4/0x14/
        /M/EAILevel m_ai_level/0x4/0x18/
	/END/
}