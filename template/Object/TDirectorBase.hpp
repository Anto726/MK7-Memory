#pragma once

#include "../types.hpp"

#include "Actor.hpp"

BEGIN_NAMESPACE(Object)
{
    template <typename T, typename Base, typename It>
    class TDirectorBase : public Base
    {
    public:
        It m_it;
        u8 m_unk;
    };
    static_assert(sizeof(TDirectorBase<void *, Actor, void *>) == 0x10);
}