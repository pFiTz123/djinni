// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from interface_inheritance.djinni

#include "NativeInterfaceEncapsulator.hpp"  // my header
#include "NativeBaseCppInterfaceInheritance.hpp"
#include "NativeBaseObjcJavaInterfaceInheritance.hpp"
#include "NativeSubObjcJavaInterfaceInheritance.hpp"

namespace djinni_generated {

NativeInterfaceEncapsulator::NativeInterfaceEncapsulator() : ::djinni::JniInterface<::testsuite::InterfaceEncapsulator, NativeInterfaceEncapsulator>("com/dropbox/djinni/test/InterfaceEncapsulator$CppProxy") {}

NativeInterfaceEncapsulator::~NativeInterfaceEncapsulator() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::InterfaceEncapsulator>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1setCppObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_object)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        ref->set_cpp_object(::djinni_generated::NativeBaseCppInterfaceInheritance::toCpp(jniEnv, j_object));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1getCppObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        auto r = ref->get_cpp_object();
        return ::djinni::release(::djinni_generated::NativeBaseCppInterfaceInheritance::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1subCppAsBaseCpp(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        auto r = ref->sub_cpp_as_base_cpp();
        return ::djinni::release(::djinni_generated::NativeBaseCppInterfaceInheritance::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1setObjcJavaObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_object)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        ref->set_objc_java_object(::djinni_generated::NativeBaseObjcJavaInterfaceInheritance::toCpp(jniEnv, j_object));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1getObjcJavaObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        auto r = ref->get_objc_java_object();
        return ::djinni::release(::djinni_generated::NativeBaseObjcJavaInterfaceInheritance::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_00024CppProxy_native_1castBaseArgToSub(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_subAsBase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::InterfaceEncapsulator>(nativeRef);
        auto r = ref->cast_base_arg_to_sub(::djinni_generated::NativeBaseObjcJavaInterfaceInheritance::toCpp(jniEnv, j_subAsBase));
        return ::djinni::release(::djinni_generated::NativeSubObjcJavaInterfaceInheritance::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_InterfaceEncapsulator_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::InterfaceEncapsulator::create();
        return ::djinni::release(::djinni_generated::NativeInterfaceEncapsulator::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
