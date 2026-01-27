#pragma once

#include "../types.hpp"

#include "../Object/Actor.hpp"
#include "../Object/ActorEngine.hpp"
#include "../Object/TDirectorList.hpp"

BEGIN_NAMESPACE(Render)
{
    /START_CLASS/NAME@RenderEngine/SIZE@0xDC/BASE@Object::TDirectorList<Object::Actor, Object::ActorEngine>/BSIZE@0x1C/
	public:
        // NOTE: guessed name
        /START_STRUCT/NAME@SDirectorList/SIZE@0x44/
            /M/UIDrawDirector *m_ui_draw_director/0x4/0x20/
            /M/void *m_fog_manager/0x4/0x28/
            /M/Effect::ParticleDrawer *m_particle_drawer/0x4/0x30/
            /M/void *m_depth_buffer_reader/0x4/0x40/
        /END/

        using creator_t = void (*)(RenderEngine *, SDirectorList *);
        
        /M/SDirectorList *m_director_list/0x4/0x1C/
        /M/creator_t m_creator_list[8]/0x20/0x20/
    /END/
}