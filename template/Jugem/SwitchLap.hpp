#pragma once

#include "Switch.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class SwitchLap : public Switch {};
    static_assert(sizeof(SwitchLap) == 0x10);
}