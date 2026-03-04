#pragma once

#include "../types.hpp"

#include "KDPadAddBase.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadInputer/SIZE@0x28/BASE@KDPadAddBase/BSIZE@0x24/VTABLE@True/
    public:
        virtual ~KDPadInputer() = default;
        virtual void calcState() {};
        virtual void resetCore() {};
        virtual void calcInput() {};
        virtual void inputButton() {};
        virtual void inputStick() {};

        /M/void *m_pad_director/0x4/0x24/   // KDPadDirector *
    /END/
}