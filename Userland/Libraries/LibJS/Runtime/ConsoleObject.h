/*
 * Copyright (c) 2020, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/Object.h>

namespace JS {

class ConsoleObject final : public Object {
    JS_OBJECT(ConsoleObject, Object);

public:
    explicit ConsoleObject(GlobalObject&);
    virtual void initialize(GlobalObject&) override;
    virtual ~ConsoleObject() override;

private:
    JS_DECLARE_OLD_NATIVE_FUNCTION(log);
    JS_DECLARE_OLD_NATIVE_FUNCTION(debug);
    JS_DECLARE_OLD_NATIVE_FUNCTION(info);
    JS_DECLARE_OLD_NATIVE_FUNCTION(warn);
    JS_DECLARE_OLD_NATIVE_FUNCTION(error);
    JS_DECLARE_OLD_NATIVE_FUNCTION(trace);
    JS_DECLARE_OLD_NATIVE_FUNCTION(count);
    JS_DECLARE_OLD_NATIVE_FUNCTION(count_reset);
    JS_DECLARE_OLD_NATIVE_FUNCTION(clear);
    JS_DECLARE_OLD_NATIVE_FUNCTION(assert_);
};

}
