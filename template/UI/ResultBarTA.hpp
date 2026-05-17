#pragma once

#include "../common.hpp"
#include "../forward.hpp"

#include "BaseResultBar.hpp"
#include "../RaceSys/CTime.hpp"
#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"

#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ResultBarTA/SIZE@0x150/BASE@BaseResultBar/BSIZE@0x130/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~ResultBarTA();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        void setLapTime(const RaceSys::CTime &, const RaceSys::CTime &, const RaceSys::CTime &);
        void setGhostName(const wchar_t *);
        void setTime(const RaceSys::CTime &);
        void setParts(RaceSys::EBodyID, RaceSys::ETireID, RaceSys::EWingID);
        void setLatest(bool);

        /M/nw::lyt::TextBox *m_T_total_time/0x4/0x134/
        /M/nw::lyt::TextBox *m_T_lap_time[LAP_MAX]/0xC/0x138/
        /M/nw::lyt::TextBox *m_T_body/0x4/0x144/
        /M/nw::lyt::TextBox *m_T_tire/0x4/0x148/
        /M/nw::lyt::TextBox *m_T_glider/0x4/0x14c/
    /END/
}