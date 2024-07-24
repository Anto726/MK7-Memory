#pragma once

#include "VehicleMove.hpp"

namespace Kart
{
	class VehicleReact : public VehicleMove
	{
	public:
		enum class EAcdType : u8
		{
			MAX = 0x13,
		};
		
		enum class ECallType : u32
		{

		};

	public:
		u8 gap_0x1214[40];
	};
	static_assert(sizeof(VehicleReact) == 0x123C);
}