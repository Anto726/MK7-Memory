#pragma once

#include "../versions.h"
#include "BaseMenuButtonControl.hpp"

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@CharaButton/SIZE@0x23C/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;  // 0x004e1cd0 (VERSION_USA_REV1)
        virtual Object::DTIClassInfo *getDTIClass() const;      // 0x004e1c48 (VERSION_USA_REV1)
        virtual ~CharaButton();                                 // 0x0014b308 (VERSION_USA_REV1)
    /END/
#endif
}