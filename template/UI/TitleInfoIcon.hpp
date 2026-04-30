#pragma once

#include "../types.hpp"
#include "../versions.h"
#include "BaseFastControl.hpp"
#include "../Sequence/MenuTitle.hpp"

BEGIN_NAMESPACE(UI)
{
    // Name is made up
    /START_CLASS/NAME@TitleInfoIconBase/SIZE@0xA8/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        // Note: The name of this enum is made up.
        enum class EType : u32
        {
            TYPE_NONE,
            TYPE_STREETPASS,    // info_green.bclim
            TYPE_SPOTPASS       // info_blue.bclim
        };

        /M/f32 m_0x8c/0x4/0x8C/
        /M/f32 m_0x90/0x4/0x90/
        /M/Sequence::MenuTitle *m_menu_title/0x4/0xa4/
    /END/

    /START_CLASS/NAME@TitleInfoIcon/SIZE@0xB0/BASE@TitleInfoIconBase/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        ~TitleInfoIcon();
        void onCreate(const UI::Control::CreateArg *);
        void onReset();

#if GAME_VERSION != ALL_DLP
        // 0x00157360 (VERSION_USA_REV1)
        void changeType(EType);
#endif

        /M/EType m_current_type/0x4/0xa8/
        /M/bool m_is_active/0x1/0xac/
    /END/

    /START_CLASS/NAME@TitleInfoIcon2/SIZE@0xAC/BASE@TitleInfoIconBase/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        ~TitleInfoIcon2();
        void onCreate(const UI::Control::CreateArg *);
        void onReset();

        /M/bool m_is_active/0x1/0xa8/
    /END/
}