#pragma once

#include "BaseMenuButtonControl.hpp"
#include "BaseMenuInputControl.hpp"
#include "ControlAnimator.hpp"
#include "EKeyID.hpp"
#include "LRSelectBg.hpp"
#include "VisualControl.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@LRSelect/SIZE@0x430/BASE@BaseMenuInputControl/BSIZE@0x40C/VTABLE@True/
    public:
        enum class ESettingType : u8
        {
            SELECT_ENGINE_CLASS,
            SELECT_ENABLE_CPU,
            SELECT_CPU_LEVEL,
            SELECT_COURSE_ORDER,
            SELECT_ITEM_PATTERN,
            SELECT_ENABLE_TEAMS,
            COMMUNITY_CREATE_MODE,
            COMMUNITY_CREATE_TEAMS,
            COMMUNITY_CREATE_8,
            COMMUNITY_CREATE_ITEMS,
            COMMUNITY_CREATE_10,
            CHANNEL_STREETPASS_COURSE_SELECT_1,
            CHANNEL_STREETPASS_COURSE_SELECT_2,
            CHANNEL_STREETPASS_COURSE_SELECT_3,
            CHANNEL_STREETPASS_COURSE_SELECT_4,
            CHANNEL_SETTINGS_STREETPASS,
            CHANNEL_SETTINGS_SPOTPASS,
            CHANNEL_SETTINGS_REGION_DISPLAY,
            CHANNEL_SETTINGS_ONLINE_STATUS,
            CHANNEL_SETTINGS_GYRO,

            TYPE_MAX
        };

        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        using Control::init;

        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        virtual ~LRSelect(); // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *); // 19
        virtual void onReset();
        virtual void onCalc();
        virtual void keyHandlerCursor(s32, s32);
        virtual void touchHandlerDown(s32, const sead::Vector2f &);
        virtual void touchHandlerSlideOut(s32, const sead::Vector2f &);
        virtual void touchHandlerSlideIn(s32, const sead::Vector2f &);
        virtual void touchHandlerUp(s32, const sead::Vector2f &);
        virtual void selectHandlerOn(s32, s32);
        virtual void selectHandlerOff(s32, s32);

        void loadSelect();
        void setValTextOuter(s32);
        void init(ESettingType, bool);
        void apply();
        void setBg(LRSelectBg *);
        void setButton(BaseMenuButtonControl *, EKeyID);
        LRSelect();

        /M/ESettingType m_setting_type/0x1/0x40c/
        /M/u8 m_0x40d/0x1/0x40d/
        /M/LRSelectBg *m_bg/0x4/0x410/
        /M/sead::Vector3f m_bg_pos/0xc/0x414/
        // If `false`, the LRSelect is being controlled by another player (only used in local multiplayer)
        /M/bool m_is_master_player/0x1/0x420/
        /M/bool m_is_mirror_unlocked/0x1/0x421/
        /M/BaseMenuButtonControl *m_button/0x4/0x424/
        /M/EKeyID m_key_handler_button/0x4/0x428/
        /M/u8 m_0x42c/0x1/0x42c/
    /END/
}