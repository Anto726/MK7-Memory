#pragma once

#include "base.hpp"

#include "../Entry/Stage.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataStageAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataStage, MapdataStage::SData>/BSIZE@0x18/
    /END/

    // NOTE: guessed name
    inline auto GetStageAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_stage_accessor;
    }

    inline Field::MapdataStage *GetStageInfo()
    {
        auto const stage_accessor = GetStageAccessor();

        if (stage_accessor->m_datas.size() != 0)
            return stage_accessor->m_entries(0);

        return nullptr;
    }
}