/*
 * Copyright (c) 2013-2014 Geocent - Published under the MIT License.
 * See LICENSE for the full text of the license.
 */

#ifndef SRC_SUPPORT_OVR_TYPES_OVRSIZEI_OVRSIZEIWRAP_H_
#define SRC_SUPPORT_OVR_TYPES_OVRSIZEI_OVRSIZEIWRAP_H_

#include <node.h>
#include <nan/nan.h>

#include <OVR_CAPI.h>

/*! \class OvrFovPortWrap
 * 
 * Node wrapped object class for OvrSizei.
 */
class OvrSizeiWrap : public node::ObjectWrap {
 private:
    ovrSizei _ovrSizei;

    OvrSizeiWrap();
    ~OvrSizeiWrap();
    static v8::Persistent<v8::Function> constructor;
    static NAN_GETTER(GetObjectProperty);

 public:
    static void Initialize(v8::Handle<v8::Object> target);
    static NAN_METHOD(New);
    static v8::Handle<v8::Value> NewInstance();
    ovrSizei* GetWrapped();
};

#endif  // SRC_SUPPORT_OVR_TYPES_OVRSIZEI_OVRSIZEIWRAP_H_
