#pragma once
#include "Rigid.hpp"

namespace Kart
{
	class VehicleBase : public Rigid
	{
	public:
		u8 m_0x74[16];
		s32 m_player_id;
		u8 m_0x88[16];
		bool m_is_master;
		u8 m_0x99[4];
		bool m_is_net_send;
		bool m_is_net_recv;
		u8 m_0x9F[4];
		bool m_is_intangible;
		u8 m_0xA4[56];
	};
	static_assert(sizeof(VehicleBase) == 0xDC);
}