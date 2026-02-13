#pragma once

#include "../types.hpp"

#include "Control.hpp"
#include "ControlAnimator.hpp"
#include "ControlSight.hpp"
#include "NwlytControlSight.hpp"
#include "MessageData.hpp"
#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@VisualControl/SIZE@0x7C/BASE@Control/BSIZE@0x64/VTABLE@True/
    public:
        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@Control::CreateArg/BSIZE@0x18/VTABLE@True/
            virtual ControlAnimator::AnimationDefine *getAnimationDefine(); // 3

            /M/ControlSight::CreateArg m_control_sight_create_arg/0x48/0x18/
            /M/u8 m_control_sight_type/0x01/0x68/
            /M/sead::PtrArray<MessageData> *m_message_data_array/0x04/0x6C/
        /END/

        virtual ~VisualControl() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void create(ArgumentObj const *); // 4
        virtual void calc(); // 6
        virtual void forceCameraDir(); // 18
        virtual void onCreate(const CreateArg *) {}; // 19
        virtual void reset(); // 20
        virtual void readyFadein(); // 21
        virtual void readyFadeout(); // 22
        virtual void fadeStep(); // 23
        virtual bool isFadeComplete(); // 24
        virtual void draw(); // 25
        virtual nw::lyt::Pane *getRootPane(); // 26
        virtual void onReset() {}; // 28
        virtual void onCalc() {}; // 29
        virtual void onCalcPostAnim() {}; // 30

        /M/ControlAnimator *m_animator/0x4/0x64/
        /M/NwlytDivControlSight *m_control_sight/0x4/0x68/ 
        /M/MessageDataList m_message_data_list/0xC/0x6C/
        /M/bool m_anim_keep/0x1/0x78/
        /M/bool m_apply_animation/0x1/0x79/
        /M/bool m_calc_control_sight/0x1/0x7A/
        /M/bool m_is_pause_visible/0x1/0x7B/
    /END/
}