#pragma once
#include "eItemSlot.hpp"

namespace Item
{
	class ItemSlot
	{
	public:
		u32 m_0x0[4];
		u8 m_0x10;
		u8 m_0x11;
		u8 m_0x12;
		u8 m_0x13;
		u32 m_0x14[4];
		u32 m_0x24;
		u32 m_0x28;
		eItemSlot m_item;
		u32 m_0x30[3];
		float m_0x3C;
		s32 m_frames_to_spin;
		u32 m_0x44;
	};
	static_assert(sizeof(ItemSlot) == 0x48);
}