#pragma once

#include <container/seadBuffer.h>

#include "../types.hpp"
#include "../forward.hpp"

BEGIN_NAMESPACE(RaceSys)
{
	/START_CLASS/NAME@LapRankChecker/SIZE@0x3C/
	public:
		/START_CLASS/NAME@KartInfo/SIZE@0x44/
		public:
			/M/Kart::InfoProxy* m_kart/0x4/0x0/
			/M/u8 m_checkpoint_index/0x1/0xD/
			// Normally -1, but set to last valid index when going out of checkpoints
			/M/s16 m_last_valid_checkpoint_index/0x2/0xE/
			/M/u8 m_key_checkpoint_id/0x1/0x10/
			/M/float m_current_race_progress/0x4/0x14/
			/M/float m_max_race_progress/0x4/0x18/
			// Zero index
			/M/int m_current_lap/0x4/0x1C/
			/M/u32 m_flags/0x4/0x24/
		/END/

		/M/u8 m_course_lap_amount/0x1/0x12/
		/M/int m_idle_timer_1/0x4/0x20/
		/M/float m_idle_timer_2/0x4/0x24/
		/M/sead::Buffer<LapRankChecker::KartInfo> m_kart_infos/0x8/0x28/
	/END/
}