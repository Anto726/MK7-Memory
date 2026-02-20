#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

#include <nw/lyt/Pane.hpp>
#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuWifiPlayerName/SIZE@0xAC/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual ControlAnimator::AnimationDefine *getAnimationDefine(); // 3
        /END/

        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        virtual ~MenuWifiPlayerName() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *) {}; // 19
        virtual void onReset() {}; // 28

        void setCountry(u8, bool);
        void setLoop();
        void setMii(s32);
        void setName(const sead::WSafeString &);
        void setPoint(s32);
        void setRate(s32);

        /M/nw::lyt::Pane *m_p_mii/0x4/0xA8/    // P_mii
    /END/
}