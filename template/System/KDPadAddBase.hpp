#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    class KDPadAddBase
    {
    public:
        virtual ~KDPadAddBase() = default;
        virtual void reset() {};
        virtual void calc() {};
        virtual void calcState() {};
        virtual void resetCore() {};
        virtual void initInner() {};
    };
    static_assert(sizeof(KDPadAddBase) == 0x4);
}