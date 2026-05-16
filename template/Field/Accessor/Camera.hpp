#pragma once

#include "base.hpp"

#include "../Entry/Camera.hpp"

#include "../../System/RootSystem.hpp"
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
        return System::g_root_system->get_field_director()->m_course_info->m_camera_accessor;
    }
}