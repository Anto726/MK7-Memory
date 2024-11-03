#pragma once

#include "../eItemType.hpp"

#include "../../RaceSys/RaceInfo/Get.hpp"

#define EXTRA_NUM 7
#define DEFAULT_NUM 3
#define NONE_NUM 0

namespace Item
{
    static s32 GetExtraItemNum(eItemType item_type)
    {
        auto const race_info = RaceSys::GetRaceInfo();

        switch (item_type)
        {
        case eItemType::KouraG:
        case eItemType::KouraR:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Koura)
                return EXTRA_NUM;
            return DEFAULT_NUM;

        case eItemType::Banana:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Banana)
                return EXTRA_NUM;
            return DEFAULT_NUM;

        case eItemType::Kinoko:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Kinoko)
                return EXTRA_NUM;
            return DEFAULT_NUM;

        case eItemType::Bomhei:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Bomhei)
                return EXTRA_NUM;
            return DEFAULT_NUM;

        default:
            break;
        }

        return NONE_NUM;
    }
}