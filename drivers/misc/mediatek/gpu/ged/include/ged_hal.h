/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __GED_HAL_H__
#define __GED_HAL_H__

#include "ged_type.h"

GED_ERROR ged_hal_init(void);

void ged_hal_exit(void);

void ged_hal_get_systrace_gpuinfo_status(u32 *status);
void ged_hal_set_systrace_gpuinfo_status(u32 *status);

#endif
