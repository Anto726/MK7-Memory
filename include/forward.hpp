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
	class ItemObjFlower;
	class ItemObjFlowerDirector;
	class ItemObjGessoDirector;
	class ItemObjKillerDirector;
	class ItemObjKinokoDirector;
	class ItemObjKouraB;
	class ItemObjKouraBDirector;
	class ItemObjKouraG;
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
	class NetData;
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

namespace Menu3D
{
	class GarageDirector;
}

namespace Net
{
	enum class eNetworkBufferType : u8;
	class NetworkBuffer;
	class NetworkEngine;
	class NetworkEventModule;
	class NetworkFriendsManager;
	class NetworkItemEventDataMgr;
	class NetworkReceivedInfo;
	class NetworkSystemInfo;
}

namespace Object
{
	class Actor;
	class Actor3DMdl;
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
	class KDPadAddBase;
	class KDPadInputer;
	class RootScene;
	class RootSystem;
	class Scene;
	enum class SceneID : u8;
	class SceneManager;
}