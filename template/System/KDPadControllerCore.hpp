#pragma once

#include "../types.hpp"

#include <controller/ctr/seadCtrController.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadControllerCore/SIZE@0x15c/BASE@sead::CtrController/BSIZE@0x15c/
    public:
        virtual ~KDPadControllerCore();
        virtual void calc();
        virtual void calcImpl_();
        virtual void updateDerivativeParamsSp_(u32, bool);
    /END/
}
