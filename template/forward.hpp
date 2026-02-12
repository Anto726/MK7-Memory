#pragma once

#include "types.hpp"

BEGIN_NAMESPACE(BoxCol)
{
	class Manager;
	class Unit;
}

BEGIN_NAMESPACE(Camera)
{
	class CameraEngine;
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
	class ParticleDrawer;
}

BEGIN_NAMESPACE(Enemy)
{
	class DriveInfo;
	class AIStuck;
	class AIRank;
	class AIProbabilityBase;
	class AIPathPoint;
	class AIPathManager;
	class AIPathHandler;
	class AIParamLoader;
	class AIManager;
	class AIItemBase;
	class AIInfo;
	class AIDriftDrive;
	class AIBlockLine;
	class AIAutoSteer;
	class AI;
}

BEGIN_NAMESPACE(Field)
{
	class ClipContext;
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
	class MapdataJugemPoint;
	class MapdataJugemPointAccessor;
	class MapdataMissionPointAccessor;
	class MapdataPathAccessor;
	class MapdataStageAccessor;
	class MapdataStartPointAccessor;
	class ObjectDirector;
	class QuadTree;
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
	class Switch;
	class SwitchCountDown;
	class SwitchGoal;
	class SwitchLap;
	class SwitchLift;
	class SwitchReverse;
	class Unit;
}

BEGIN_NAMESPACE(Kart)
{
	class Camera;
	class Director;
	class DispBody;
	class DispKiller;
	class DispWing;
	class Driver;
	class InfoProxy;
	class KartPartsCustomedParam;
	struct NetData;
	class PartsDriveParam;
	class ReplayInfo;
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

BEGIN_NAMESPACE(Mii)
{
	class Face;
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
	class Actor3DMdlList;
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
	class RaceTimer;
}

BEGIN_NAMESPACE(Render)
{
	BEGIN_NAMESPACE(RaceLight)
	{
		class LightObj;
	}

	class DrawMdl;
	class RenderEngine;
	class ShadowVolume;
	class UIDrawDirector;
}

BEGIN_NAMESPACE(Sequence)
{
	class BaseRacePage;
	class CrossFadeSequence;
	class DashSequenceEngine;
	class DelegateSequence;
	class ExecutableSection;
	class LayeredSequence;
	class MenuData;
	class Page;
	class ParallelSequence;
	class PracticalSection;
	class RacePage;
	class SceneSequence;
	class SceneSequenceProxy;
	class Section;
	class SectionClassInfoBase;
	class SequenceEngine;
	class SequenceLayer;
	class SequenceResource;
	class SerialSequence;
}

BEGIN_NAMESPACE(Sound)
{
	class SndActorBase;
	class SndActorItem;
	class SndActorKart;
	class SndHandle;
}

BEGIN_NAMESPACE(System)
{
	class BootRenderThread;
	class ControllerBase;
	class EngineHolder;
	class GameFramework;
	class GameSetting;
	class KDAIPad;
	class KDPadAddBase;
	class KDPadInputer;
	class KDPlayerRecordPad;
	class PlayerData;
	class ResourceLoader;
	class RootScene;
	class RootSystem;
	class Scene;
	class SceneManager;
	class SystemEngine;
	class ThreadManager;
	struct PlayerDataNoMii;
	struct SystemSaveData;
}

BEGIN_NAMESPACE(UI)
{
	class BgRaceMapBombControl;
	class BgRaceMapCharaControl;
	class BgRaceMapControl;
	class MessageData;
	class MessageIDConverter;
	class MessageWriter;
	class TimeControl;
}

BEGIN_NAMESPACE(Util)
{
	class Shape;
}