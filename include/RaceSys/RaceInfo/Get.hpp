#pragma once

#include "../ModeManagerBase.hpp"
#include "../RaceDirector.hpp"

#include "../../System/RootSystem.hpp"

namespace RaceSys
{
    static CRaceInfo *GetRaceInfo() { return &System::g_root_system->get_race_director()->m_mode_manager->m_race_info; }
}