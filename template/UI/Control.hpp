#pragma once

#include "../types.hpp"
#include "../Object/Actor.hpp"
#include <nw/lyt/Pane.hpp>
#include <container/seadListImpl.h>
#include "ControlNullFader.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@Control/SIZE@0x64/BASE@Object::Actor/BSIZE@0x08/VTABLE@True/
    public:
        enum ControlSightType {
            CONTROL_SIGHT_TYPE_DUMMY = 1,
            CONTROL_SIGHT_TYPE_DEFAULT,
            CONTROL_SIGHT_TYPE_DIV_ROOT,
            CONTROL_SIGHT_TYPE_DIV_PART
        };

        enum ControlDrawScreenFlag {
            FLAG_0x08 = 0x08,
            DRAW_ON_TOP_SCREEN = 0x10,
            FLAG_0x20 = 0x20,
            DRAW_ON_BOTTOM_SCREEN = 0x40,
            FLAG_0x80 = 0x80
        };

        /START_STRUCT/NAME@CreateArg/SIZE@0x18/
        public:
            virtual void _0x0() = 0; // 0
        /END/

        virtual void forceCameraDir() {}; // 18

        virtual void onCreate(CreateArg *) {}; // 19
        virtual void reset() {}; // 20

        virtual void readyFadein() {}; // 21
        virtual void readyFadeout() {}; // 22

        virtual void fadeStep() {}; // 23
        virtual void isFadeComplete() {}; // 24

        virtual void draw() {}; // 25

        virtual nw::lyt::Pane *getRootPane() { return {}; }; // 26
        virtual ControlNullFader *generateFader() { return {}; }; // 27

        /M/CreateArg *m_create_arg/0x4/0x8/
        /M/void *m_0xC/0x4/0xC/
        /M/Control *m_0x10/0x4/0x10/
        /M/f32 m_0x14/0x4/0x14/
        /M/ControlNullFader *m_fader/0x4/0x18/
        /M/u32 m_draw_screen_flag/0x4/0x1C/
        /M/u8 m_0x20/0x1/0x20/
        /M/u32 m_0x24/0x4/0x24/
        /M/bool m_visible/0x1/0x28/
        /M/sead::ListNode m_list_nodes[7]/0x38/0x2C/
    /END/
}