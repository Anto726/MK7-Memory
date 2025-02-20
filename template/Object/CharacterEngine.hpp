#pragma once

#include "../forward.hpp"

#include "ActorEngine.hpp"

namespace Object
{
    /START_CLASS/NAME@CharacterEngine/SIZE@0x20/BASE@ActorEngine/BSIZE@0x8/
    public:
        /START_STRUCT/NAME@Collection/SIZE@0x3C/
            /M/Kart::Director *m_kart_director/0x4/0x10/
            /M/Field::FieldDirector *m_field_director/0x4/0x14/
            /M/RaceSys::RaceDirector *m_race_director/0x4/0x1C/
            /M/Item::ItemDirector *m_item_director/0x4/0x38/
        /END/

    public:
        /M/Collection *m_collection/0x4/0x1C/
    /END/
}