#pragma once

#include "../RaceSys/ECourseID.hpp"
#include "../RaceSys/EEngineLevel.hpp"
#include "../RaceSys/EBattleMode.hpp"
#include "../Sequence/ECup.hpp"
#include "BaseMenuViewControl.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuCourseName/SIZE@0x1C0/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation();
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const;
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuCourseName();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        
        void set(RaceSys::EBattleMode);
        void set(RaceSys::ECourseID);
        void set(Sequence::ECup, RaceSys::EEngineLevel, bool, bool, bool);

        /M/nw::lyt::Pane *m_R_center/0x4/0x1b4/
        /M/nw::lyt::Pane *m_P_tro/0x4/0x1b8/
        /M/nw::lyt::Pane *m_P_star/0x4/0x1bc/
    /END/
}