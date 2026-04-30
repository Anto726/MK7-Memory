#pragma once

#include "VehicleControl.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@VehicleControlNet/SIZE@0xBE8/BASE@VehicleControl/BSIZE@0x11C/
	public:
		/START_STRUCT/NAME@NetTrackData/SIZE@0x20/
			/M/sead::Vector3f position/0xC/0x0/
			/U/sead::Vector3f/0xC/0xC/ // Vehicle::0xF44
			/U/f32/0x4/0x18/ // slip
			/M/u32 frame/0x4/0x1C/
		/END/
	/END/
}