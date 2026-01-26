#pragma once

#include "../types.hpp"

#include "Unit.hpp"

#include "../Object/TDirectorArray.hpp"
#include "../Object/TLinkSocket.hpp"

#include "../System/RootSystem.hpp"

#include <container/seadBuffer.h>

BEGIN_NAMESPACE(Kart)
{
    /START_CLASS/NAME@Director/SIZE@0x1A0/BASE@Object::TDirectorArray<Object::Actor, Object::TLinkSocket<Object::Actor, Object::Actor>>/BSIZE@0x28/
    public:
        Vehicle *getKart(s32 index) { return m_units(index)->m_vehicle; }

        /M/sead::Buffer<Unit *> m_units/0x8/0x28/
    /END/

    inline static auto GetDirector()
    {
        return System::g_root_system->get_kart_director();
    }
}