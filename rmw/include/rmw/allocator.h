// Copyright 2018 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW__ALLOCATOR_H_
#define RMW__ALLOCATOR_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <rcutils/allocator.h>

#include "rmw/macros.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

// forward rcutils allocator types/functions
typedef rcutils_allocator_t rmw_allocator_t;
#define rmw_get_zero_initialized_allocator rcutils_get_zero_initialized_allocator
#define rmw_get_default_allocator rcutils_get_default_allocator
#define rmw_allocator_is_valid rcutils_allocator_is_valid
#define rmw_reallocf rcutils_reallocf

#ifdef __cplusplus
}
#endif

#endif  // RMW__ALLOCATOR_H_
