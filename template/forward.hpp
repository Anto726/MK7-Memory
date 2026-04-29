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
	class KartCameraDirector;
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
	class EffectEngine;
	class GameEffectDirector;
	class GameParticle;
	class KartEffect;
	class ParticleDrawer;
}

BEGIN_NAMESPACE(Enemy)
{
	class AI;
	class AIAutoSteer;
	class AIBattleManager;
	class AIBlockLine;
	class AIControlBase;
	class AIDriftDrive;
	class AIInfo;
	class AIItemBase;
	class AIManager;
	class AIObjectManager;
	class AIParamLoader;
	class AIParamLoader;
	class AIPathHandler;
	class AIPathManager;
	class AIPathManager;
	class AIPathPoint;
	class AIProbabilityBase;
	class AIRank;
	class AIRankManager;
	class AISpeedRaceBase;
	class AIStuck;
	class DriveInfo;
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
	class GhostVisible;
	class WingPathData;
	class PullPathData;
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
	class MiiEngine;
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
	class DTIClassInfo;
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
	class ModeManagerBattle;
	class RaceDirector;
	class RaceTimer;
}

BEGIN_NAMESPACE(Render)
{
	namespace RaceLight
	{
		class LightObj;
	}

	class DrawMdl;
	class RenderEngine;
	class ShadowVolume;
	class UIDrawDirector;
	class UIDrawDirectorFast;
	class UIDrawDirectorProxy;
}

BEGIN_NAMESPACE(Sequence)
{
	class BgPage;
	class BasePage;
	class BaseRacePage;
	class BaseMenuPage;
	class Common_SystemDialog;
	class CrossFadeSequence;
	class DashSequenceEngine;
	class DashSectionClassManager;
	class DummyPage;
	class DelegateSequence;
	class ExecutableSection;
	class LayeredSequence;
	class MenuData;
	class MenuTitle;
	class NetworkErrorChecker;
	class Page;
	class ParallelSequence;
	class PracticalSection;
	class RacePage;
	class SceneSequence;
	class SceneSequenceProxy;
	class Section;
	class SectionDirector;
	class SectionClassManager;
	class SectionClassInfoBase;
	class SequenceEngine;
	class SequenceLayer;
	class SequenceResource;
	class SerialSequence;
	class TimerPage;
}

BEGIN_NAMESPACE(Sound)
{
	class SndActorBase;
	class SndActorItem;
	class SndActorKart;
	class SndBase;
	class SndBgm;
	class SndEngine;
	class SndHandle;
	class SndSceneBase;
	class SndSceneBoot;
	class SndSceneDemo;
	class SndSceneEnding;
	class SndSceneMenu;
	class SndSceneRace;
	class SndSceneThankyou;
	class SndSceneTrophy;
	class SndSysSe;
}

BEGIN_NAMESPACE(System)
{
	class KDPlayerPad;
	class BackgroundLoadThread;
	class BackgroundThread;
	class BackupManager;
	class BootRenderThread;
	class ControllerBase;
	class EngineHolder;
	class GameFramework;
	class GameSetting;
	class GhostSaveData;
	class GhostSaveDataHeader;
	class KDAIPad;
	class KDPad;
	class KDPadAddBase;
	class KDPadControllerCore;
	class KDPadDirector;
	class KDPadInputer;
	class KDPadPlayer;
	class KDPlayerRecordPad;
	class KDReplayPad;
	class KDUIPad;
	class KDThread;
	class MobiClipThread;
	class MobiClipThreadProxy;
	class PlayerData;
	class ResourceLoader;
	class RootScene;
	class RootSystem;
	class SaveDataManager;
	class Scene;
	class SceneManager;
	class SystemEngine;
	class ThreadManager;
	struct PlayerDataNoMii;
	struct SystemSaveData;
	class VideoDrawerThread;
}

BEGIN_NAMESPACE(UI)
{
	class BackButton;
	class BackButtonB;
	class BackButtonT;
	class BgRaceMapBombControl;
	class BgRaceMapCharaControl;
	class BgRaceMapControl;
	class Control;
	class ControlAnimator;
	class ControlInitializer;
	class ControlSight;
	class CursorMove;
	class NullControlSight;
	class NwlytControlSight;
	class NwlytDummyControlSight;
	class NwlytDivControlSight;
	class NwlytDivPartControlSight;
	class NwlytDivRootControlSight;
	class NwlytControlAnimator;
	class NwlytDivControlAnimator;
	class NwlytResourceAccessor;
	class MenuButton;
	class MenuButtonMch;
	class MessageData;
	class MessageIDConverter;
	class MessageWriter;
	class OKButton;
	class OKButton2;
	class OKButton3;
	class TimeControl;
	class TitleInfoIcon;
	class TitleInfoIcon2;
	class Page;
	class GraphicResourceInfo;
	class ControlDirector;
	class ControlInitializer;
	class Manipulator;
	class BaseMenuButtonControl;
	class BaseMenuInputControl;
	class CursorItem;
	class TouchItem;
	class SelectTimer;
	class RaceRankNameControl;
	class BgRaceMapLoopControl;
}

BEGIN_NAMESPACE(Util)
{
	class Shape;
}

BEGIN_NAMESPACE(Utility)
{
	class Random;
}