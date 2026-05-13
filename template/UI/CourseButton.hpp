#pragma once

#include "BaseMenuButtonControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@CourseButton/SIZE@0x23C/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~CourseButton();
        virtual void onCreate(const Control::CreateArg *);
    /END/
}