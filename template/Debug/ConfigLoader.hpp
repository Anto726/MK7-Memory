#pragma once

#include "../types.hpp"

#include <prim/seadSafeString.hpp>

// NOTE: This class is also present in Nintendogs+cats. That's where we got most these symbols from.
#if GAME_VERSION == VERSION_E3_2010

BEGIN_NAMESPACE(Debug)
{
    /START_CLASS/NAME@ConfigLoader/SIZE@0x4/
    public:
        /START_STRUCT/NAME@Buffer/SIZE@0x10000/
            /M/u8 m_data[0x10000]/0x10000/0x0/
        /END/

        // 0x001763c8 (__sub_object)
        ConfigLoader();
        // 0x001ae868
        char *searchValue(const sead::SafeString &) const;
        // 0x001c5dc8
        char *getTextOrDefault(const sead::SafeString &, sead::BufferedSafeString *, const char*) const;
        // 0x00213340
        s32 getText(const sead::SafeString &, sead::BufferedSafeString *) const;
        // 0x001ed42c
        bool getValue(const sead::SafeString &, bool*) const;

        // The following are exclusive to E3 2010.
        // The names are made up because they don't appear in the Nintendogs+cats symbols map.
        // 0x001ed42c
        bool getValue_UIWarningIsAssert();
        // 0x00213468
        bool getWindowScale(const sead::SafeString &, f32);
        // 0x0017625c
        void loadFile();
        // 0x0017691c
        void parseOptions(const sead::SafeString &, const sead::SafeString &);

        /M/Buffer *m_buffer/0x4/0x0/
    /END/
}

#endif
