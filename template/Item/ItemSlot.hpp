#pragma once

#include "../types.hpp"

#include "../Object/Actor.hpp"
#include "../Util/TStateObserver.hpp"

BEGIN_NAMESPACE(Item)
{
	/START_CLASS/NAME@ItemSlot/SIZE@0x48/BASE@Object::Actor/BSIZE@0x8/
	public:
		enum ObserverStatus : u8
        {
            ObserverStatus_Stock = 3,
        };

		/M/Kart::InfoProxy *m_info_proxy/0x4/0x8/
		/M/Util::TStateObserver<Item::ItemSlot> m_state_observer/0x20/0xC/
	/END/
}