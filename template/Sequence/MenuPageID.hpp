#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Sequence)
{
    // Unknown name
    enum class MenuPageID : u32
    {
        MenuTitle=1,
        MenuSingle_Mode=2,
        MenuSingle_Class=3,
        MenuSingle_Chara=4,
        MenuSingle_Kart=5,
        MenuSingle_Cup=6,
        MenuSingle_Course=7,
        MenuSingle_CourseBattle=8,
        MenuSingle_Setting=9,
        MenuSingle_Ghost=10,
        MenuSingle_GhostLoad=11,
        MenuMulti_Group=12,
        MenuMulti_Waiting=13,
        MenuMulti_DlplaySequence=14,
        MenuMulti_Mode=15,
        MenuMulti_Class=16,
        MenuMulti_Chara=17,
        MenuMulti_Kart=18,
        MenuMulti_VSSetting=19,
        MenuMulti_Cup=20,
        MenuMulti_Course=21,
        MenuMulti_CourseBattle=22,
        MenuMulti_CourseVote=23,
        MenuMulti_CourseDL=24,
        MenuWiFi_Connect=25,
        MenuWiFi_ModeOpponent=26,
        MenuWiFi_Mode=27,
        MenuWifi_Chara=28,
        MenuWiFi_Kart=29,
        MenuWiFi_Waiting=30,
        MenuWiFi_WaitingDecide=31,
        MenuWiFi_Confirm=32,
        MenuWiFi_Cup=33,
        MenuWiFi_Course=34,
        MenuWiFi_CourseBattle=35,
        MenuWiFi_CourseVote=36,
        MenuWiFi_Friend=37,
        MenuWiFi_Community=38, // Unused?
        MenuCommunity_Top=39,
        MenuCommunity_Enter=40,
        MenuCommunity_Lobby=41,
        PAGE_2A=42, // Unused?
        MenuCommunity_Search=43,
        MenuCommunity_SearchConfirm=44,
        MenuCommunity_CreateMark=45,
        MenuCommunity_CreateName=46,
        MenuCommunity_CreateRule=47,
        MenuCommunity_CreateComment=48,
        MenuCommunity_CreateFinish=49,
        MenuCommunity_Chara=50,
        MenuChannel_Top=51,
        MenuChannel_ShowMii=52,
        MenuChannel_CecMii=53,
        MenuChannel_CecList=54,
        MenuChannel_SetupTop=55,
        MenuChannel_SetupMii=56,
        MenuChannel_SetupComment=57,
        MenuChannel_SetupMachine=58,
        MenuChannel_SetupGP=59,
        MenuChannel_SetupSetting=60
    };

}