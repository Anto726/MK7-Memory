#pragma once

#include "ItemObj/ItemObjBase.hpp"

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@ItemReactProxy/SIZE@0xC/
    public:
        ItemObjBase::eColMode getColMode() const { return m_item_obj->m_col_mode; }
        sead::Vector3f *getMove() const { return &m_item_obj->m_move; }
        s32 getOwnerID() const { return m_item_obj->m_owner_player_id; }
        sead::Vector3f *getPos() const { return &m_item_obj->m_position; }
        eItemType getType() const { return m_item_obj->m_item_type; }

        Kart::InfoProxy *getPlayerKart() { return m_item_obj->m_info_proxy; }

        /M/ItemObjBase *m_item_obj/0x4/0x0/
        /M/BoxCol::Unit *m_unit/0x4/0x4/
        /M/Util::Shape *m_shape/0x4/0x8/
    /END/
}