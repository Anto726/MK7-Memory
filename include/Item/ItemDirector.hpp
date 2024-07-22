#pragma once

#include "../forward.hpp"

#include "eItemSlot.hpp"
#include "eItemType.hpp"

#include "ItemObjDirector/all.hpp"

#include <container/seadPtrArray.h>

namespace Item
{
    class ItemDirector
    {
    public:
        ItemObjDirectorBase *getDirector_FromItemSlot(eItemSlot item)
        {
            switch (item)
            {
            case eItemSlot::Banana:
            case eItemSlot::Banana3:
                return m_banana_director;
            case eItemSlot::KouraG:
            case eItemSlot::KouraG3:
                return m_kourag_director;
            case eItemSlot::KouraR:
            case eItemSlot::KouraR3:
                return m_kourar_director;
            case eItemSlot::Kinoko:
            case eItemSlot::Kinoko3:
            case eItemSlot::KinokoP:
                return m_kinoko_director;
            case eItemSlot::Bomhei:
                return m_bomhei_director;
            case eItemSlot::Gesso:
                return m_gesso_director;
            case eItemSlot::KouraB:
                return m_kourab_director;
            case eItemSlot::Star:
                return m_star_director;
            case eItemSlot::Killer:
                return m_killer_director;
            case eItemSlot::Thunder:
                return m_thunder_director;
            case eItemSlot::Flower:
                return m_flower_director;
            case eItemSlot::Tail:
                return m_tail_director;
            case eItemSlot::Seven:
                return m_seven_director;
            default:
                return nullptr;
            }
        }

        ItemObjDirectorBase *getDirector_FromItemType(eItemType item)
        {
            switch (item)
            {
            case eItemType::KouraG:
                return m_kourag_director;
            case eItemType::KouraR:
                return m_kourar_director;
            case eItemType::Banana:
                return m_banana_director;
            case eItemType::Kinoko:
                return m_kinoko_director;
            case eItemType::Star:
                return m_star_director;
            case eItemType::KouraB:
                return m_kourab_director;
            case eItemType::Thunder:
                return m_thunder_director;
            case eItemType::Bomhei:
                return m_bomhei_director;
            case eItemType::Gesso:
                return m_gesso_director;
            case eItemType::Killer:
                return m_killer_director;
            case eItemType::Flower:
                return m_flower_director;
            case eItemType::Tail:
                return m_tail_director;
            case eItemType::Seven:
                return m_seven_director;
            default:
                return nullptr;
            }
        }

        // NOTE: not part of symbols. Extracted from Item::ItemDirector::_calcInvalidFlag.
        inline static eItemType getItemType_FromItemSlot(eItemSlot item)
        {
            switch (item)
            {
                case eItemSlot::Banana:
                case eItemSlot::Banana3:
                    return eItemType::Banana;
                case eItemSlot::KouraG:
                case eItemSlot::KouraG3:
                    return eItemType::KouraG;
                case eItemSlot::KouraR:
                case eItemSlot::KouraR3:
                    return eItemType::KouraR;
                case eItemSlot::Kinoko:
                case eItemSlot::Kinoko3:
                    return eItemType::Kinoko;
                case eItemSlot::Bomhei:
                    return eItemType::Bomhei;
                case eItemSlot::Gesso:
                    return eItemType::Gesso;
                case eItemSlot::KouraB:
                    return eItemType::KouraB;
                case eItemSlot::Star:
                case eItemSlot::Test3:
                case eItemSlot::Test4:
                    return eItemType::Star;
                case eItemSlot::Killer:
                    return eItemType::Killer;
                case eItemSlot::Thunder:
                    return eItemType::Thunder;
                case eItemSlot::KinokoP:
                    return eItemType::KinokoP;
                case eItemSlot::Flower:
                    return eItemType::Flower;
                case eItemSlot::Tail:
                    return eItemType::Tail;
                case eItemSlot::Seven:
                    return eItemType::Seven;
                default:
                    return eItemType::INVALID;
            }
        }

        u8 gap_0x0[0x28];
        ItemObjBananaDirector *m_banana_director;
        ItemObjKouraGDirector *m_kourag_director;
        ItemObjKouraRDirector *m_kourar_director;
        ItemObjBomheiDirector *m_bomhei_director;
        ItemObjGessoDirector *m_gesso_director;
        ItemObjStarDirector *m_star_director;
        ItemObjThunderDirector *m_thunder_director;
        ItemObjKillerDirector *m_killer_director;
        ItemObjKouraBDirector *m_kourab_director;
        ItemObjFlowerDirector *m_flower_director;
        ItemObjTailDirector *m_tail_director;
        ItemObjKinokoDirector *m_kinoko_director;
        ItemObjSevenDirector *m_seven_director;
        u8 gap_0x5C[0x64];
        sead::PtrArray<KartItem> m_kart_items;
        u8 gap_0xCC[0x24];
        RaceSys::ModeManagerBase *m_mode_manager;
    };
    static_assert(sizeof(ItemDirector) == 0xF4);
}