#pragma once

#include "../forward.hpp"

#include "eItemSlot.hpp"
#include "eItemType.hpp"

#include "ItemObjDirector/all.hpp"

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

    public:
        u8 m_0x0[40];
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
        u8 m_0x5C[148];
        RaceSys::ModeManagerBase *m_mode_manager_base;
    };
    static_assert(sizeof(ItemDirector) == 0xF4);
}