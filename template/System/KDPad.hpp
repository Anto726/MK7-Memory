#pragma once

#include "../Object/Actor.hpp"
#include "../types.hpp"
#include "ControllerBase.hpp"
#include "KDPadController.hpp"
#include "KDPadAddBase.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPad/SIZE@0x44/BASE@Object::Actor/BSIZE@0x8/
    public:
        enum class eKDPadAddIndex : u32
        {
            INPUTER      = 0x1,   // KDPadInputer
            UI_INPUTER   = 0x2,   // KDPadUIInputer
            PAD_RECORDER = 0x4,   // KDPadRecorder
            PAD_PLAYER   = 0x8,   // KDPadPlayer
            PAD_SETTER   = 0x10,  // KDPadSetter
        };
        static_assert(sizeof(eKDPadAddIndex) == 0x4);

        enum class ePadType : u8
        {
            PLAYER,
            PLAYER_RECORD,
            REPLAY,
            AI,
            INPUT_PLAYBACK_ONLY,    // Unused?
            UI
        };
        static_assert(sizeof(ePadType) == 0x1);

        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        // static ??? getDTIClassStatic();
        virtual void init();
        virtual void calc();
        virtual void setButton(s32);
        virtual void setStick(f32, f32);
        virtual bool setterCheck();
        virtual void start();
        virtual void pause();
        virtual void resume();
        virtual void reset();
        virtual void finish();

        KDPad();
        bool isGyroMode();
        void switchAddin(eKDPadAddIndex, KDPadAddBase *);

        /M/sead::PtrArray<KDPadAddBase> m_subsystems_array/0xc/0x8/
        /M/KDPadAddBase *m_pad_add_base/0x4/0x14/
        /M/eKDPadAddIndex m_pad_add_idx/0x4/0x18/
        /M/KDPadAddBase::KDPadDataOnFrame m_data_on_frame/0x1c/0x1c/
        /M/KDPadController *m_pad_controller/0x4/0x38/
        /M/ePadType m_type/0x1/0x3c/
        /M/bool m_is_paused/0x1/0x3d/
        /M/ControllerBase *m_controller/0x4/0x40/
    /END/
}
