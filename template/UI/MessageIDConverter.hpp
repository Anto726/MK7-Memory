#pragma once

#include "../types.hpp"

#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/ECourseID.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/EEngineLevel.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/ETitleType.hpp"
#include "../RaceSys/EWingID.hpp"
#include "../Sequence/ECup.hpp"

#include "../LMS_MessageID.hpp"

#include "../System/RootSystem.hpp"

BEGIN_NAMESPACE(UI)
{
    class MessageIDConverter
    {
    public:
        LMS_MessageID m_driver_short_message_ids[std::to_underlying(RaceSys::EDriverID::MAX)];
        LMS_MessageID m_driver_message_ids[std::to_underlying(RaceSys::EDriverID::MAX)];
        LMS_MessageID m_body_message_ids[std::to_underlying(RaceSys::EBodyID::MAX)];
        LMS_MessageID m_tire_message_ids[std::to_underlying(RaceSys::ETireID::MAX)];
        LMS_MessageID m_wing_message_ids[std::to_underlying(RaceSys::EWingID::MAX)];
        LMS_MessageID m_course_message_ids[std::to_underlying(RaceSys::ECourseID::MAX)];
        LMS_MessageID m_engine_level_message_ids[std::to_underlying(RaceSys::EEngineLevel::MAX)];
        LMS_MessageID m_cup_message_ids[std::to_underlying(Sequence::ECup::MAX)];
        LMS_MessageID m_title_type_message_ids[std::to_underlying(RaceSys::ETitleType::MAX)];
    };
    static_assert(sizeof(MessageIDConverter) == 0x228);
}

namespace Sequence
{
    static auto GetMessageIDConverter()
    {
        return System::g_root_system->get_message_id_converter();
    }
}