#pragma once

#include "../types.hpp"
#include "../Object/Actor.hpp"
#include <nw/lyt/Pane.hpp>
#include <container/seadListImpl.h>
#include "ControlNullFader.hpp"
#include "ControlResource.hpp"
#include "ControlAnimator.hpp"
#include "../Sequence/Page.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@Control/SIZE@0x64/BASE@Object::Actor/BSIZE@0x08/VTABLE@True/
    public:
        enum ControlDrawScreenFlag {
            FLAG_0x08 = 0x08,
            DRAW_ON_TOP_SCREEN = 0x10,
            FLAG_0x20 = 0x20,
            DRAW_ON_BOTTOM_SCREEN = 0x40,
            FLAG_0x80 = 0x80
        };

        /START_STRUCT/NAME@CreateArg/SIZE@0x18/VTABLE@True/
            virtual void _0x0() = 0; // 0
            virtual void userDataDefine() {} // 1
            virtual void _0x8() = 0; // 2
            virtual ControlAnimator::AnimationDefine *getAnimationDefine(); // 3

            /M/Page *m_page/0x4/0x4/
            /M/u32 m_draw_screen_flag/0x4/0x8/
            /M/s32 m_0xC/0x4/0xC/
            /M/ControlResource *m_control_resource/0x4/0x10/
            /M/s32 m_control_data_idx/0x4/0x14/
        /END/

        virtual void forceCameraDir() {}; // 18

        virtual void onCreate(const CreateArg *) {}; // 19
        virtual void reset() = 0; // 20

        virtual void readyFadein() = 0; // 21
        virtual void readyFadeout() = 0; // 22

        virtual void fadeStep() = 0; // 23
        virtual bool isFadeComplete() = 0; // 24

        virtual void draw() = 0; // 25

        virtual nw::lyt::Pane *getRootPane() { return {}; }; // 26
        virtual ControlNullFader *generateFader(); // 27

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