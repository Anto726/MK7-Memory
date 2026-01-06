#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIProbabilityBase/SIZE@0x10/VTABLE@True/
	public:
        virtual void init() {}
        virtual void calcRocketStartOrWheelSpin() {}
        virtual s32 getRocketStartOrWheelSpin() { return m_start_boost_level; }
        virtual bool isLaunchDrift() { return true; }
        virtual bool isLaunchMiniTurbo() { return false; }
        virtual bool isLaunchBlockLine() { return false; }
        virtual bool isLaunchJumpAction() { return false; }
        virtual bool isLaunchSideAttack() { return false; }

		/M/AIParamLoader *m_param_loader/0x4/0x4/
        /M/s32 field_0x08/0x4/0x8/
        /M/s32 m_start_boost_level/0x4/0xC/
	/END/

    /START_CLASS/NAME@AIProbabilityRace/SIZE@0x20/BASE@AIProbabilityBase/BSIZE@0x10/
	public:
        AIProbabilityRace();

        virtual void init();
        virtual void calcRocketStartOrWheelSpin();
        virtual bool isLaunchDrift();
        virtual bool isLaunchMiniTurbo();
        virtual bool isLaunchBlockLine();
        virtual bool isLaunchJumpAction();
        virtual bool isLaunchSideAttack();

        /M/AIInfo *m_info/0x4/0x10/
        /M/AIManager *m_manager/0x4/0x14/
        /M/void *field_0x18/0x4/0x18/
        /M/bool m_can_drift/0x4/0x1C/
	/END/

    /START_CLASS/NAME@AIProbabilityBattle/SIZE@0x18/BASE@AIProbabilityBase/BSIZE@0x10/
	public:
        virtual void init() {}
        virtual s32 getRocketStartOrWheelSpin() { return 0; }
        virtual bool isLaunchDrift() { return false; }
        virtual bool isLaunchMiniTurbo() { return false; }
        virtual bool isLaunchBlockLine() { return false; }
	/END/
}