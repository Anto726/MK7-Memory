#pragma once

#include "GameParticleOE.hpp"

BEGIN_NAMESPACE(Effect)
{
    /START_CLASS/NAME@GameParticleInvalidOE/SIZE@0x78/BASE@GameParticleOE/BSIZE@0x78/VTABLE@True/
    public:
        virtual ~GameParticleInvalidOE();
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
    /END/
}