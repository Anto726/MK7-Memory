#pragma once

#include "Unit.hpp"

#include "../System/RootSystem.hpp"

#include <container/seadPtrArray.h>

namespace Kart
{
    /START_CLASS/NAME@Director/SIZE@0x1A0/
    public:
        Vehicle *getKart(s32 index) { return m_units(index)->m_vehicle; }

        /M/sead::PtrArray<Unit> m_units/0xC/0x24/
    /END/

    inline static auto GetDirector()
    {
        return System::g_root_system->get_kart_director();
    }
}