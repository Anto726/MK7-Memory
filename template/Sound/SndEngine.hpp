#pragma once

#include "../Object/ActorEngine.hpp"
#include "../Object/TDirectorList.hpp"

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Sound)
{
    /START_CLASS/NAME@SndEngine/SIZE@0xB0/BASE@Object::TDirectorList<SndBase, Object::ActorEngine>/BSIZE@0x1C/
    public:
        // NOTE: guessed name
        /START_STRUCT/NAME@SDirectorList/SIZE@0x20/
        /END/

        using creator_t = void (*)(SndEngine *, SDirectorList *);

        /M/SDirectorList *m_director_list/0x4/0x84/
    /END/
}