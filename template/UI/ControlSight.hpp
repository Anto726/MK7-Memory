#pragma once

#include "../types.hpp"
#include <math/seadVector.hpp>
#include <prim/seadSafeString.h>
#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlSight/SIZE@0x4/VTABLE@True/
        enum ControlSightType {
            CONTROL_SIGHT_TYPE_DUMMY = 1,
            CONTROL_SIGHT_TYPE_DEFAULT,
            CONTROL_SIGHT_TYPE_DIV_ROOT,
            CONTROL_SIGHT_TYPE_DIV_PART
        };
        
        public:
            virtual void* getRuntimeTypeInfo(); // 0

            /START_STRUCT/NAME@CreateArg/SIZE@0x48/
                /M/SafeString m_layout_name/0x4/0x0/
                /M/SafeString m_bctr_filename/0x4/0x8/
                /M/sead::Vector3f m_position/0xC/0x10/
                /M/f32 m_pane_width/0x4/0x1C/
                /M/f32 m_pane_height/0x4/0x20/
                /M/bool m_0x24/0x1/0x24/
                /M/s32 m_0x28/0x4/0x28/
                /M/s32 m_0x2C/0x4/0x2C/
                /M/SafeString m_0x30/0x8/0x30/
                /M/void *m_0x38/0x4/0x38/
                /M/SafeString m_0x3C/0x8/0x3c/
                /M/SafeString m_0x3C/0x8/0x3c/
                /M/sead::PtrArray<GraphicResourceInfo> *m_graphics_resource_info_array/0x4/0x40/
            /END/
    /END/
}