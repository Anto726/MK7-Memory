#pragma once

#include "../types.hpp"

#include <time/seadTickTime.h>

BEGIN_NAMESPACE(Debug)
{
    /START_CLASS/NAME@CostChecker/SIZE@0x18/
    public:
        void start();
        void end();

        /M/void *m_0x0/0x4/0x0/
        /M/char *m_name/0x4/0x4/
        /M/sead::TickTime m_time/0x8/0x8/
        /M/bool m_is_running/0x1/0x10/
    /END/
}