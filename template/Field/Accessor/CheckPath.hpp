#pragma once

#include "base.hpp"

#include "../Entry/CheckPath.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCheckPathAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataCheckPath, MapdataCheckPath::SData>/BSIZE@0x18/
    /END/

    inline auto GetCheckPathAccessor()
    {
        return GetDirector()->m_course_info->m_check_path_accessor;
    }

    inline auto IsValidCheckPath()
    {
        return GetCheckPathAccessor()->m_datas.size() != 0;
    }
}