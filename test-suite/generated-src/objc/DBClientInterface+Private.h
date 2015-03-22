// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include "client_interface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol DBClientInterface;

namespace djinni_generated {

struct ClientInterface
{
    using CppType = std::shared_ptr<::ClientInterface>;
    using ObjcType = id<DBClientInterface>;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
