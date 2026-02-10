#pragma once

#include "AIProbabilityBase.hpp"

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIProbabilityBattle/SIZE@0x18/BASE@AIProbabilityBase/BSIZE@0x10/
	public:
        virtual void init() {} // 0

        virtual s32 getRocketStartOrWheelSpin() { return 0; } // 2

        virtual bool isLaunchDrift() { return false; } // 3
        virtual bool isLaunchMiniTurbo() { return false; } // 4
        virtual bool isLaunchBlockLine() { return false; } // 5
	/END/
}