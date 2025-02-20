#pragma once

#include "../forward.hpp"

#include "eItemSlot.hpp"
#include "eItemType.hpp"

#include "ItemObjDirector/all.hpp"

#include "../System/RootSystem.hpp"

#include <container/seadPtrArray.h>

namespace Item
{
    /START_CLASS/NAME@ItemDirector/SIZE@0xF4/BASE@Object::Actor/BSIZE@0x8/
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

        /M/ItemObjBananaDirector *m_banana_director/0x4/0x28/
        /M/ItemObjKouraGDirector *m_kourag_director/0x4/0x2C/
        /M/ItemObjKouraRDirector *m_kourar_director/0x4/0x30/
        /M/ItemObjBomheiDirector *m_bomhei_director/0x4/0x34/
        /M/ItemObjGessoDirector *m_gesso_director/0x4/0x38/
        /M/ItemObjStarDirector *m_star_director/0x4/0x3C/
        /M/ItemObjThunderDirector *m_thunder_director/0x4/0x40/
        /M/ItemObjKillerDirector *m_killer_director/0x4/0x44/
        /M/ItemObjKouraBDirector *m_kourab_director/0x4/0x48/
        /M/ItemObjFlowerDirector *m_flower_director/0x4/0x4C/
        /M/ItemObjTailDirector *m_tail_director/0x4/0x50/
        /M/ItemObjKinokoDirector *m_kinoko_director/0x4/0x54/
        /M/ItemObjSevenDirector *m_seven_director/0x4/0x58/
        /M/sead::PtrArray<KartItem> m_kart_items/0xC/0xC0/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0xF0/
    /END/

    inline static auto GetDirector()
    {
        return System::g_root_system->get_item_director();
    }
}