#pragma once

#include "Rigid.hpp"

namespace Kart
{
	class VehicleBase : public Rigid
	{
	public:
		u8 gap_0x74[36];
		bool m_is_master;
		u8 gap_0x99[4];
		bool m_is_net_send;
		bool m_is_net_recv;
		u8 gap_0x9F[4];
		bool m_is_intangible;
		u8 gap_0xA4[56];
	};
	static_assert(sizeof(VehicleBase) == 0xDC);
}