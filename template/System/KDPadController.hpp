#pragma once

#include "ControllerBase.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadController/SIZE@0x6C/BASE@ControllerBase/BSIZE@0x6C/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        static Object::DTIClassInfo *getDTIClassStatic();
        virtual void initImpl();
        virtual void calcImpl();

        KDPadController();
    /END/
}
