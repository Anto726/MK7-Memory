#pragma once

#include "Switch.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class SwitchLift : public Switch {};
    static_assert(sizeof(SwitchLift) == 0x10);
}