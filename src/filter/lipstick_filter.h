/*
 * GPUPixel
 *
 * Created by PixPark on 2021/6/24.
 * Copyright © 2021 PixPark. All rights reserved.
 */

#pragma once

#include "face_makeup_filter.h"

NS_GPUPIXEL_BEGIN
class LipstickFilter : public FaceMakeupFilter {
public:
  static std::shared_ptr<LipstickFilter> create();
  bool init() override;
};

NS_GPUPIXEL_END
