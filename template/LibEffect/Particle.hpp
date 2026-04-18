#pragma once

#include "../types.hpp"

#include <gfx/seadColor.h>
#include <heap/seadDisposer.h>
#include <math/seadMatrix.h>
#include <prim/seadSafeString.hpp>
#include <math/seadVector.h>

BEGIN_NAMESPACE(LibEffect)
{
    /START_CLASS/NAME@Particle/SIZE@0x60/BASE@sead::IDisposer/BSIZE@0x10/VTABLE@True/
    public:
        virtual ~Particle();
        virtual void create();
        virtual void create(const sead::Vector3f &);
        virtual void create(const sead::Matrix34f &);
        virtual void setPos(const sead::Vector3f &);
        virtual void setPos(const sead::Vector3f &, const sead::Vector3f &);
        virtual void vf_0x1c();
        virtual void setMtx(const sead::Matrix34f &, const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, f32);
        virtual void setMtx_RemoveScale(const sead::Matrix34f &);
        virtual void vf_0x2c();
        virtual void vf_0x30();
        virtual bool isAlive() const;
        virtual void kill();
        virtual void vf_0x3c();
        virtual void fade();
        virtual void vf_0x44();
        virtual void vf_0x48();
        virtual void setEmissionRatio(f32);
        virtual void setEmissionInterval(f32);
        virtual void vf_0x54();
        virtual void setParticleScale(f32);
        virtual void setParticleScale(f32, f32);
        virtual void vf_0x60();
        virtual void vf_0x64();
        virtual void vf_0x68();
        virtual void vf_0x6c();
        virtual void vf_0x70();
        virtual void vf_0x74();
        virtual void setAlpha(f32);
        virtual void setColor(f32, f32, f32);
        virtual void setColor(const sead::Color4f &);
        virtual sead::Color4f getColor() const;
        virtual void vf_0x88();
        virtual void vf_0x8c();
        virtual void setDirectionalVel(f32);
        virtual void vf_0x94();
        virtual void vf_0x98();
        virtual void vf_0x9c();
        virtual void setAddVel(const sead::Vector3f &);
       
        Particle(const sead::SafeString &, s32);

        /M/s32 m_emitter_set_id/0x4/0x10/
        /M/s32 m_0x14/0x4/0x14/
        /M/s32 m_emitter_set_idx/0x4/0x18/
        /M/s32 m_0x24/0x4/0x24/
        /M/sead::Matrix34f m_matrix/0x30/0x28/
        /M/s32 m_0x58/0x4/0x58/
        /M/s32 m_0x5c/0x4/0x5c/
    /END/
}