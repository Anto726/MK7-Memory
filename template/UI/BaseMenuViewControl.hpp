#pragma once

#include "../types.hpp"

#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    class BaseMenuViewControl : public VisualControl
    {
    public:
        u8 gap_0x78[0x30];
    };
    static_assert(sizeof(BaseMenuViewControl) == 0xA8);
}