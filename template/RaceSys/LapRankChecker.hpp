#pragma once

#include <container/seadBuffer.h>

#include "../types.hpp"
#include "../forward.hpp"

BEGIN_NAMESPACE(RaceSys)
{
	/START_CLASS/NAME@LapRankChecker/SIZE@0x3C/BASE@Object::Actor/BSIZE@0x8/VTABLE@True/
	public:
		/START_CLASS/NAME@KartInfo/SIZE@0x44/
		public:
			enum class Flags : u32
			{
				Idle = 1 << 3,
			};

			/M/Kart::InfoProxy *m_info_proxy/0x4/0x0/
			/U/f32/0x4/0x4/
			/U/u32/0x4/0x8/
			/M/u8 m_previous_checkpoint_index/0x1/0xC/
			/M/u8 m_current_checkpoint_index/0x1/0xD/
			/M/s16 m_last_valid_checkpoint_index/0x2/0xE/ // Normally -1, but set to last valid index when going out of checkpoints
			/M/u8 m_key_checkpoint_id/0x1/0x10/
			/U/bool/0x1/0x11/
			/M/f32 m_current_race_progress/0x4/0x14/
			/M/f32 m_max_race_progress/0x4/0x18/
			/M/s32 m_current_lap/0x4/0x1C/ // Zero index
			/M/s32 m_current_rank/0x4/0x20/
			/M/Flags m_flags/0x4/0x24/
			/U/sead::Vector3f/0xC/0x28/
			/U/sead::Vector3f/0xC/0x34/
			/U/u8/0x1/0x40/
		/END/

		virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1

		virtual void init(); // 5
		virtual void calc(); // 6

		/M/u8 m_course_lap_amount/0x1/0x12/
		/M/s32 m_idle_timer_1/0x4/0x20/
		/M/f32 m_idle_timer_2/0x4/0x24/
		/M/sead::Buffer<LapRankChecker::KartInfo> m_kart_infos/0x8/0x28/
	/END/
}