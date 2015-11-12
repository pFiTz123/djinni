// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_constants.djinni

#pragma once

#include "some_const_record.hpp"
#include <cstdint>
#include <experimental/optional>
#include <string>
#include <utility>

namespace testsuite {

struct FooConstants final {

    static bool const BOOL_CONSTANT;

    static int8_t const I8_CONSTANT;

    static int16_t const I16_CONSTANT;

    static int32_t const I32_CONSTANT;

    static int64_t const I64_CONSTANT;

    static float const F32_CONSTANT;

    static double const F64_CONSTANT;

    static std::string const STRING_CONSTANT;

    static std::experimental::optional<int32_t> const OPTIONAL_INTEGER_CONSTANT;

    static FooConstants const OBJECT_CONSTANT;

    static SomeConstRecord const SOME_RECORD;
    int32_t some_integer;
    std::string some_string;

    FooConstants(int32_t some_integer,
                 std::string some_string)
    : some_integer(std::move(some_integer))
    , some_string(std::move(some_string))
    {}
};

}  // namespace testsuite