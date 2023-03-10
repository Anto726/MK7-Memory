#pragma once
#include "types.hpp"

namespace Item
{
	enum class eItemSlot : u8;
	class ItemSlot;
	class KartItem;
}

namespace Kart
{
	class InfoProxy;
	class Rigid;
	class Unit;
	class Vehicle;
	class VehicleBase;
	class VehicleControl;
	class VehicleControlAI;
	class VehicleControlNet;
	class VehicleMove;
	class VehicleReact;
}

namespace Object
{
    class ActorVisitor;
}

namespace RaceSys
{
	class LapRankChecker;
}