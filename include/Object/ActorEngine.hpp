#pragma once

#include "Actor.hpp"

#include "../System/SceneID.hpp"

namespace Object
{
    class ActorEngine : public Actor
    {
    public:
        virtual void sceneEnter(System::SceneID) {}; // 18
        virtual void sceneExit(System::SceneID) {}; // 19

        virtual void _0x50() = 0; // 20
    };
    static_assert(sizeof(ActorEngine) == 0x8);
}