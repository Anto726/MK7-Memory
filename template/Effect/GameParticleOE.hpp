#pragma once

#include "../forward.hpp"
#include "../LibEffect/ParticleOE.hpp"
#include "GameParam.hpp"

BEGIN_NAMESPACE(Effect)
{
    /START_CLASS/NAME@GameParticleOE/SIZE@0x78/BASE@LibEffect::ParticleOE/BSIZE@0x64/VTABLE@True/
    public:
        virtual ~GameParticleOE();
        virtual void setPos(const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, f32);
        virtual void kill();
        virtual void vf_0xa4();
        virtual void vf_0xa8();
        virtual void vf_0xac();
        virtual void vf_0xb0();
        virtual void vf_0xb4();
        virtual void vf_0xb8();
        virtual void vf_0xbc();
        virtual void vf_0xc0();
        virtual void vf_0xc4();
        virtual void vf_0xc8();
        virtual void vf_0xcc();
        virtual void vf_0xd0();
        virtual void vf_0xd4();
        virtual void vf_0xd8();
        virtual void vf_0xdc();
        virtual void vf_0xf0();
        virtual void vf_0xf4();
        virtual void vf_0xf8();
        virtual void vf_0xfc();
        virtual void emitParticle(const sead::Vector3f &);
       
        GameParticleOE(const sead::SafeString &, Kart::InfoProxy *, s32, bool);

        /M/GameParam m_game_param/0x4/0x64/
        /M/GameParam m_game_param_color/0x4/0x68/
        /M/Kart::InfoProxy *m_kart_info/0x4/0x6c/
        /M/u8 m_0x70/0x1/0x70/
        /M/u8 m_0x71/0x1/0x71/
        /M/u8 m_0x72/0x1/0x72/
        /M/s32 m_0x74/0x4/0x74/
    /END/
}