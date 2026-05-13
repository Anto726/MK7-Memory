#pragma once

#include "../versions.h"
#include "BaseMenuViewControl.hpp"

#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuPartsName/SIZE@0xB4/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation();
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const;
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuPartsName();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        
        void setName(u32);

        /M/nw::lyt::TextBox *m_T_parts_name/0x4/0xa8/
        /M/BaseFastControl::TextScale m_text_scale/0x8/0xac/
    /END/
}