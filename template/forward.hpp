#pragma once

#include "types.hpp"

BEGIN_NAMESPACE(BoxCol)
{
	class Manager;
	class Unit;
}

BEGIN_NAMESPACE(CSVUtil)
{
	class CSVParam;
}

BEGIN_NAMESPACE(Demo)
{
	class DemoCameraDirector;
}

BEGIN_NAMESPACE(Effect)
{
	class GameEffectDirector;
	class GameParticle;
	class KartEffect;
}

BEGIN_NAMESPACE(Enemy)
{
	class AI;
	class AIInfo;
	class AIManager;
	class AIParamLoader;
	class AIPathHandler;
}

BEGIN_NAMESPACE(Field)
{
	class CourseInfo;
	class FieldDirector;
	class MapdataAreaAccessor;
	class MapdataAreaCalcBase;
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
	class ObjectDirector;
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
	class ItemReactProxy;
	class ItemSlot;
	class ItemSlotTable;
	class KartItem;
	class KartItemProxy;
}

BEGIN_NAMESPACE(Jugem)
{
	class Director;
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

BEGIN_NAMESPACE(KDGndCol)
{
	class Manager;
}

BEGIN_NAMESPACE(Menu3D)
{
	class GarageDirector;
	class ModelCreateManager;
	class SimpleModelManager;
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
	class BattleObjectMgrBase;
	class CharacterEngine;
	class Trophy3DModelManager;
}

BEGIN_NAMESPACE(RaceSys)
{
	class CRaceInfo;
	class CRaceMode;
	class CTime;
	class KartInfo;
	class LapRankChecker;
	class LogRecorder;
	class ModeManagerBase;
	class RaceDirector;
}

BEGIN_NAMESPACE(Render)
{
	class DrawMdl;
	class ShadowVolume;
}

BEGIN_NAMESPACE(Sequence)
{
	class Page;
	class BaseRacePage;
	class MenuData;
	class RacePage;
	class SequenceEngine;
	class DashSequenceEngine;
	class SequenceResource;
	class Section;
	class LayeredSequence;
	class SequenceLayer;
	class DelegateSequence;
	class ParallelSequence;
	class SerialSequence;
	class CrossFadeSequence;
	class SceneSequence;
	class SceneSequenceProxy;
	class SectionClassInfoBase;
	class PracticalSection;
	class ExecutableSection;
}

BEGIN_NAMESPACE(Sound)
{
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

BEGIN_NAMESPACE(Util)
{
	class Shape;
}