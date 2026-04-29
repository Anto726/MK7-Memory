#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "../Object/Actor.hpp"
#include "../Object/ArgumentObj.hpp"

#include "GameParticle.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Effect)
{
    /START_CLASS/NAME@KartEffect/SIZE@0x834/BASE@Object::Actor/BSIZE@0x8/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1

        virtual void create(Object::ArgumentObj const *); // 4
		virtual void init(); // 5
		virtual void calc(); // 6

        /M/sead::FixedPtrArray<GameParticle, 116> m_particles/0x1DC/0x14/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0x1f0/
        /M/RaceSys::CRaceInfo *m_race_info/0x4/0x1f4/
        /M/s32 m_player_id/0x4/0x1f8/
        /M/Kart::InfoProxy *m_info_proxy/0x4/0x1fc/
        /M/Item::KartItemProxy *m_item_proxy/0x4/0x200/
        /M/bool m_was_drifting/0x1/0x204/
        /M/bool m_stop_drift/0x1/0x205/
        /M/bool m_is_drifting/0x1/0x206/
        /M/bool m_was_miniturbo_over_lvl_1/0x1/0x207/
        /M/bool m_was_miniturbo_over_lvl_2/0x1/0x208/
        /M/bool m_display_miniturbo_lvl_1/0x1/0x209/
        /M/bool m_display_miniturbo_lvl_2/0x1/0x20a/
        /M/bool m_is_miniturbo_over_lvl_1/0x1/0x20b/
        /M/bool m_is_miniturbo_over_lvl_2/0x1/0x20c/
        /M/bool m_is_first_person/0x1/0x6d4/
        /M/bool m_was_first_person/0x1/0x6d5/
        /M/bool m_is_detail/0x1/0x775/
        // If `true`, then, when in 1st person, when drifting,
        // only the road drift smoke will be visible in the tire of the side the player is drifting to
        /M/bool m_only_display_drift_sparks_in_one_side_fp/0x1/0x830/
        /M/bool m_is_visible/0x1/0x831/
    /END/
}