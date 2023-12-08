#pragma once

#include "../types.hpp"

namespace System
{
    class Scene
    {
    public:
        virtual ~Scene() = default;

    public:
        u8 m_0x4[476];
    };
    static_assert(sizeof(Scene) == 0x1E0);
}