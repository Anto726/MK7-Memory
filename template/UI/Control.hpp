#pragma once

#include "../Object/Actor.hpp"

#include <nw/lyt/Pane.hpp>

#include "ControlNullFader.hpp"

namespace UI
{
    class Control : public Object::Actor
    {
    public:
        class CreateArg
        {
        public:
            virtual void _0x0() = 0; // 0

            u8 gap_0x4[0x14];
        };
        static_assert(sizeof(CreateArg) == 0x18);

        virtual void forceCameraDir() {}; // 18

        virtual void onCreate(CreateArg *) {}; // 19
        virtual void reset() {}; // 20

        virtual void readyFadein() {}; // 21
        virtual void readyFadeout() {}; // 22

        virtual void fadeStep() {}; // 23
        virtual void isFadeComplete() {}; // 24

        virtual void draw() {}; // 25

        virtual nw::lyt::Pane *getRootPane() { return {}; }; // 26
        virtual ControlNullFader *generateFader() { return {}; }; // 27

        u8 gap_0x8[0x5C];
    };
    static_assert(sizeof(Control) == 0x64);
}