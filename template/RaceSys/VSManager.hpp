#pragma once

#include "../forward.hpp"

#include "ModeManagerRace.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@VSManager/SIZE@0x518/BASE@ModeManagerRace/BSIZE@0x518/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual void *getRuntimeTypeInfo() const;
    /END/
}