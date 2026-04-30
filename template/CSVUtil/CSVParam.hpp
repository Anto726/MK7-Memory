#pragma once

#include "../types.hpp"

#include "../System/EArchiveID.hpp"

#include <math/seadVector.h>
#include <heap/seadHeap.h>
#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(CSVUtil)
{
    /START_CLASS/NAME@CSVParam/SIZE@0x128/
    public:
        CSVParam(System::EArchiveID, const sead::SafeString &, const sead::SafeString &, const sead::SafeString &, const sead::SafeString &, sead::Heap *);
        f32 getData_f32(s32, s32) const;
        s32 getData_int(s32, s32) const;
        const sead::Vector3f &getData_vec3(s32, s32) const;

        /M/void *m_raw_file/0x4/0x0/
	/END/
}