#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadAddBase/SIZE@0x24/VTABLE@True/
    public:
        /START_STRUCT/NAME@KDPadDataOnFrame/SIZE@0x1c/
        /END/

        virtual ~KDPadAddBase() = default;
        virtual void reset() {};
        virtual void calc() {};
        virtual void calcState() {};
        virtual void resetCore() {};
        virtual void initInner() {};
    /END/
}