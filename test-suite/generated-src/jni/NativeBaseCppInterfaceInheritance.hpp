// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from interface_inheritance.djinni

#pragma once

#include "base_cpp_interface_inheritance.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeBaseCppInterfaceInheritance final : ::djinni::JniInterface<::testsuite::BaseCppInterfaceInheritance, NativeBaseCppInterfaceInheritance> {
public:
    using CppType = std::shared_ptr<::testsuite::BaseCppInterfaceInheritance>;
    using CppOptType = std::shared_ptr<::testsuite::BaseCppInterfaceInheritance>;
    using JniType = jobject;

    using Boxed = NativeBaseCppInterfaceInheritance;

    ~NativeBaseCppInterfaceInheritance();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeBaseCppInterfaceInheritance>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeBaseCppInterfaceInheritance>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeBaseCppInterfaceInheritance();
    friend ::djinni::JniClass<NativeBaseCppInterfaceInheritance>;
    friend ::djinni::JniInterface<::testsuite::BaseCppInterfaceInheritance, NativeBaseCppInterfaceInheritance>;

};

}  // namespace djinni_generated
