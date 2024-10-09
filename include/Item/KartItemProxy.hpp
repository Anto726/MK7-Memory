#pragma once

#include "ItemDirector.hpp"
#include "../System/RootSystem.hpp"

namespace Item
{
    class KartItemProxy
    {
    public:
        KartItemProxy(s32 index) : m_kart_item(System::g_root_system->get_item_director()->m_kart_items.at(index)) {}

        KartItem *m_kart_item;
    };
    static_assert(sizeof(KartItemProxy) == 0x4);
}