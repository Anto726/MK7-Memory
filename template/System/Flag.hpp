#pragma once

#include "../types.hpp"
#include "../versions.h"

#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"
#include "../RaceSys/EGrandPrixID.hpp"
#include "../System/ESequenceOpenFlag.hpp"

BEGIN_NAMESPACE(System::Flag)
{
    // NOTE: Name is made up
    enum class EUnlockMode : u8 {
        BEATEN_STREETPASS_MII = 1,
        GOLD_STANDARD,
        GOLD_GLIDER,
        GOLD_TIRES,
        UNLOCK_PARTS_VIA_COINS
    };

    /START_CLASS/NAME@Checker/SIZE@0x2C/
    public:
        void init();
#if GAME_VERSION != ALL_DLP
        void checkUnlockCup();                                // 0x00453370 (VERSION_USA_REV1)
        void checkUnlockDriver();                             // 0x004527b0 (VERSION_USA_REV1)
        void setupUnlockables();                              // 0x0045307c (VERSION_USA_REV1)
        void setupUnlockablesByCoins();                       // 0x00452c58 (VERSION_USA_REV1)
        void setupUnlockAfterBeatingStreetPassMii();          // 0x00453370 (VERSION_USA_REV1)
#endif

        /M/s32 m_unlock_cup/0x4/0x0/
        /M/RaceSys::EDriverID m_unlock_driver/0x4/0x4/
        /M/System::ESequenceOpenFlag m_sequence_open_flag/0x4/0x8/
        /M/EUnlockMode m_unlock_mode/0x1/0xc/
        /M/s32 m_unlock_coin_num/0x4/0x10/
        /M/RaceSys::EBodyID m_unlock_body/0x4/0x14/
        /M/RaceSys::ETireID m_unlock_tire/0x4/0x18/
        /M/RaceSys::EWingID m_unlock_wing/0x4/0x1c/
        // Used when unlocking vehicle parts by beating StreetPass Miis
        /M/RaceSys::EBodyID m_streetpass_mii_body/0x4/0x20/
        /M/RaceSys::ETireID m_streetpass_mii_tire/0x4/0x24/
        /M/RaceSys::EWingID m_streetpass_mii_wing/0x4/0x28/
    /END/

    /START_STRUCT/NAME@PlayerDataContext/SIZE@0x8/
        void addPlayerDataNetAuto();

        /M/u16 m_player_flags_driver/0x2/0x0/
        /M/u16 m_player_flags_body/0x2/0x2/
        /M/u16 m_player_flags_tire/0x2/0x4/
        /M/u16 m_player_flags_wing/0x2/0x6/
    /END/

    void SetPrepared(RaceSys::EBodyID);
    void SetPrepared(RaceSys::ETireID);
    void SetPrepared(RaceSys::EWingID);
    void SetPrepared(RaceSys::EDriverID);
    bool IsOpen(RaceSys::EGrandPrixID);
    bool IsOpen(System::ESequenceOpenFlag);
    bool IsOpen_(RaceSys::EBodyID, u16);
    bool IsOpen_(RaceSys::ETireID, u16);
    bool IsOpen_(RaceSys::EWingID, u16);
    bool IsOpen_(RaceSys::EDriverID, u16);
    void SetOpen(System::ESequenceOpenFlag);
}
