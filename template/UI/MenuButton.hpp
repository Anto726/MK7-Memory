#pragma once

#include "../types.hpp"

#include "BaseMenuButtonControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuButton/SIZE@0x23C/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuButton();
    /END/

    /START_CLASS/NAME@MenuButtonMch/SIZE@0x23C/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuButtonMch();
    /END/
}