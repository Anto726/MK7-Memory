#pragma once

#include <cstddef>
#include <cstdint>

#include <limits>
#include <type_traits>

#ifndef MK7MEMORY_NAMESPACE
  #define BEGIN_NAMESPACE(sub) namespace sub
  #define BEGIN_GLOBAL_NAMESPACE
  #define END_GLOBAL_NAMESPACE
#else
  #define BEGIN_NAMESPACE(sub) namespace MK7MEMORY_NAMESPACE::sub
  #define BEGIN_GLOBAL_NAMESPACE namespace MK7MEMORY_NAMESPACE {
  #define END_GLOBAL_NAMESPACE }
#endif

#define TYPE_MAX(T) std::numeric_limits<std::underlying_type_t<T>>::max()

using s8 = std::int8_t;
using s16 = std::int16_t;
using s32 = std::int32_t;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;

using f32 = float;
using f64 = double;