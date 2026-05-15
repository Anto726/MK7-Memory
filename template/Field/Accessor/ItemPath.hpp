#pragma once

#include "base.hpp"

#include "../Entry/ItemPath.hpp"

#include "../../System/RootSystem.hpp"
#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataItemPathAccessor/SIZE@0x1C/BASE@MapdataAccessorBase<MapdataItemPath, MapdataItemPath::SData>/BSIZE@0x18/
    public:
        /M/MapdataItemPointAccessor *m_item_point_accessor/0x4/0x18/
    /END/

    inline auto GetItemPathAccessor()
    {
        return System::g_root_system->get_field_director()->m_course_info->m_item_path_accessor;
    }

    inline auto IsValidItemPath()
    {
        return GetItemPathAccessor()->m_datas.size() != 0;
    }
}