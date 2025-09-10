#pragma once

#include "../types.hpp"

#include "../Object/Actor.hpp"
#include "SndHandle.hpp"

BEGIN_NAMESPACE(Sound)
{
    /START_CLASS/NAME@SndActorBase/BASE@Object::Actor/SIZE@0xD8/BSIZE@0x8/
    public:
        virtual void pauseOn(int);                                                      // offset 0x48
        virtual void pauseOff(int);                                                     // offset 0x4C
        virtual void fadeIn(int);                                                       // offset 0x50
        virtual void stopAll(int);                                                      // offset 0x54
        virtual void _0x58();                                                           // offset 0x58
        virtual void _0x5C();                                                           // offset 0x5C
        virtual void _0x60();                                                           // offset 0x60
        virtual void setActorVolume(float);                                             // offset 0x64
        virtual void setActorPitch(float);                                              // offset 0x68
        virtual void setActorPan(float);                                                // offset 0x6C
        virtual void startSound(unsigned, Sound::SndHandle*);                           // offset 0x70
        virtual void _0x74();                                                           // offset 0x74
        virtual Sound::SndHandle* startSoundPrioBefore(unsigned, Sound::SndHandle*);    // offset 0x78
        virtual void _0x7C();                                                           // offset 0x7C
        virtual void startSoundPrioAfter(unsigned, Sound::SndHandle*);                  // offset 0x80
        virtual void _0x84();                                                           // offset 0x84
        virtual void holdSound(unsigned, Sound::SndHandle*);                            // offset 0x88
        virtual void _0x8C();                                                           // offset 0x8C
        virtual void calcInner();                                                       // offset 0x90
        virtual void _0x94();                                                           // offset 0x94
        virtual void _0x98();                                                           // offset 0x98
        virtual void calcListenerDistSq();                                              // offset 0x9C
        virtual void calcListenerRelPos();                                              // offset 0xA0

        /M/bool m_disabled/0x1/0xD4/
    /END/
}