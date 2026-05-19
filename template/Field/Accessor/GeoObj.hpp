#pragma once

#include "base.hpp"

#include "../Entry/GeoObj.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataGeoObjAccessor/SIZE@0x1C/BASE@MapdataAccessorBase<MapdataGeoObj, MapdataGeoObj::SData>/BSIZE@0x18/
    public:
        /M/MapdataPathAccessor *m_mapdata_path_accessor/0x4/0x18/
    /END/

    inline auto GetGeoObjAccessor()
    {
        return GetDirector()->m_course_info->m_geo_obj_accessor;
    }
}