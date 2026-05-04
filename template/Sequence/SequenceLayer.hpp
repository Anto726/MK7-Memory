#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SequenceLayer/SIZE@0x20/
    public:
        static s32 calcDistance(const SequenceLayer *, const SequenceLayer *);
        Section *attachSection(u32);
        SequenceLayer *getParentLayer();
        static s32 calcOrder(const SequenceLayer *, SequenceLayer *);
        void clear();
        void ready(u32, u16);

        /M/Section *m_section/0x4/0x0/
        // The root sequence the section above is attached to
        /M/LayeredSequence *m_parent_sequence/0x4/0x4/
    /END/
}