#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "ActorEngine.hpp"
#include "TDirectorList.hpp"

#include "../Util/TLinkList.hpp"

BEGIN_NAMESPACE(Object)
{
    /START_CLASS/NAME@CharacterEngine/SIZE@0x54/BASE@TDirectorList<Actor, ActorEngine>/BSIZE@0x1C/
    public:
        // NOTE: unknown struct name
        /START_STRUCT/NAME@Collection/SIZE@0x58/
            /M/KDGndCol::Manager *m_gnd_col_manager/0x4/0x8/
            /M/BoxCol::Manager *m_box_col_manager/0x4/0xC/
            /M/Kart::Director *m_kart_director/0x4/0x10/
            /M/Field::FieldDirector *m_field_director/0x4/0x14/
            /M/Field::ObjectDirector *m_object_director/0x4/0x18/
            /M/RaceSys::RaceDirector *m_race_director/0x4/0x1C/
            /M/Effect::GameEffectDirector *m_game_effect_director/0x4/0x2C/
            /M/Demo::DemoCameraDirector *m_demo_camera_director/0x4/0x34/
            /M/Item::ItemDirector *m_item_director/0x4/0x38/
            /M/Jugem::Director *m_jugem_director/0x4/0x40/
            /M/BattleObjectMgrBase *m_battle_object_mgr_base/0x4/0x44/
            /M/Menu3D::GarageDirector *m_garage_director/0x4/0x48/
            /M/Menu3D::ModelCreateManager *m_model_create_manager/0x4/0x4C/
            /M/Menu3D::SimpleModelManager *m_simple_model_manager/0x4/0x50/
            /M/Trophy3DModelManager *m_trophy_3d_model_manager/0x4/0x54/
        /END/

        using creator_t = void (*)(CharacterEngine *, Collection *);

        /M/Collection *m_collection/0x4/0x1C/
        /M/creator_t f_creators[8]/0x20/0x20/
        /M/Util::TLinkList<Actor3DMdlList> m_link_list/0x14/0x40/
    /END/
}