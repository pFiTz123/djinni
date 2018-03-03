// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include <chrono>
#include <cstdint>
#include <string>

namespace testsuite {

class TestDuration {
public:
    virtual ~TestDuration() {}

    /**
     * Defines the name of the JNI C++ proxy class. Used to convert a
     * C++ implemented object to a Java object when the type of the object being
     * converted is unknown to the JniInterface (see djinni_support.hpp).
     * 
     * The proxy class name is only used for converting Djinni interfaces that
     * are implemented in C++. Java implemented interfaces are converted differently.
     * However, the C++ class of an interface implemented in Java must still have a
     * jniProxyClassName method in order for Djinni's JniInterface::fromCpp method to compile.
     * 
     * @return The name of the class's associated JNI proxy class.
     * 
     * @see JniInterface in djinni_support.hpp
     */
    virtual const std::string jniProxyClassName() { return "com/dropbox/djinni/test/TestDuration$CppProxy"; }

    /**
     * Defines the name of the Objective-C type for the class. Used to convert a
     * C++ object to an Objective-C object when the type of the object being
     * converted is unknown to the C++ wrapper cache (see DJICppWrapperCache+Private.hpp).
     * 
     * @return The name of the Objective C type associated with the class.
     * 
     * @see get_cpp_proxy function in DJICppWrapperCache+Private.hpp
     */
    virtual const std::string objcProxyClassName() { return "DBTestDuration"; }

    static std::string hoursString(std::chrono::duration<int32_t, std::ratio<3600>> dt);

    static std::string minutesString(std::chrono::duration<int32_t, std::ratio<60>> dt);

    static std::string secondsString(std::chrono::duration<int32_t, std::ratio<1>> dt);

    static std::string millisString(std::chrono::duration<int32_t, std::milli> dt);

    static std::string microsString(std::chrono::duration<int32_t, std::micro> dt);

    static std::string nanosString(std::chrono::duration<int32_t, std::nano> dt);

    static std::chrono::duration<int32_t, std::ratio<3600>> hours(int32_t count);

    static std::chrono::duration<int32_t, std::ratio<60>> minutes(int32_t count);

    static std::chrono::duration<int32_t, std::ratio<1>> seconds(int32_t count);

    static std::chrono::duration<int32_t, std::milli> millis(int32_t count);

    static std::chrono::duration<int32_t, std::micro> micros(int32_t count);

    static std::chrono::duration<int32_t, std::nano> nanos(int32_t count);

    static std::chrono::duration<double, std::ratio<3600>> hoursf(double count);

    static std::chrono::duration<double, std::ratio<60>> minutesf(double count);

    static std::chrono::duration<double, std::ratio<1>> secondsf(double count);

    static std::chrono::duration<double, std::milli> millisf(double count);

    static std::chrono::duration<double, std::micro> microsf(double count);

    static std::chrono::duration<double, std::nano> nanosf(double count);

    static std::experimental::optional<std::chrono::duration<int64_t, std::ratio<1>>> box(int64_t count);

    static int64_t unbox(std::experimental::optional<std::chrono::duration<int64_t, std::ratio<1>>> dt);
};

}  // namespace testsuite
