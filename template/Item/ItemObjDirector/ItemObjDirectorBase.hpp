#pragma once

#include "../../Object/Actor.hpp"
#include "../../types.hpp"

#include <math/seadVectorFwd.h>

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@ItemObjDirectorBase/SIZE@0xBC/BASE@Object::Actor/BSIZE@0x8/
    public:
        virtual void *getDTIClassInfo() const { return {}; }; // 0
        virtual void *getDTIClass() const { return {}; }; // 1

        virtual ~ItemObjDirectorBase() {}; // 2 (_sub_object), 3 (_deallocating)

        virtual void create(Object::ArgumentObj const *) {}; // 4
		virtual void init() = 0; // 5
		virtual void calc() = 0; // 6

		virtual void render() {}; // 7
		virtual void renderMainL() {}; // 8
		virtual void renderMainR() {}; // 9
		virtual void renderSub() {}; // 10

        virtual void _0x2C() = 0; // 11

        virtual void accept(Object::ActorVisitor *) {}; // 12

        virtual void _0x38() = 0; // 14

        virtual void initOuter() {}; // 16

        virtual void _0x44() = 0; // 17

        virtual void createBeforeStructure(void const *) {}; // 18
        virtual void createAfterStructure(void const *) {}; // 19
        virtual void initBeforeStructure() {}; // 20
        virtual void initAfterStructure() {}; // 21
        virtual void calcBeforeStructure() {}; // 22
        virtual void calcAfterStructure() {}; // 23
        
        virtual void renderBeforeStructure() {}; // 24
        virtual void renderAfterStructure() {}; // 25
        virtual void renderMainLBeforeStructure() {}; // 26
        virtual void renderMainLAfterStructure() {}; // 27
        virtual void renderMainRBeforeStructure() {}; // 28
        virtual void renderMainRAfterStructure() {}; // 29
        virtual void renderSubBeforeStructure() {}; // 30
        virtual void renderSubAfterStructure() {}; // 31

        virtual ItemObjBase *entry(Kart::InfoProxy *, bool, int) { return {}; }; // 32
        virtual size_t getNum() const { return {}; }; // 33
        virtual bool isEquip_Multi(s32) { return {}; }; // 34
        virtual size_t setState_SelfMove(s32, bool, sead::Vector2f const &) { return {}; }; // 35
        virtual void dropEquip_Multi(s32) {}; // 36

        virtual void _0x94() = 0; // 37

        virtual void vanishEquip_Multi(int, bool) {}; // 38
        virtual void setDelayFrame(int, int) {}; // 39

    /END/
}