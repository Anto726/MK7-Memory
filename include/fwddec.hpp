#pragma once
#include "types.hpp"

namespace Item
{
	enum class eItemSlot : u8;
	class ItemDirector;
	class ItemSlot;
	class KartItem;
}

namespace Kart
{
	class Director;
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
	class Actor;
	class ActorEngine;
    class ActorVisitor;
	class CharacterEngine;
	enum class EEngineType : u32;
}

namespace RaceSys
{
	class LapRankChecker;
	class ModeManagerBase;
	class RaceDirector;
}

namespace System
{
	class EngineHolder;
	class RootScene;
	class RootSystem;
	class Scene;
	class SceneManager;
}