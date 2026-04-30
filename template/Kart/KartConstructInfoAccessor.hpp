#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@KartConstructInfoAccessor/SIZE@0x1C/
	public:
		/M/RaceSys::EBodyID m_body_id/0x4/0x0/
        /M/RaceSys::EDriverID m_driver_id/0x4/0x4/
        /M/RaceSys::ETireID m_tire_id/0x4/0x8/
        /M/RaceSys::EWingID m_wing_id/0x4/0xC/
        /M/RaceSys::EScrewID m_screw_id/0x4/0x10/
        /M/KartConstructInfoAccessor *m_self/0x4/0x14/ // ?
        /M/Util::ExcelORManager *m_excel_or_manager/0x4/0x18/
	/END/
}