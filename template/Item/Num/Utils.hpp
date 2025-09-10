#pragma once

#include "../../RaceSys/RaceInfo/CRaceInfo.hpp"
#include "../../types.hpp"

namespace MK7MEMORY_NAMESPACE {
    inline auto is_item_pattern_selected(RaceSys::CRaceInfo *race_info)
    {
        return race_info->m_item_pattern == RaceSys::EItemPattern::Koura || race_info->m_item_pattern == RaceSys::EItemPattern::Banana || race_info->m_item_pattern == RaceSys::EItemPattern::Kinoko || race_info->m_item_pattern == RaceSys::EItemPattern::Bomhei;
    }
}

