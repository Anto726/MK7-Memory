#pragma once

#include "Unit.hpp"

#include "../System/RootSystem.hpp"

#include <container/seadPtrArray.h>

namespace Kart
{
    class Director
    {
    public:
        Vehicle *getKart(s32 index) { return m_units(index)->m_vehicle; }

        u8 gap_0x0[0x24];
        sead::PtrArray<Unit> m_units;
        u8 gap_0x30[0x170];
    };
    static_assert(sizeof(Director) == 0x1A0);

    inline static auto GetDirector()
    {
        return System::g_root_system->get_kart_director();
    }
}