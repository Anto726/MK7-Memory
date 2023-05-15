#pragma once
#include "../fwddec.hpp"
#include "ActorEngine.hpp"

namespace Object
{
    class CharacterEngine : public ActorEngine
    {
    public:
        struct Collection
        {
            u8 m_0x0[28];
            RaceSys::RaceDirector *m_race_director;
        };
        static_assert(sizeof(Collection) == 0x20);

    public:
        u8 m_0x8[20];
        Collection *m_collection;
    };
    static_assert(sizeof(CharacterEngine) == 0x20);
}