#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "Page.hpp"

#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@TimerPage/SIZE@0x60/BASE@Page/BSIZE@0x5C/VTABLE@True/
    public:
        enum class EnterCode : s32
        {
            DEFAULT
        };

        enum class ReturnCode : s32
        {
            DEFAULT
        };

        enum class Mode : s32
        {
            DEFAULT
        };

        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~TimerPage();
        virtual void step();
        virtual void onGenerateControl(UI::ControlInitializer *);
        virtual void onPageEnter();

        TimerPage();
        void startCount(u32);
        void eraseTimer();
        void resetCount();
        bool isTimerStart();
        bool isTimeupComplete();
        bool isTimeUp();

        static void convertEnterCodeImpl(const sead::SafeString &);
        static void convertReturnCodeImpl(const sead::SafeString &);
        static void convertModeImpl(const sead::SafeString &);

        /M/UI::SelectTimer *m_select_timer/0x4/0x5c/
    /END/
}