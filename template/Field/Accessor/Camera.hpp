#pragma once

#include "base.hpp"

#include "../Entry/Camera.hpp"

#include "../CourseInfo.hpp"
#include "../FieldDirector.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCameraAccessor/SIZE@0x1C/BASE@MapdataAccessorBase<MapdataCamera, MapdataCamera::SData>/BSIZE@0x18/
    public:
        /M/MapdataPathAccessor *m_path_accessor/0x4/0x18/
    /END/

    inline auto GetCameraAccessor()
    {
        return GetDirector()->m_course_info->m_camera_accessor;
    }
}