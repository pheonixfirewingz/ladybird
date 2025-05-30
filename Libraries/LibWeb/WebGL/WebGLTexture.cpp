/*
 * Copyright (c) 2024, Jelle Raaijmakers <jelle@ladybird.org>
 * Copyright (c) 2024, Aliaksandr Kalenik <kalenik.aliaksandr@gmail.com>
 * Copyright (c) 2024, Luke Wilde <luke@ladybird.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibJS/Runtime/Realm.h>
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/Bindings/WebGLTexturePrototype.h>
#include <LibWeb/WebGL/WebGLTexture.h>

namespace Web::WebGL {

GC_DEFINE_ALLOCATOR(WebGLTexture);

GC::Ref<WebGLTexture> WebGLTexture::create(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
{
    return realm.create<WebGLTexture>(realm, context, handle);
}

WebGLTexture::WebGLTexture(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
    : WebGLObject(realm, context, handle)
{
}

WebGLTexture::~WebGLTexture() = default;

void WebGLTexture::initialize(JS::Realm& realm)
{
    WEB_SET_PROTOTYPE_FOR_INTERFACE(WebGLTexture);
    Base::initialize(realm);
}

}
