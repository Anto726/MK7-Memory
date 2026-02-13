#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "GraphicResourceInfo.hpp"

#include <math/seadVector.hpp>
#include <prim/seadSafeString.h>
#include <container/seadPtrArray.h>
#include <math/seadMatrix.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlSight/SIZE@0x4/VTABLE@True/
        enum ControlSightType {
            CONTROL_SIGHT_TYPE_DUMMY = 1,   // NwlytDummyControlSight
            CONTROL_SIGHT_TYPE_DEFAULT,     // NwlytControlSight
            CONTROL_SIGHT_TYPE_DIV_ROOT,    // NwlytDivRootControlSight
            CONTROL_SIGHT_TYPE_DIV_PART     // NwlytDivPartControlSight
        };

        enum class EElementType : u32
        {
            ELEMENT_TYPE_PANE,
            ELEMENT_TYPE_TEXTBOX,
            ELEMENT_TYPE_2,
            ELEMENT_TYPE_BOUNDING,
            ELEMENT_TYPE_BACK
        };
        
        public:
            virtual void* getRuntimeTypeInfo(); // 0

            /START_STRUCT/NAME@CreateArg/SIZE@0x48/
                /M/sead::SafeString m_layout_name/0x8/0x0/
                /M/sead::SafeString m_bctr_filename/0x8/0x8/
                /M/sead::Vector3f m_position/0xC/0x10/
                /M/f32 m_pane_width/0x4/0x1C/
                /M/f32 m_pane_height/0x4/0x20/
                /M/bool m_0x24/0x1/0x24/
                /M/s32 m_0x28/0x4/0x28/
                /M/s32 m_0x2C/0x4/0x2C/
                /M/sead::SafeString m_0x30/0x8/0x30/
                /M/void *m_0x38/0x4/0x38/
                /M/sead::SafeString m_0x3C/0x8/0x3c/
                /M/sead::PtrArray<GraphicResourceInfo> *m_graphics_resource_info_array/0x4/0x44/
            /END/
    /END/

    /START_CLASS/NAME@NullControlSight/SIZE@0x40/BASE@ControlSight/BSIZE@0x4/VTABLE@True/
    public:
        /M/sead::Matrix34f m_0x4/0x30/0x4/
        /M/u8 m_0x34/0x1/0x34/
        /M/u8 m_0x35/0x1/0x35/
        /M/void *m_0x38/0x4/0x38/
        /M/s32 m_0x3C/0x4/0x3C/
    /END/
}