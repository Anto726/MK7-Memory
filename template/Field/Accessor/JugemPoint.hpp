#pragma once

#include "base.hpp"

#include "../Entry/JugemPoint.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataJugemPointAccessor/SIZE@0x18/BASE@MapdataAccessorBase<MapdataJugemPoint, MapdataJugemPoint::SData>/BSIZE@0x18/
    /END/

    inline auto GetJugemPointAccessor()
    {
        return GetDirector()->m_course_info->m_jugem_point_accessor;
    }

    inline MapdataJugemPoint *GetJugemPoint(s32 index)
    {
        auto const jugem_point_accessor = GetJugemPointAccessor();
        
        if (index < jugem_point_accessor->m_datas.size())
            return jugem_point_accessor->m_entries(index);
        
        return nullptr;
    }
}