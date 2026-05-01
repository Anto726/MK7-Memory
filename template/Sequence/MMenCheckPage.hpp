#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "BasePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@MMenCheckPage/SIZE@0x270/BASE@BasePage/BSIZE@0x26C/VTABLE@True/
    public:
        enum class EnterCode : s32
        {
            ENTER_00,
            ENTER_01,
            ENTER_02,
            ENTER_03,
            ENTER_04,
            ENTER_05,
            ENTER_06,
            ENTER_07,
            ENTER_08,
            ENTER_09,
            ENTER_10,
            ENTER_11,
            ENTER_12,
            ENTER_13,
            ENTER_14,
            ENTER_15,
            ENTER_16,
            ENTER_17,
            ENTER_18,
            ENTER_19,
            ENTER_20,
            ENTER_21,
            ENTER_22,
            ENTER_23,
            ENTER_24,
            ENTER_25,
            ENTER_26,
            ENTER_27,
            ENTER_28,
            ENTER_29,
            ENTER_30,
            ENTER_31,
            ENTER_32,
            ENTER_33,
            ENTER_34,
            ENTER_35,
            ENTER_36,
            ENTER_37,
            ENTER_38,
            ENTER_39
        };

        enum class ReturnCode : s32
        {
            RETURN_00,
            RETURN_01,
            RETURN_02,
            RETURN_03,
            RETURN_04,
            RETURN_05,
            RETURN_06,
            RETURN_07,
            RETURN_08,
            RETURN_09,
            RETURN_10,
            RETURN_11,
            RETURN_12,
            RETURN_13,
            RETURN_14,
            RETURN_15,
            RETURN_16,
            RETURN_17,
            RETURN_18,
            RETURN_19,
            RETURN_20,
            RETURN_21,
            RETURN_22,
            RETURN_23,
            RETURN_24,
            RETURN_25,
            RETURN_26,
            RETURN_27,
            RETURN_28,
            RETURN_29,
            RETURN_30,
            RETURN_31,
            RETURN_32,
            RETURN_33,
            RETURN_34,
            RETURN_35,
            RETURN_36,
            RETURN_37,
            RETURN_38,
            RETURN_39
        };

        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~MMenCheckPage();
        virtual void onPagePreStep();
        virtual void onPageEnter();
        virtual bool canFinishFadein();
        virtual bool canFinishFadeout();
        virtual void completePage(s32);

        static void convertEnterCodeImpl(const sead::SafeString &);
        static void convertReturnCodeImpl(s32);

        /M/s32 m_enter_code/0x4/0x26c/
    /END/
}