#pragma once

#include "../eItemType.hpp"

#include "../../RaceSys/RaceInfo/Get.hpp"

#include "Utils.hpp"

#define OTHER_PATTERN_NUM 24
#define KOURA_PATTERN_NUM 16
#define GESSO_NUM 9
#define DEFAULT_NUM 8
#define KINOKOP_NUM 5
#define FLOWER_NUM 3
#define SINGLE_NUM 1
#define NONE_NUM 0
#define INVALID_NUM -1

namespace Item
{
    s32 GetNum_InItemType(eItemType item_type)
    {
        auto const race_info = RaceSys::GetRaceInfo();
        auto const pattern = is_item_pattern_selected(race_info);

        switch (item_type)
        {
        case eItemType::KouraG:
        case eItemType::KouraR:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Koura)
                return KOURA_PATTERN_NUM;
            return DEFAULT_NUM;

        case eItemType::Banana:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Banana)
                return OTHER_PATTERN_NUM;
            return DEFAULT_NUM;

        case eItemType::Kinoko:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Kinoko)
                return OTHER_PATTERN_NUM;
            return DEFAULT_NUM;

        case eItemType::Bomhei:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Bomhei)
                return OTHER_PATTERN_NUM;
            return DEFAULT_NUM;

        case eItemType::Gesso:
            if (pattern)
                return SINGLE_NUM;
            return GESSO_NUM;

        case eItemType::Thunder:
        case eItemType::Killer:
        case eItemType::Tail:
            if (pattern)
                return SINGLE_NUM;  
            return DEFAULT_NUM;

        case eItemType::Flower:
            if (pattern)
                return SINGLE_NUM;
            return FLOWER_NUM;

        case eItemType::Star:
            return DEFAULT_NUM;

        case eItemType::KinokoP:
            return KINOKOP_NUM;

        case eItemType::KouraB:
            return SINGLE_NUM;

        case eItemType::FakeBox:
        case eItemType::BigKinoko:
        case eItemType::Seven:
            return NONE_NUM;
        };

        return INVALID_NUM;
    }
}