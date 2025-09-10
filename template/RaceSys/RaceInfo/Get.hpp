#pragma once

#include "../../types.hpp"

#include "../ModeManagerBase.hpp"
#include "../RaceDirector.hpp"

#include "../../System/RootSystem.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    static CRaceInfo *GetRaceInfo() { return &System::g_root_system->get_race_director()->m_mode_manager->m_race_info; }
}