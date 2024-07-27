#pragma once

#include "Rigid.hpp"

namespace Kart
{
	class VehicleBase : public Rigid
	{
	public:
		u8 gap_0x74[0x4];
		Director *m_director;
		u8 gap_0x7C[0x8];
		s32 m_player_id;
		u8 gap_0x88[0x10];
		bool m_is_master;
		u8 gap_0x99[0x4];
		bool m_is_net_send;
		bool m_is_net_recv;
		u8 gap_0x9F[0x4];
		bool m_is_intangible;
		u8 gap_0xA4[0x2];
		bool m_is_fake_goal;
		u8 gap_0xA7[0x35];
	};
	static_assert(sizeof(VehicleBase) == 0xDC);
}