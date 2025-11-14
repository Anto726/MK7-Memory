#pragma once

#include "../types.hpp"

#include "../Net/NetworkItemSlotMgr.hpp"
#include "../Object/Actor.hpp"
#include "../Util/TStateObserver.hpp"

BEGIN_NAMESPACE(Item)
{
	/START_CLASS/NAME@ItemSlot/SIZE@0x48/BASE@Object::Actor/BSIZE@0x8/
	public:
		enum ObserverStatus : u8
        {
			ObserverStatus_Empty,
			ObserverStatus_Spin,
			ObserverStatus_LastSpin,
            ObserverStatus_Stock,
        };

		/M/Kart::InfoProxy *m_info_proxy/0x4/0x8/
		/M/Util::TStateObserver<ItemSlot> m_state_observer/0x20/0xC/
		/M/eItemSlot m_item_id/0x1/0x2C/
		/M/s32 m_current_id/0x4/0x30/
		/M/s32 m_next_id/0x4/0x34/
		/M/float m_ratio/0x4/0x38/
		/M/float m_0x3C_speed/0x4/0x3C/
		/M/s32 m_spinning_frames/0x4/0x40/
		/M/Net::NetworkItemSlotMgr::EStockItemState m_stock_item_state/0x4/0x44/
	/END/
}