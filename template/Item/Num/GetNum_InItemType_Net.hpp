#pragma once

#include "GetNum_InItemType.hpp"

#include "../../types.hpp"

#define SEVEN_NUM 7
#define STAR_NUM 2

BEGIN_NAMESPACE(Item)
{
    inline s32 GetNum_InItemType_Net(eItemType item_type)
    {
        auto const race_info = RaceSys::GetRaceInfo();
        auto const pattern = is_item_pattern_selected(race_info);

        switch (item_type)
        {
        case eItemType::KouraG:
        case eItemType::KouraR:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Koura)
                return GetNum_InItemType(item_type);
            return GETNUM_DEFAULT_NUM;

        case eItemType::Banana:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Banana)
                return GetNum_InItemType(item_type);
            return GETNUM_DEFAULT_NUM;

        case eItemType::Kinoko:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Kinoko)
                return GetNum_InItemType(item_type);
            return GETNUM_DEFAULT_NUM;

        case eItemType::Bomhei:
            if (race_info->m_item_pattern == RaceSys::EItemPattern::Bomhei)
                return GetNum_InItemType(item_type);
            return GETNUM_DEFAULT_NUM;

        case eItemType::Thunder:
        case eItemType::Flower:
        case eItemType::Tail:
            if (pattern)
                return SINGLE_NUM;
            return FLOWER_NUM;

        case eItemType::Seven:
            return SEVEN_NUM;

        case eItemType::KinokoP:
            return KINOKOP_NUM;

        case eItemType::Star:
            return STAR_NUM;
        
        case eItemType::KouraB:
        case eItemType::Gesso:
        case eItemType::Killer:
            return SINGLE_NUM;

        case eItemType::FakeBox:
        case eItemType::BigKinoko:
            return NONE_NUM;

        default:
            break;
        };

        return INVALID_NUM;
    }
}