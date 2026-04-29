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
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~SceneSequenceProxy(); // 2 (_sub_object), 3 (_deallocating)
        virtual void accept(Object::ActorVisitor &);
        virtual s32 getSectionType() const;    // See `SectionType` in `SequenceResource.hpp`
        virtual bool isCompletable() const;
        virtual bool isSyncFadein() const;
        virtual s32 getFadeFelay() const;
        virtual u32 updateState();
        virtual void step();
        virtual void ready();
        virtual void enter(Section::EFadeKind, u32);
        virtual void standby();
        virtual void start();
        virtual void complete();
        virtual void cancel(Section::EFadeKind, u32);
        virtual void finish(Section::EFadeKind, u32);
        virtual void reenter();
        virtual void exit();
        virtual void clear();
        virtual void sceneStart(s32);
        virtual void sceneFinish(s32);

        SceneSequenceProxy();
        void enter_post();

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