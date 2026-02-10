#pragma once

#include "../../forward.hpp"
#include "../../types.hpp"

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIProbabilityBase/SIZE@0x10/VTABLE@True/
	public:
        virtual void init() {} // 0
        
        virtual void calcRocketStartOrWheelSpin() {} // 1
        virtual s32 getRocketStartOrWheelSpin() { return m_start_boost_level; } // 2

        virtual bool isLaunchDrift() { return true; } // 3
        virtual bool isLaunchMiniTurbo() { return false; } // 4
        virtual bool isLaunchBlockLine() { return false; } // 5
        virtual bool isLaunchJumpAction() { return false; } // 6
        virtual bool isLaunchSideAttack() { return false; } // 7

		/M/AIParamLoader *m_param_loader/0x4/0x4/
        /M/s32 field_0x08/0x4/0x8/
        /M/s32 m_start_boost_level/0x4/0xC/
	/END/
}