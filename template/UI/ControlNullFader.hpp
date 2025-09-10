#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    class ControlNullFader
    {
    public:
        virtual ~ControlNullFader() {};
    };
    static_assert(sizeof(ControlNullFader) == 0x4);
}