#pragma once

namespace UI
{
    class ControlNullFader
    {
    public:
        virtual ~ControlNullFader() {};
    };
    static_assert(sizeof(ControlNullFader) == 0x4);
}