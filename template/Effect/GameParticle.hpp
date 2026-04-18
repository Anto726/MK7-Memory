#pragma once

#include "../forward.hpp"
#include "../LibEffect/Particle.hpp"
#include "GameParam.hpp"

BEGIN_NAMESPACE(Effect)
{
    /START_CLASS/NAME@GameParticle/SIZE@0x70/BASE@LibEffect::Particle/BSIZE@0x60/VTABLE@True/
    public:
        virtual ~GameParticle();
        virtual void create();
        virtual void create(const sead::Vector3f &);
        virtual void create(const sead::Matrix34f &);
        virtual void setPos(const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, const sead::Vector3f &);
        virtual void setMtx(const sead::Matrix34f &, f32);
        virtual void kill();
       
        GameParticle(const sead::SafeString &, Kart::InfoProxy *, s32, bool);
        GameParticle(const sead::SafeString &, s32);
        void setKartInfo_PlayerID(s32);

        /M/GameParam m_game_param/0x4/0x60/
        /M/GameParam m_game_param_color/0x4/0x64/
        /M/Kart::InfoProxy *m_kart_info/0x4/0x68/
        /M/bool m_0x6c/0x1/0x6c/
    /END/
}