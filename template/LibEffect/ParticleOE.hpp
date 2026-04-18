#pragma once

#include "../types.hpp"

#include "Particle.hpp"

BEGIN_NAMESPACE(LibEffect)
{
    /START_CLASS/NAME@ParticleOE/SIZE@0x64/BASE@Particle/BSIZE@0x60/VTABLE@True/
    public:
        virtual ~ParticleOE();
        virtual void create();
        virtual void create(const sead::Vector3f &);
        virtual void kill();
        virtual void fade();
        virtual void setEmissionInterval(f32);
       
        ParticleOE(const sead::SafeString &, s32);
        void emitParticle(const sead::Vector3f &);

        /M/f32 m_emission_interval/0x4/0x60/
    /END/
}