#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "GraphicResourceInfo.hpp"

#include <math/seadVector.hpp>
#include <prim/seadSafeString.h>
#include <container/seadPtrArray.h>
#include <math/seadMatrix.h>
#include <nw/lyt/Pane.hpp>

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

            /START_STRUCT/NAME@ElementHandle/SIZE@0x4/
                /M/void *m_element/0x4/0x0/
            /END/
            
            virtual void* getRuntimeTypeInfo(); // 0
            virtual void _0x4() = 0; // 1 (__sub_object)
            virtual s32 build(const CreateArg*); // 2
            virtual void calc(); // 3
            virtual void draw(); // 4
            virtual ElementHandle *getElementHandle(const sead::SafeString&, EElementType); // 5
            virtual ElementHandle *getConstElementHandle(const sead::SafeString&, EElementType) const; // 6
            virtual void setPosImpl(u32, const sead::Vector3f&); // 7
            virtual const sead::Vector3f& getPosImpl(u32) const; // 8
            virtual void _0x28() = 0; // 9
            virtual const sead::Vector2f& getSizeImpl(u32) const; // 10
            virtual void _0x30() = 0; // 11
            virtual void _0x34() = 0; // 12
            virtual void _0x38() = 0; // 13
            virtual void _0x3C() = 0; // 14
            virtual void _0x40() = 0; // 15
            virtual void _0x44() = 0; // 16
            virtual const sead::Matrix34f& getGlobalMtxImpl(u32) const; // 17
            virtual void setAlphaImpl(u32, u8); // 18
            virtual void _0x50() = 0; // 19
            virtual u8 getGlobalAlphaImpl(u32) const; // 20
            virtual void setVisibleImpl(u32, bool); // 21
            virtual void _0x5C() = 0; // 22
            virtual bool getGlobalVisibleImpl(u32) const; // 23
            virtual void _0x64() = 0; // 24
            virtual nw::lyt::Pane *getPane(u32); // 25
            virtual void _0x6C() = 0; // 26
    /END/

    /START_CLASS/NAME@NullControlSight/SIZE@0x40/BASE@ControlSight/BSIZE@0x4/VTABLE@True/
    public:
        /M/sead::Matrix34f m_matrix/0x30/0x4/
        /M/u8 m_alpha/0x1/0x34/
        /M/bool m_visible/0x1/0x35/
        /M/void *m_0x38/0x4/0x38/
        /M/s32 m_0x3C/0x4/0x3C/
    /END/
}