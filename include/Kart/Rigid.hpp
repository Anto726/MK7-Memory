#pragma once
#include "../types.hpp"

#include <math/seadVectorFwd.h>

namespace Kart
{
	class Rigid
	{
	public:
		u8 m_0x0[52];
		sead::Vector3f *m_position;
		u8 m_0x38[60];
	};
	static_assert(sizeof(Rigid) == 0x74);
}