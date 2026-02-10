#pragma once

#include "VehicleMove.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@VehicleReact/SIZE@0x123C/BASE@VehicleMove/BSIZE@0x1214/
	public:
		enum class EAcdType : u8
		{
			PipeFall = 0x0,
			Fireball = 0x1,
			Flipper = 0x2,
			NoSounds = 0x3,
			Spin1 = 0x4,
			Spin2 = 0x5,
			FirePillar = 0x6,
			KoopaZapper = 0x7,
			Thunder = 0x8,
			_0x9 = 0x9,
			CrashDir = 0xA,
			CrashDirBig = 0xB,
			DokanWarp = 0xC,
			CrashLR = 0xD,
			CrashLRBig = 0xE,
			CrashFwd = 0xF,
			CrashHop = 0x10,
			Freeze = 0x11,
			Dummy = 0x12,
			MAX = 0x13,
		};
		
		enum class ECallType : u32
		{

		};

		enum class ESpinType
		{

		};
	/END/
}