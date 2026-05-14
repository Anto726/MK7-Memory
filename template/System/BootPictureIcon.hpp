#pragma once

#include "../types.hpp"

#include <heap/seadHeap.h>
#include <prim/seadSafeString.hpp>

#define BOOT_PICTURE_ICON_NUM_PICTURES 8

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@BootPictureBase/SIZE@0x38/VTABLE@True/
    public:
        /START_STRUCT/NAME@Arg/SIZE@0x18/
            /M/sead::SafeString m_bmp_filepath/0x8/0x0/
            /U/s32/0x4/0x8/
            /U/s32/0x4/0xc/
            /U/s16 */0x4/0x10/
            /M/sead::Heap *m_heap/0x4/0x14/
        /END/

        virtual void setup(const Arg &);
        virtual void calc(bool);

        /U/s32/0x4/0x4/
        /U/s32/0x4/0x8/
        /M/Arg m_arg/0x18/0xc/
        /U/f32/0x4/0x24/
        /U/f32/0x4/0x28/
        /M/s32 m_width/0x4/0x2c/
        /M/s32 m_height/0x4/0x30/
        // Offset within the image's BMP file where the bitmap data starts
        /M/u32 m_bitmap_data_offset/0x4/0x34/
    /END/

    /START_CLASS/NAME@BootPictureIcon/SIZE@0x70/BASE@BootPictureBase/BSIZE@0x38/VTABLE@True/
    public:
        virtual void setup(const Arg &);
        virtual void calc(bool);

        /M/u32 m_bitmap_data_offset_per_image[BOOT_PICTURE_ICON_NUM_PICTURES]/0x20/0x38/
        /U/s32/0x4/0x58/
        /U/s32/0x4/0x5c/
        /U/s32/0x4/0x60/
        /U/s32/0x4/0x64/
    /END/
}