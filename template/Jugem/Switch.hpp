#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Jugem)
{
    class Switch
    {
    public:
        virtual ~Switch() = default;
        virtual void init()
        {
            m_is_on = false;
            m_is_kill = false;
        };
        virtual void doUpdate() = 0;

        bool isOn()
        {
            return !m_is_kill && m_is_on;
        }

        void update()
        {
            if (!m_is_kill)
                doUpdate();
        }
        
        Unit *m_unit;
        RaceSys::KartInfo *m_kart_info;
        bool m_is_on;
        bool m_is_kill;
        u8 m_lap_num;
    };
    static_assert(sizeof(Switch) == 0x10);
}