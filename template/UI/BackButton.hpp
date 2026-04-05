#pragma once

#include "../types.hpp"

#include "BaseMenuButtonControl.hpp"
#include "EKeyID.hpp"

#include <prim/seadDelegate.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BackButtonB/SIZE@0x240/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        virtual ~BackButtonB();

        void animOuter(bool);

        /M/s32 m_on_back_return_code_replacement/0x4/0x23c/
    /END/

    /START_CLASS/NAME@BackButton/SIZE@0x240/BASE@BackButtonB/BSIZE@0x240/VTABLE@True/
    public:
        virtual ~BackButton();
    /END/

    /START_CLASS/NAME@BackButtonT/SIZE@0x250/BASE@BackButtonB/BSIZE@0x240/VTABLE@True/
    public:
        virtual ~BackButtonT();
        virtual void onCreate(const Control::CreateArg *);

        void onKeyHandlerB(s32, EKeyID);

        /M/sead::Delegate2<BackButtonT, s32, EKeyID> m_on_key_handler_b/0x10/0x240/
    /END/
}