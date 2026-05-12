#pragma once

#include "RacePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DemoPage/SIZE@0x3320/BASE@RacePage/BSIZE@0x3320/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~DemoPage();
        virtual void enter(Section::EFadeKind, u32);
        virtual void onPagePreStep();
        virtual void onPageComplete();
        virtual void initControl();
    /END/
}