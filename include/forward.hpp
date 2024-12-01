#pragma once

namespace Effect
{
	class KartEffect;
}

namespace Field
{
	class CourseInfo;
	class FieldDirector;
	class MapdataAreaAccessor;
	class MapdataCameraAccessor;
	class MapdataCannonPointAccessor;
	class MapdataCheckPathAccessor;
	class MapdataCheckPointAccessor;
	class MapdataCourseAccessor;
	class MapdataEnemyPathAccessor;
	class MapdataEnemyPointAccessor;
	class MapdataGeoObjAccessor;
	class MapdataGlidePointAccessor;
	class MapdataGlidePathAccessor;
	class MapdataItemPathAccessor;
	class MapdataItemPointAccessor;
	class MapdataJugemPointAccessor;
	class MapdataMissionPointAccessor;
	class MapdataPathAccessor;
	class MapdataStageAccessor;
	class MapdataStartPointAccessor;
}

namespace Item
{
	class ItemDirector;
	class ItemObjBananaDirector;
	class ItemObjBase;
	class ItemObjBomheiDirector;
	class ItemObjDirectorBase;
	class ItemObjFlower;
	class ItemObjFlowerDirector;
	class ItemObjGesso;
	class ItemObjGessoDirector;
	class ItemObjKiller;
	class ItemObjKillerDirector;
	class ItemObjKinokoDirector;
	class ItemObjKouraB;
	class ItemObjKouraBDirector;
	class ItemObjKouraG;
	class ItemObjKouraGDirector;
	class ItemObjKouraR;
	class ItemObjKouraRDirector;
	class ItemObjSevenDirector;
	class ItemObjStar;
	class ItemObjStarDirector;
	class ItemObjTailDirector;
	class ItemObjThunderDirector;
	class ItemSlot;
	class KartItem;
	class KartItemProxy;
}

namespace Kart
{
	class Director;
	class InfoProxy;
	struct NetData;
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
	class NetworkBuffer;
	class NetworkEngine;
	class NetworkErrorHandler;
	class NetworkEventModule;
	class NetworkFriendsManager;
	class NetworkGameMgr;
	class NetworkItemEventDataMgr;
	class NetworkPlayerData;
	class NetworkPlayerDataManager;
	class NetworkReceivedInfo;
	class NetworkSelectMenuProcess;
	class NetworkSystemInfo;
}

namespace Object
{
	class Actor;
	class Actor3DMdl;
	class ActorEngine;
    class ActorVisitor;
	class CharacterEngine;
}

namespace RaceSys
{
	class CRaceInfo;
	class CRaceMode;
	class LapRankChecker;
	class ModeManagerBase;
	class RaceDirector;
}

namespace Sequence
{
	class BaseRacePage;
	class MenuData;
	class SequenceEngine;
}

namespace System
{
	class EngineHolder;
	class GameSetting;
	class KDPadAddBase;
	class KDPadInputer;
	class PlayerData;
	struct PlayerDataNoMii;
	class RootScene;
	class RootSystem;
	class Scene;
	class SceneManager;
	class SystemEngine;
	struct SystemSaveData;
}

namespace UI
{
	class BgRaceMapBombControl;
	class BgRaceMapCharaControl;
	class MessageData;
	class MessageIDConverter;
	class MessageWriter;
}