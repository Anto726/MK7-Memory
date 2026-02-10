#pragma once

#include "../../forward.hpp"
#include "../../types.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIControlBase/SIZE@0x50/VTABLE@True/
    public:
        virtual void init() {}; // 0
        virtual void update() {}; // 1
        virtual void initAfterManager() {}; // 2

        virtual void setStartDashTypeToKart() {}; // 3

        virtual void onOutOfBoundsInner(Field::MapdataJugemPoint *) {}; // 4
        virtual bool onAIFall() { return {}; }; // 5
        virtual void onPlayerGoal() {}; // 6
        virtual void onCpuGoal() {}; // 7

        virtual void startKiller() {}; // 8

        virtual AIRank *getAIRank() { return {}; }; // 9
        virtual AIBlockLine *getAIBlockLine() { return {}; }; // 10

        virtual void setBattleType() {}; // 11
        virtual void setAIRankTopOfPlayer(AIRank *) {}; // 12
        virtual void setDoNotSelectBackward(bool) {}; // 13

        virtual bool isAllStopAfterGoal() { return {}; }; // 14
        virtual bool isFocusCoin() { return {}; }; // 15

        virtual void doUpdate_(DriveInfo *) {}; // 16

        virtual void setBasicDriveInfo_() {}; // 17
        
        /M/AIInfo *m_ai_info/0x4/0x4/
        /M/AI *m_ai/0x4/0x8/
        /M/AIManager *m_ai_manager/0x4/0xC/
        /M/AIPathHandler *m_ai_path_handler/0x4/0x10/
        /M/AIProbabilityBase *m_ai_probability/0x4/0x14/
        /M/AIPathPoint *m_ai_path_point/0x4/0x18/
        /M/AIItemBase *m_ai_item/0x4/0x1C/
        /M/AIAutoSteer *m_ai_auto_steer/0x4/0x20/
        /M/AIDriftDrive *m_ai_drift_drive/0x4/0x24/
        /M/AIStuck *m_ai_stuck/0x4/0x28/
        /M/AIPathManager *m_ai_path_manager/0x4/0x2C/
        /M/DriveInfo *m_drive_info/0x4/0x30/
        /M/Field::MapdataCheckPointAccessor *m_check_point_accessor/0x4/0x34/
        /M/Field::MapdataEnemyPointAccessor *m_enemy_point_accessor/0x4/0x38/
        /M/System::KDPlayerRecordPad *m_kd_player_record_pad/0x4/0x3C/
        /M/sead::Vector2f m_stick/0x8/0x40/
        /M/u32 m_0x48/0x4/0x48/
        /M/s32 m_player_id/0x4/0x4C/
    /END/
}