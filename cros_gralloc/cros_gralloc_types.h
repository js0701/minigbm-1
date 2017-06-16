/*
 * Copyright 2017 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef CROS_GRALLOC_TYPES_H
#define CROS_GRALLOC_TYPES_H

/*
 * Android graphics.h defines the formats and leaves 0x100 - 0x1FF
 * range available for HAL implementation specific formats.
 */
enum {
       HAL_PIXEL_FORMAT_NV12 = 0x102,
};

struct cros_gralloc_buffer_descriptor {
	uint32_t width;
	uint32_t height;
	uint32_t consumer_usage;
	uint32_t producer_usage;
	uint32_t droid_format;
	uint32_t drm_format;
	uint64_t drv_usage;
};

#endif
