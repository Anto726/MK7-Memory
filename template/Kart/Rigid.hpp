#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "../KDMinMax.hpp"
#include "../KDMtxT.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@Rigid/SIZE@0x74/
	public:
		/M/KDMtxT m_kd_mtx/0x30/0x0/
		/M/KDAttT *m_angle/0x4/0x30/
		/M/sead::Vector3f *m_position/0x4/0x34/
		/M/sead::Vector3f m_velocity/0xC/0x38/
		/M/KDMinMax m_kd_min_max/0x18/0x44/
		/M/sead::Vector3f m_reject/0xC/0x5C/
		/M/sead::Vector3f m_reject_impulse/0xC/0x68/
	/END/
}