#pragma once
#include "../fwddec.hpp"

namespace System
{
    class SceneManager
    {
    public:
        virtual ~SceneManager() = default;

    public:
        RootScene *m_root_scene;
    };
    static_assert(sizeof(SceneManager) == 0x8);
}