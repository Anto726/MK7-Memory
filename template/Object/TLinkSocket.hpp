#pragma once

#include "../types.hpp"

#include "Actor.hpp"

#include "../Util/TLinkNode.hpp"

BEGIN_NAMESPACE(Object)
{
    template <typename T, typename Base>
    class TLinkSocket : public Base
    {
    public:
        Util::TLinkNode<T> m_node;
    };
    static_assert(sizeof(TLinkSocket<void *, Actor>) == 0x14);
}