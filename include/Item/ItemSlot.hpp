#pragma once

#include "../types.hpp"

namespace Item
{
	class ItemSlot
	{
	public:
		u32 gap_0x0[4];
		u8 m_current_status;
		u8 m_previous_status;
		u8 m_0x12;
		u8 m_0x13;
		u8 gap_0x14[16];
		u32 m_0x24;
		u32 m_0x28;
		s32 m_selected_item;
		s32 m_current_item;
		s32 m_next_item;
		u32 m_0x38;
		float m_0x3C;
		s32 m_spinning_frames;
		u32 m_0x44;
	};
	static_assert(sizeof(ItemSlot) == 0x48);
}