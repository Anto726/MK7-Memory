#pragma once

#include "ControllerBase.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadController/SIZE@0x6C/BASE@ControllerBase/BSIZE@0x6C/
    public:
        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        static void *getDTIClassStatic();
        virtual void initImpl();
        virtual void calcImpl();

        KDPadController();
    /END/
}
