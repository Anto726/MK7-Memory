#pragma once
#include "../fwddec.hpp"

namespace System
{
    class RootSystem
    {
    public:
        virtual ~RootSystem() = default;

    public:
        SceneManager *m_scene_manager;
    };
    static_assert(sizeof(RootSystem) == 0x8);
}