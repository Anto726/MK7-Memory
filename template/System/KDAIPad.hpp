#pragma once

#include "KDPad.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDAIPad/SIZE@0x44/BASE@KDPad/BSIZE@0x44/VTABLE@True/
    public:
        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        virtual void setButton(s32);
        virtual void setStick(f32, f32);
        
        KDAIPad();
    /END/
}
