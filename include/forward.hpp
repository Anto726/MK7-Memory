#pragma once
#include "types.hpp"

namespace Effect
{
	class KartEffect;
}

namespace Item
{
	enum class eItemSlot : u8;
	enum class eItemType : u8;
	class ItemDirector;
	class ItemObjBananaDirector;
	class ItemObjBase;
	class ItemObjBomheiDirector;
	class ItemObjDirectorBase;
	class ItemObjFlowerDirector;
	class ItemObjGessoDirector;
	class ItemObjKillerDirector;
	class ItemObjKinokoDirector;
	class ItemObjKouraBDirector;
	class ItemObjKouraGDirector;
	class ItemObjKouraR;
	class ItemObjKouraRDirector;
	class ItemObjSevenDirector;
	class ItemObjStarDirector;
	class ItemObjTailDirector;
	class ItemObjThunderDirector;
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

namespace Net
{
	class NetworkBuffer;
	class NetworkEngine;
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