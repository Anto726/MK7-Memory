#pragma once

#include "../../forward.hpp"
#include "../../types.hpp"

#include "../../Object/Actor3DMdl.hpp"
#include "../../Object/ArgumentObj.hpp"

#include <math/seadVectorFwd.h>

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@ItemObjBase/SIZE@0x1F8/BASE@Object::Actor3DMdl/BSIZE@0x58/VTABLE@True/
    public:
        virtual void *getDTIClassInfo() const { return {}; }; // 0
		virtual void *getDTIClass() const { return {}; }; // 1

		virtual void create(Object::ArgumentObj const *) {}; // 4
		virtual void init() = 0; // 5
		virtual void calc() = 0; // 6

        virtual bool isEquip() const { return {}; }; // 18
        virtual bool isEquip_Hang() const { return {}; }; // 19
        virtual bool isEquip_Multi() const { return {}; }; // 20

        virtual s32 getMultiID() const { return {}; }; // 21
        virtual float *getColRadius() const { return {}; }; // 22
        virtual float *getBoxColRadius() const { return {}; }; // 23
        virtual void *getColScale() const { return {}; }; // 24
        virtual u32 getSoundActorType() const { return {}; }; // 25

        virtual void calc_HitGnd(void const *) {}; // 26
        virtual void calc_HitWall(void const *) {}; // 27

        virtual void exit_Lava() {}; // 28
        virtual void setStateStand() {}; // 29

        virtual void _0x78() = 0; // 30

        virtual void initEntryInner_Before() {}; // 31

        virtual void _0x80() = 0; // 32
        virtual void _0x84() = 0; // 33

        virtual void exit_VanishInner() {}; // 34
        virtual void exit_BreakInner() {}; // 35
        virtual void exitInner() {}; // 36

        virtual void react_BreakInner() {}; // 37
        virtual void react_VanishInner() {}; // 38
        virtual void react_ReflectInner(sead::Vector3f const &, sead::Vector3f const &, bool) {}; // 39

        //virtual void _0xA0() = 0; // 40 | Stripped

        virtual void stateInitSelfMoveImpl() {}; // 41

        virtual bool hasCollision_InUseState() const { return {}; }; // 42
        virtual float *getShadowScale() const { return {}; }; // 43
        virtual float *getPressOffsetY_Shadow() const { return {}; }; // 44
        virtual bool hasLight() const { return {}; }; // 45
        virtual float *getOffset_Hang_Y() const { return {}; }; // 46
        virtual float *getOffset_Multi_Y() const { return {}; }; // 47
        virtual float *getOffset_Multi_Z() const { return {}; }; // 48
        virtual float *getRotVelRatio_Multi() const { return {}; }; // 49
        virtual float *getRadius_Multi() const { return {}; }; // 50
        virtual char const *getVanishEffectName() const { return {}; }; // 51

        virtual void stateInitWait() {}; // 52
        virtual void stateWait() {}; // 53
        virtual void stateInitEquip_Hang() {}; // 54
        virtual void stateEquip_Hang() {}; // 55
        virtual void stateInitEquip_Multi() {}; // 56
        virtual void stateEquip_Multi() {}; // 57
        virtual void stateInitSelfMove() {}; // 58
        virtual void stateSelfMove() {}; // 59
        virtual void stateInitDrop() {}; // 60
        virtual void stateDrop() {}; // 61
        virtual void stateInitStand() {}; // 62
        virtual void stateStand() {}; // 63
        virtual void stateInitUse() {}; // 64
        virtual void stateUse() {}; // 65
        virtual void stateInitAttacked() {}; // 66
        virtual void stateAttacked() {}; // 67

        virtual void _0x110() = 0; // 68
        virtual void _0x114() = 0; // 69

        /M/sead::Vector3f m_position/0xC/0xA8/
        /M/float m_gravity/0x4/0xD0/
        /M/eItemType m_item_type/0x1/0x156/
        /M/Kart::InfoProxy *m_info_proxy/0x4/0x158/
        /M/s32 m_item_id/0x4/0x160/
        /M/s32 m_owner_player_id/0x4/0x164/
        /M/bool m_is_dropped/0x1/0x1AE/
    /END/
}