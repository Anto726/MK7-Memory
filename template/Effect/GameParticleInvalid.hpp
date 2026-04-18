#pragma once

#include "GameParticle.hpp"

BEGIN_NAMESPACE(Effect)
{
    /START_CLASS/NAME@GameParticleInvalid/SIZE@0x70/BASE@GameParticle/BSIZE@0x70/VTABLE@True/
    public:
        virtual ~GameParticleInvalid();
        virtual void create();
        virtual void create(const sead::Vector3f &);
        virtual void setPos(const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, f32);
        virtual void setMtx_RemoveScale(const sead::Matrix34f &);
        virtual bool isAlive() const;
        virtual void kill();
        virtual void fade();
        virtual void setEmissionRatio(f32);
        virtual void setEmissionInterval(f32);
        virtual void setParticleScale(f32);
        virtual void setParticleScale(f32, f32);
        virtual void setAlpha(f32);
        virtual void setColor(f32, f32, f32);
        virtual void setColor(const sead::Color4f &);
        virtual sead::Color4f getColor() const;
        virtual void setDirectionalVel(f32);
        virtual void setAddVel(const sead::Vector3f &);
       
        GameParticleInvalid();
    /END/
}