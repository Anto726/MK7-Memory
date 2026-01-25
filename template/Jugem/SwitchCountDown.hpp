#pragma once

#include "Switch.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class SwitchCountDown : public Switch {};
    static_assert(sizeof(SwitchCountDown) == 0x10);
}