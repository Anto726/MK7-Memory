#pragma once

#include "../Object/Actor.hpp"
#include "../Util/TStateObserver.hpp"

namespace Item
{
	class ItemSlot : public Object::Actor
	{
	public:
		enum ObserverStatus : u8
        {
            ObserverStatus_Stock = 3,
        };

		Kart::InfoProxy *m_info_proxy;
		Util::TStateObserver<Item::ItemSlot> m_state_observer;
		u8 gap_0x2C[0x1C];
	};
	static_assert(sizeof(ItemSlot) == 0x48);
}