#pragma once

#include "../types.hpp"

#include <controller/ctr/seadCtrController.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDUIPadControllerCore/SIZE@0x15c/BASE@KDPadControllerCore/BSIZE@0x15c/
    public:
        virtual ~KDUIPadControllerCore();
        virtual void calcImpl_();
        virtual void updateDerivativeParamsSp_(u32, bool);
    /END/
}
