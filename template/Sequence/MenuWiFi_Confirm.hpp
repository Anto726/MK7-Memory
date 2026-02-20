#pragma once

#include "../types.hpp"

#include "BaseMenuPage.hpp"
#include "../UI/MenuButton.hpp"
#include "../UI/MenuOneMessage.hpp"
#include "../UI/MenuWifiPlayerName.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@MenuWifi_Confirm/SIZE@0x2c8/BASE@BaseMenuPage/BSIZE@0x26C/VTABLE@True/
    public:
        enum class ReturnCode : s32
        {
            RACE,
            BALLOON_BATTLE,
            COIN_RUNNERS
        };

        MenuWifi_Confirm();
        // TODO
        // ??? getDTIClassInfo() const;
        // ??? getDTIClass() const;
        ~MenuWifi_Confirm(); // 2 (_sub_object), 3 (_deallocating)
        void initControl();
        void onPageEnter();
        void onPagePreStep();
        void onPageComplete();
        void onTimeUpComplete(s32);

        static char* convertReturnCodeImpl(ReturnCode returnCode) {
            switch (returnCode) {
                case ReturnCode::RACE:
                    return "Race";
                case ReturnCode::BALLOON_BATTLE:
                    return "BalloonBattle";
                case ReturnCode::COIN_RUNNERS:
                    return "CoinBattle";
                default:
                    return "";
            }
        }
        
        /M/UI::MenuOneMessage *m_menu_one_message/0x4/0x294/
        /M/sead::FixedPtrArray<UI::MenuWifiPlayerName, 8> m_players_array/0x2c/0x298/
        /M/UI::MenuButton *m_ok_button/0x4/0x2c4/
    /END/
}