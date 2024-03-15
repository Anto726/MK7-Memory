#pragma once

#include "../forward.hpp"

#include "ActorEngine.hpp"

namespace Object
{
    class CharacterEngine : public ActorEngine
    {
    public:
        struct Collection
        {
            u8 gap_0x0[16];
            Kart::Director *m_kart_director;
            u8 gap_0x14[8];
            RaceSys::RaceDirector *m_race_director;
            u8 gap_0x20[24];
            Item::ItemDirector *m_item_director;
        };
        static_assert(sizeof(Collection) == 0x3C);

    public:
        u8 gap_0x8[20];
        Collection *m_collection;
    };
    static_assert(sizeof(CharacterEngine) == 0x20);
}