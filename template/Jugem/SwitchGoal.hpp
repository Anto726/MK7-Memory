#pragma once

#include "Switch.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class SwitchGoal : public Switch {};
    static_assert(sizeof(SwitchGoal) == 0x10);
}