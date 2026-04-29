#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "BasePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@RaceModule/SIZE@0x26C/BASE@BasePage/BSIZE@0x26C/VTABLE@True/
    public:
        enum class ReturnCode : s32
        {
            NEXT_00,
            NEXT_01,
            NEXT_02,
            NEXT_03,
            NEXT_04,
            NEXT_05,
            NEXT_06,
            NEXT_07,
            BACK
        };

        virtual void start();
        virtual void complete();
        virtual void exit();
        virtual void onPageEnter();
        virtual void onPageStart();
        virtual void onPageExit();
        virtual bool canFinishFadein();
        virtual bool canFinishFadeout();
        virtual void calcItemIcon();
        virtual void onPageFadein();
        virtual void onPageFadeout();
        virtual void buttonHandler_SelectOn(s32);
        virtual void buttonHandler_OK(s32);
        virtual void onMenuEnter();
        virtual void onMenuStart();
        virtual void onMenuComplete();
        virtual void onMenuExit();

        static void convertReturnCodeImpl(s32);
    /END/
}