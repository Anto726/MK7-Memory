#pragma once

#include "RacePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@TitleDemoPage/SIZE@0x3324/BASE@RacePage/BSIZE@0x3320/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~TitleDemoPage();
        virtual void enter(Section::EFadeKind, u32);
        virtual void onPagePreStep();
        virtual void onPageComplete();
        virtual void initControl();
        virtual void calcItemIcon();

        /M/s32 m_demo_max_time/0x4/0x3320/
    /END/
}