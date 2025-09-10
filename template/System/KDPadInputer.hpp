#pragma once

#include "../types.hpp"

#include "KDPadAddBase.hpp"

BEGIN_NAMESPACE(System)
{
    class KDPadInputer : public KDPadAddBase
    {
    public:
        virtual ~KDPadInputer() = default;
        virtual void calcState() {};
        virtual void resetCore() {};
        virtual void calcInput() {};
        virtual void inputButton() {};
        virtual void inputStick() {};
    };
    static_assert(sizeof(KDPadInputer) == 0x4);
}