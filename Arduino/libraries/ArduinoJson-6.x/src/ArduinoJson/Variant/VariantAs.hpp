// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2021
// MIT License

#pragma once

#include <ArduinoJson/Strings/IsWriteableString.hpp>
#include <ArduinoJson/Variant/VariantData.hpp>

namespace ARDUINOJSON_NAMESPACE {

class ArrayRef;
class ArrayConstRef;
class ObjectRef;
class ObjectConstRef;
class VariantRef;
class VariantConstRef;

template <typename T>
inline typename enable_if<is_integral<T>::value && !is_same<bool, T>::value &&
                              !is_same<char, T>::value,
                          T>::type
variantAs(const VariantData* data) {
  ARDUINOJSON_ASSERT_INTEGER_TYPE_IS_SUPPORTED(T);
  return data != 0 ? data->asIntegral<T>() : T(0);
}

template <typename T>
inline typename enable_if<is_enum<T>::value, T>::type variantAs(
    const VariantData* data) {
  return data != 0 ? static_cast<T>(data->asIntegral<int>()) : T();
}

template <typename T>
inline typename enable_if<is_same<T, bool>::value, T>::type variantAs(
    const VariantData* data) {
  return data != 0 ? data->asBoolean() : false;
}

template <typename T>
inline typename enable_if<is_floating_point<T>::value, T>::type variantAs(
    const VariantData* data) {
  return data != 0 ? data->asFloat<T>() : T(0);
}

template <typename T>
inline typename enable_if<is_same<T, const char*>::value, T>::type variantAs(
    const VariantData* data) {
  return data != 0 ? data->asString() : 0;
}

template <typename T>
T variantAs(VariantData* data, MemoryPool*) {
  // By default use the read-only conversion.
  // There are specializations for
  // - ArrayRef
  return variantAs<T>(data);
}

template <typename T>
inline typename enable_if<is_same<ArrayConstRef, T>::value, T>::type variantAs(
    const VariantData* data);

template <typename T>
inline typename enable_if<is_same<ObjectConstRef, T>::value, T>::type variantAs(
    const VariantData* data);

template <typename T>
inline typename enable_if<is_same<VariantConstRef, T>::value, T>::type
variantAs(const VariantData* data);

template <typename T>
inline typename enable_if<IsWriteableString<T>::value, T>::type variantAs(
    const VariantData* data);

}  // namespace ARDUINOJSON_NAMESPACE
