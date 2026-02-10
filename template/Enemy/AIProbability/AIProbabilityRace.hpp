#pragma once

#include "AIProbabilityBase.hpp"

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIProbabilityRace/SIZE@0x20/BASE@AIProbabilityBase/BSIZE@0x10/
	public:
        AIProbabilityRace();

        virtual void init() {}; // 0

        virtual void calcRocketStartOrWheelSpin() {}; // 1

        virtual bool isLaunchDrift() { return {}; } // 3
        virtual bool isLaunchMiniTurbo() { return {}; } // 4
        virtual bool isLaunchBlockLine() { return {}; } // 5
        virtual bool isLaunchJumpAction() { return {}; } // 6
        virtual bool isLaunchSideAttack() { return {}; } // 7

        /M/AIInfo *m_info/0x4/0x10/
        /M/AIManager *m_manager/0x4/0x14/
        /M/AIRank *m_rank/0x4/0x18/
        /M/bool m_can_drift/0x4/0x1C/
	/END/
}