#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "../versions.h"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@MenuListSeparator/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~MenuListSeparator();
    /END/
#endif
}