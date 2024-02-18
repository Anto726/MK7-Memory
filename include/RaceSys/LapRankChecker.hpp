#pragma once

#include "../types.hpp"

namespace RaceSys
{
	class LapRankChecker
	{
	public:
		class KartInfo
		{
		};

	public:
		u8 gap_0x0[32];
		int m_idle_timer_1;
		float m_idle_timer_2;
	};
	static_assert(sizeof(LapRankChecker) == 0x28);
}