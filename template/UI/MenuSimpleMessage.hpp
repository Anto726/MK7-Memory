#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuSimpleMessage/SIZE@0xAC/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        enum class EMode : u32 {
            // Enables the "Friend registration" message to be displayed.
            MODE_DISPLAY_FRIEND_REGISTRATION = 1
        };

        enum class ETitleMode : u32 {
            TITLE_MODE_FINDING_PLAYERS,
            TITLE_MODE_DOWNLOAD_PLAY,
            TITLE_MODE_FRIEND_REGISTRATION
        };

        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuSimpleMessage() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        
        MenuSimpleMessage() = default;
        void setMode(EMode);
        void setTitleMode(ETitleMode, s32);

        /M/EMode m_mode/0x4/0xa8/
    /END/
}