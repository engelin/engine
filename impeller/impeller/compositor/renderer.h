// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "context.h"
#include "flutter/fml/macros.h"
#include "impeller/geometry/size.h"

namespace impeller {

class Renderer {
 public:
  Renderer();

  ~Renderer();

  bool IsValid() const;

  bool SurfaceSizeDidChange(Size size);

  bool Render();

 private:
  Context context_;
  Size size_;
  bool is_valid_ = false;

  bool ShouldRender() const;

  FML_DISALLOW_COPY_AND_ASSIGN(Renderer);
};

}  // namespace impeller