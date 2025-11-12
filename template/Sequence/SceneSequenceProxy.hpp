#pragma once

#include "Section.hpp"
#include "SequenceResource.hpp"
#include "SceneSequence.hpp"
#include "../System/SceneID.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SceneSequenceProxy/SIZE@0x60/BASE@Section/BSIZE@0x34/VTABLE@True/
        /M/SequenceResource::SceneSequenceProxyBlock *m_block/0x4/0x34/
        /M/System::SceneID m_scene_id/0x4/0x38/
        /M/u32 m_fade_delay/0x4/0x3C/
        /M/SceneSequence *m_scene_sequence/0x4/0x40/
        /M/u32 m_exit_timer/0x4/0x44/
        /M/u32 m_fade_out_timer/0x4/0x48/
        /M/u8 field_0x4C/0x1/0x4C/
        /M/RaceSys::EDriverID m_driver_id/0x4/0x50/
        /M/RaceSys::EBodyID m_body_id/0x4/0x54/
        /M/RaceSys::ETireID m_tire_id/0x4/0x58/
        /M/RaceSys::EWingID m_wing_id/0x4/0x5C/
    /END/
}