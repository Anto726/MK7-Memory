#pragma once

#include "../forward.hpp"
#include "../versions.h"
#include "BaseMenuInputControl.hpp"
#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"

#include <math/seadVector.hpp>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@PresentBox/SIZE@0x444/BASE@BaseMenuInputControl/BSIZE@0x40c/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0x00144c08 (VERSION_USA_REV1)
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 0x004e17bc (VERSION_USA_REV1)
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;           // 0x004e1734 (VERSION_USA_REV1)
        virtual Object::DTIClassInfo *getDTIClass() const;               // 0x004e16ac (VERSION_USA_REV1)
        virtual ~PresentBox();                                           // 0x00145710 (VERSION_USA_REV1)
        virtual void onCreate(const Control::CreateArg *);               // 0x001455d4 (VERSION_USA_REV1)
        virtual void onReset();                                          // 0x001451e4 (VERSION_USA_REV1)
        virtual void onCalc();                                           // 0x00144f88 (VERSION_USA_REV1)
        virtual void keyHandler(s32, EKeyID);                            // 0x00144b54 (VERSION_USA_REV1)
        virtual void touchHandlerDown(s32, const sead::Vector2f &);      // 0x00144e74 (VERSION_USA_REV1)
        virtual void touchHandlerSlideOut(s32, const sead::Vector2f &);  // 0x00144f2c (VERSION_USA_REV1)
        virtual void touchHandlerSlideIn(s32, const sead::Vector2f &);   // 0x00144ed0 (VERSION_USA_REV1)
        virtual void touchHandlerUp(s32, const sead::Vector2f &);        // 0x00144bc4 (VERSION_USA_REV1)

        void attachButton(const BaseMenuButtonControl &, bool);          // 0x00145664 (VERSION_USA_REV1)
        void openBox();                                                  // 0x00145374 (VERSION_USA_REV1). 0x0012fcec (VERSION_EUR_DLP)

        /U/bool/0x1/0x40c/
        /U/bool/0x1/0x40d/
        /U/u8/0x1/0x40e/
        /U/u8/0x1/0x40f/
        /U/s32/0x4/0x410/
        /U/s32/0x4/0x414/
        /M/PresentBoxBg *m_bg_top/0x4/0x418/
        /M/PresentBoxBg *m_bg_bottom/0x4/0x41c/
        /M/BackButtonB *m_back_button/0x4/0x420/
        /M/BaseMenuButtonControl *m_attached_button/0x4/0x424/  // i.e. the character button it's attached to
        /M/sead::Vector3f m_attached_button_position/0xc/0x428/
        /M/RaceSys::EDriverID m_driver/0x4/0x434/
        /M/RaceSys::EBodyID m_body/0x4/0x438/
        /M/RaceSys::ETireID m_tire/0x4/0x43c/
        /M/RaceSys::EWingID m_wing/0x4/0x440/
    /END/
#endif
}