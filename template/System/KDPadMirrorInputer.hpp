#pragma once

#include "../types.hpp"

#include "KDPadInputer.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadMirrorInputer/SIZE@0x28/BASE@KDPadInputer/BSIZE@0x28/VTABLE@True/
    public:
        bool inputStick();

        KDPadMirrorInputer(KDPad *, KDPadDataOnFrame &);
        void setMirrorInput(bool);
    /END/
}
