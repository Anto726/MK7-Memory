#pragma once

#include "../types.hpp"

#include "KDPadInputer.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadUIInputer/SIZE@0x28/BASE@KDPadInputer/BSIZE@0x28/VTABLE@True/
    public:
        void calcInput();
        bool inputButton();
        bool inputStick();
        virtual void inputTouchPanel();

        KDPadUIInputer(KDPad *, KDPadDataOnFrame &);
    /END/
}