#pragma once

#include <3ds/mii.h>

struct CFLStoreData : MiiData
{
    u16 ccitt_checksum;
    u16 pad;
};
static_assert(sizeof(CFLStoreData) == 0x60);