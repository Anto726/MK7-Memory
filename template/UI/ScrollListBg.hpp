#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "../versions.h"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@ScrollListBg/SIZE@0xAC/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~ScrollListBg();
        virtual void onCalc();
        virtual void onReset();

        /M/ScrollListFrame *m_frame/0x4/0xa8/
    /END/
#endif
}