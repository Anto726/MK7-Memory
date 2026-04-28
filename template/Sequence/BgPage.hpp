#pragma once

#include "../types.hpp"

#include "Page.hpp"

#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@BgPage/SIZE@0x5C/BASE@Page/BSIZE@0x5C/VTABLE@True/
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

        virtual void *getDTIClassInfo() const; // 0
		virtual void *getDTIClass() const; // 1
        virtual ~BgPage();
        virtual void onGenerateControl(UI::ControlInitializer *);

        static void convertEnterCodeImpl(const sead::SafeString &);
        static void convertReturnCodeImpl(const sead::SafeString &);
        static void convertModeImpl(const sead::SafeString &);
    /END/
}