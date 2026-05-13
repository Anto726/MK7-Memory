#pragma once

#include "../versions.h"
#include "BaseMenuViewControl.hpp"

#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@MenuCharaName/SIZE@0xB4/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0x00154d0c (VERSION_USA_REV1)
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 0x004e3c60 (VERSION_USA_REV1)
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;  // 0x004e3bd8 (VERSION_USA_REV1)
        virtual Object::DTIClassInfo *getDTIClass() const;      // 0x004e3b50 (VERSION_USA_REV1)
        virtual ~MenuCharaName();                               // 0x00154f08 (VERSION_USA_REV1)
        virtual void onCreate(const Control::CreateArg *);      // 0x00154e5c (VERSION_USA_REV1)
        virtual void onReset();                                 // 0x00154dc4 (VERSION_USA_REV1)
        
        void setName(u32);                                      // 0x00154df0 (VERSION_USA_REV1)

        /M/nw::lyt::TextBox *m_T_chara_name/0x4/0xa8/
        /M/BaseFastControl::TextScale m_text_scale/0x8/0xac/
    /END/
#endif
}