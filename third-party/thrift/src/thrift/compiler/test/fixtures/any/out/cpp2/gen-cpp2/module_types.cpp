/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/any/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>
#include <thrift/conformance/cpp2/AnyRegistry.h>

#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_data.h"

namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any {
// Static-init time registration for dynamically-linked libraries.
//
// To include in statically-linked libraries, link whole (e.g. --whole-archive)
// `module_sinit.cpp`.
void __fbthrift_static_init_MyStruct() {
  [[maybe_unused]] static bool init = (
    apache::thrift::conformance::detail::registerGeneratedStruct<
        MyStruct,
        apache::thrift::conformance::StandardProtocol::Compact,
        apache::thrift::conformance::StandardProtocol::Binary>(),
    false);
}
void __fbthrift_static_init_MyUnion() {
  [[maybe_unused]] static bool init = (
    apache::thrift::conformance::detail::registerGeneratedStruct<
        MyUnion,
        apache::thrift::conformance::StandardProtocol::Compact,
        apache::thrift::conformance::StandardProtocol::Binary>(),
    false);
}
void __fbthrift_static_init_MyException() {
  [[maybe_unused]] static bool init = (
    apache::thrift::conformance::detail::registerGeneratedStruct<
        MyException,
        apache::thrift::conformance::StandardProtocol::Compact,
        apache::thrift::conformance::StandardProtocol::Binary>(),
    false);
}
}}}}}} // facebook::thrift::compiler::test::fixtures::any

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::any::detail::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::any::detail::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any {namespace detail {


const char* MyStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/any/MyStruct";
}

const folly::StringPiece MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct() {
}


MyStruct::~MyStruct() {}

MyStruct::MyStruct([[maybe_unused]] MyStruct&& other) noexcept :
    __fbthrift_field_myString(std::move(other.__fbthrift_field_myString)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=([[maybe_unused]] MyStruct&& other) noexcept {
    this->__fbthrift_field_myString = std::move(other.__fbthrift_field_myString);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::string myString__arg) :
    __fbthrift_field_myString(std::move(myString__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_myString = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyStruct::operator<([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] MyStruct& a, [[maybe_unused]] MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_myString, b.__fbthrift_field_myString);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace detail
}}}}}} // facebook::thrift::compiler::test::fixtures::any

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::any::MyUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::any::MyUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

folly::Range<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type const*> const TEnumTraits<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::values = folly::range(TEnumDataStorage<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::names = folly::range(TEnumDataStorage<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::names);

bool TEnumTraits<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::thrift::compiler::test::fixtures::any::MyUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any {

const char* MyUnion::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/any/MyUnion";
}

const folly::StringPiece MyUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyUnion>::name;
}

void MyUnion::__fbthrift_destruct() {
  switch(getType()) {
    case Type::__EMPTY__:
      break;
    case Type::myString:
      ::std::destroy_at(::std::addressof(value_.myString));
      break;
    default:
      assert(false);
      break;
  }
}

void MyUnion::__fbthrift_clear() {
  __fbthrift_destruct();
  type_ = folly::to_underlying(Type::__EMPTY__);
}

  MyUnion::~MyUnion() {
    __fbthrift_destruct();
  }

bool MyUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}
  MyUnion::MyUnion(const MyUnion& rhs)
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        return;
      case Type::myString:
        set_myString(rhs.value_.myString);
        break;
      default:
        assert(false);
    }
  }

    MyUnion&MyUnion::operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        __fbthrift_clear();
        return *this;
      case Type::myString:
        set_myString(rhs.value_.myString);
        break;
      default:
        __fbthrift_clear();
        assert(false);
    }
    return *this;
  }


bool MyUnion::operator==(const MyUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool MyUnion::operator<([[maybe_unused]] const MyUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionLessThan{}(*this, rhs);
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}}}}} // facebook::thrift::compiler::test::fixtures::any

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::any::MyException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::any::MyException>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any {

const char* MyException::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/any/MyException";
}

const folly::StringPiece MyException::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyException>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece MyException::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyException>::name;
}

MyException::MyException(const MyException&) = default;
MyException& MyException::operator=(const MyException&) = default;
MyException::MyException() {
}


MyException::~MyException() {}

MyException::MyException([[maybe_unused]] MyException&& other) noexcept :
    __fbthrift_field_myString(std::move(other.__fbthrift_field_myString)),
    __isset(other.__isset) {
}

MyException& MyException::operator=([[maybe_unused]] MyException&& other) noexcept {
    this->__fbthrift_field_myString = std::move(other.__fbthrift_field_myString);
    __isset = other.__isset;
    return *this;
}


MyException::MyException(apache::thrift::FragileConstructor, ::std::string myString__arg) :
    __fbthrift_field_myString(std::move(myString__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void MyException::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_myString = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void MyException::__fbthrift_clear_terse_fields() {
}

bool MyException::__fbthrift_is_empty() const {
  return false;
}

bool MyException::operator==([[maybe_unused]] const MyException& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyException::operator<([[maybe_unused]] const MyException& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] MyException& a, [[maybe_unused]] MyException& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_myString, b.__fbthrift_field_myString);
  swap(a.__isset, b.__isset);
}

template void MyException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}}}}} // facebook::thrift::compiler::test::fixtures::any

namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}}}}}}} // facebook::thrift::compiler::test::fixtures::any
namespace apache::thrift::detail::annotation {
}