#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "KDThread.hpp"

BEGIN_NAMESPACE(System)
{
    // Size 0x51D0 in VERSION_EUR_DLP
    /START_CLASS/NAME@SaveDataManager/SIZE@0x51D8/BASE@KDThread/BSIZE@0xA4/VTABLE@True/
    public:
        enum class ECommand : u8
        {
            INITIALIZE = 1,
            SAVE_SYSTEM,
            COMMAND_3,
            LOAD_GHOST,
            SAVE_GHOST,
            FORMAT,
            LOAD_GHOST_LIST
        };

        // NOTE: Name is made up
        enum class EErrorCode : s32
        {
            INITIALIZE = 1,
            SAVE_SYSTEM,
            COMMAND_3,
            LOAD_GHOST,
            SAVE_GHOST,
            FORMAT,
            LOAD_GHOST_LIST
        };

        virtual ~SaveDataManager();
        virtual void calcInner_(s32);

        SaveDataManager(BackupManager *);
        EErrorCode loadGhost_();
        EErrorCode saveGhost_();
        EErrorCode initialize_();
        EErrorCode loadSystem_();
        EErrorCode saveSystem_();
        EErrorCode startCommand(ECommand);
        EErrorCode loadGhostList_();
        EErrorCode getSystemIndexes(s32 *, s32 *);
        EErrorCode format_();
    /END/

    SaveDataManager *GetSaveDataManager();
}