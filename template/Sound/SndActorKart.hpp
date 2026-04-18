#pragma once

#include "../types.hpp"

#include "SndActorBase.hpp"
#include "SndHandle.hpp"
#include "../Kart/Vehicle/Vehicle.hpp"

BEGIN_NAMESPACE(Sound)
{
    /START_CLASS/NAME@SndActorKart/BASE@SndActorBase/SIZE@0x204/BSIZE@0xD8/
    public:
        virtual void startSound(u32, Sound::SndHandle*);
        virtual void holdSound(u32, Sound::SndHandle*);
        
        /M/s8 m_horn_timer/0x1/0x181/
        /M/s8 m_horn_counter/0x1/0x182/
        /M/Sound::SndHandle m_0x1c4/0x4/0x1c4/
        /M/Kart::Vehicle* m_vehicle/0x4/0x1E0/
        /U/bool/0x1/0x1F1/
        /M/s8 m_miniturbo_level/0x1/0x1FC/
        /U/bool/0x1/0x1FE/
    /END/
}