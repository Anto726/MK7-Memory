#pragma once

#include "../types.hpp"

#include <math/seadVector.h>

namespace Kart
{
	class Rigid
	{
	public:
		u8 gap_0x0[0x18];
		sead::Vector3f m_up;
		u8 gap_0x24[0x10];
		sead::Vector3f *m_position;
		u8 gap_0x38[60];
	};
	static_assert(sizeof(Rigid) == 0x74);
}