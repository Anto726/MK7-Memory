#pragma once

#include "types.hpp"

BEGIN_NAMESPACE(Effect)
{
	class KartEffect;
}

BEGIN_NAMESPACE(Field)
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

BEGIN_NAMESPACE(Item)
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

BEGIN_NAMESPACE(Kart)
{
	class Camera;
	class Director;
	class Driver;
	class InfoProxy;
	class KartPartsCustomedParam;
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

BEGIN_NAMESPACE(Menu3D)
{
	class GarageDirector;
}

BEGIN_NAMESPACE(Net)
{
	class NetworkBuffer;
	class NetworkBufferController;
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
	class NetworkStationBufferManager;
}

BEGIN_NAMESPACE(Object)
{
	class Actor;
	class Actor3DMdl;
	class ActorEngine;
    class ActorVisitor;
	class CharacterEngine;
}

BEGIN_NAMESPACE(RaceSys)
{
	class CRaceInfo;
	class CRaceMode;
	class CTime;
	class KartInfo;
	class LapRankChecker;
	class ModeManagerBase;
	class RaceDirector;
}

BEGIN_NAMESPACE(Sequence)
{
	class BaseRacePage;
	class MenuData;
	class RacePage;
	class SequenceEngine;
	class SequenceResource;
	class Section;
	class LayeredSequence;
	class SequenceLayer;
}

BEGIN_NAMESPACE(Sound){
	class SndActorKart;
	class SndActorBase;
	class SndHandle;
}

BEGIN_NAMESPACE(System)
{
	class EngineHolder;
	class GameSetting;
	class KDPadAddBase;
	class KDPadInputer;
	class PlayerData;
	struct PlayerDataNoMii;
	class ResourceLoader;
	class RootScene;
	class RootSystem;
	class Scene;
	class SceneManager;
	class SystemEngine;
	struct SystemSaveData;
}

BEGIN_NAMESPACE(UI)
{
	class BgRaceMapBombControl;
	class BgRaceMapCharaControl;
	class MessageData;
	class MessageIDConverter;
	class MessageWriter;
	class TimeControl;
}