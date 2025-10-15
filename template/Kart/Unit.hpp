#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "Vehicle.hpp"
#include "Driver.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@Unit/SIZE@0x400/
	public:
		/M/u32 m_player_id/0x4/0x28/
		/M/Vehicle *m_vehicle/0x4/0x2C/
		/M/Driver *m_driver/0x4/0x50/
		/M/void *m_disp_body/0x4/0x54/
		/M/void *m_disp_wing/0x4/0x1E8/
		/M/void *m_disp_killer/0x4/0x204/
		/M/void *m_camera/0x4/0x214/
	/END/
}