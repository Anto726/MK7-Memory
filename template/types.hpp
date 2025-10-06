#pragma once

#include <cstddef>
#include <cstdint>

#ifndef MK7MEMORY_NAMESPACE
  #define BEGIN_NAMESPACE(sub) namespace sub
  #define BEGIN_GLOBAL_NAMESPACE
  #define END_GLOBAL_NAMESPACE
#else
  #define BEGIN_NAMESPACE(sub) namespace MK7MEMORY_NAMESPACE::sub
  #define BEGIN_GLOBAL_NAMESPACE namespace MK7MEMORY_NAMESPACE {
  #define END_GLOBAL_NAMESPACE }
#endif

using s8 = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;