#pragma once

#include "../common.hpp"
#include "../forward.hpp"
#include "../types.hpp"

#include "EAILevel.hpp"

BEGIN_NAMESPACE(Enemy)
{
    /START_CLASS/NAME@AIManager/SIZE@0xA8/
        /M/AIRankManager *m_ai_rank_manager/0x4/0x0/
        /M/AIPathManager *m_ai_path_manager/0x4/0x4/
        /M/AIParamLoader *m_ai_param_loader/0x4/0x8/
        /M/AIObjectManager *m_ai_object_manager/0x4/0xC/
        /M/AIBattleManager *m_ai_battle_manager/0x4/0x10/
        /M/Utility::Random *m_utility_random/0x4/0x14/
        /M/s32 m_kart_num/0x4/0x18/
        /M/s32 m_player_kart_num/0x4/0x1C/
        /M/s32 m_0x20/0x4/0x20/ // gamer type 1?
        /M/s32 m_0x24/0x4/0x24/ // gamer type 2?
        /M/s32 m_player_num/0x4/0x28/
        /M/EAILevel m_ai_level/0x4/0x2C/
        /M/AI *m_ais[KART_MAX]/0x20/0x38/
        /M/AI *m_ai_order[KART_MAX]/0x20/0x58/
        /M/AI *m_player_ais[KART_MAX]/0x20/0x78/
        /M/AI *m_0x98_ai/0x4/0x98/
        /M/bool m_team_mode/0x1/0xA4/
	/END/
}