//
//  XGraphics.hpp
//  XJS
//
//  Created by Jonas Böttiger on 15.04.18.
//  Copyright © 2018 CoffeeBlend. All rights reserved.
//

#ifndef XGraphics_hpp
#define XGraphics_hpp

#include <jsapi.h>
#include "error.h"
#include <OpenGL/gl.h>

void initOpenGL();

void initGraphics(JSContext * context, JS::HandleObject global);

#endif /* XGraphics_hpp */
