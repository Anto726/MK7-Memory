#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Kart){
    /START_CLASS/NAME@Driver/SIZE@0xE8/
    public:
        /M/s32 m_driver_id/0x4/0x8/
        /M/u8 m_goal_motion_state/0x4/0x54/ // 0 -> Lose, 1 -> Win, 2 -> Idle (default)
    /END/
}