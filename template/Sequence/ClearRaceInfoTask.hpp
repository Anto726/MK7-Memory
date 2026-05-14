#pragma once

#include "../types.hpp"

#include "InstantTask.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@ClearRaceInfoTask/SIZE@0x54/BASE@InstantTask/BSIZE@0x54/VTABLE@True/
    public:
        enum class EnterCode : s32
        {
            BOOT,
            FROM_FRIEND_LIST,
            DLC,
            TITLE_TOP,
            SINGLETA_CHARA,
            SINGLETA_COURSE,
            SINGLEBB_COURSE,
            SINGLEBC_COURSE,
            MULTIBB_COURSE,
            MULTIBC_COURSE,
            MULTIVS_COURSE,
            WIFI_MATCHING,
            SINGLE_TOP,
            MULTI_TOP,
            WIFI_TOP,
            FROM_TITLE_DEMO,
            COMMU_TOP,
            COMMU_COURSE,
            COMMU_LOBBY,
            DIRECT_WIFI
        };

        enum class ReturnCode : s32
        {
            BOOT,
            FROM_FRIEND_LIST,
            DLC,
            TITLE_TOP,
            SINGLETA_CHARA,
            SINGLETA_COURSE,
            SINGLEBB_COURSE,
            SINGLEBC_COURSE,
            MULTIBB_COURSE,
            MULTIBC_COURSE,
            MULTIVS_COURSE,
            WIFI_MATCHING,
            SINGLE_TOP,
            MULTI_TOP,
            WIFI_TOP,
            FROM_TITLE_DEMO,
            COMMU_TOP,
            COMMU_COURSE,
            COMMU_LOBBY,
            DIRECT_WIFI
        };

        enum class Mode : s32
        {
            DEFAULT
        };

        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~ClearRaceInfoTask();
        virtual u8 onTaskMain();

        static void clearRaceInfo();
        static void clearCommuInfo();
        static void clearRaceInfoTA();
        static void clearResultHandle();
        static void clearBoot();

        static void convertEnterCodeImpl(const sead::SafeString &);
        static void convertReturnCodeImpl(s32);
        static void convertModeImpl(const sead::SafeString &);
    /END/
}