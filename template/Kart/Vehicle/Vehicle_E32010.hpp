#pragma once

#include "../../types.hpp"
#include "../../versions.h"

#include <math/seadVector.hpp>

#if GAME_VERSION == VERSION_E3_2010

// TODO: Figure out inheritance tree, if possible, comparing with final.
BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@Vehicle/SIZE@0xB00/
	public:
		/M/sead::Vector3f *m_pos/0x4/0x44/
        /M/f32 m_miniturbo_charge/0x4/0x2a4/
        /M/f32 m_speed/0x4/0x2ac/
        /M/f32 m_speed_ratio/0x4/0x2b0/
        /M/sead::Vector3f m_rotation/0xc/0x2b4/
        /M/u32 m_boost_duration/0x4/0x2d8/
        /M/bool m_accelerating/0x1/0x2dc/
        /M/bool m_breaking/0x1/0x2dd/
        /M/bool m_drifting_1/0x1/0x2de/
        /M/bool m_drifting_2/0x1/0x2df/
        /M/sead::Vector2f m_stick/0x8/0x2e4/
	/END/
}

#endif
