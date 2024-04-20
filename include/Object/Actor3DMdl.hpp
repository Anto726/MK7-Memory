#pragma once

#include "Actor.hpp"

namespace Object
{
    class Actor3DMdl : public Actor
    {
    public:
        virtual void *getDTIClassInfo() const { return {}; }; // 0
		virtual void *getDTIClass() const { return {}; }; // 1
    
        u8 gap_0x8[0x50];
    };
    static_assert(sizeof(Actor3DMdl) == 0x58);
}