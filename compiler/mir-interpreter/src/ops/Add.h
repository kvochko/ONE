/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _NNC_CORE_BACKEND_INTERPRETER_ADD_
#define _NNC_CORE_BACKEND_INTERPRETER_ADD_

#include "mir/TensorVariant.h"

namespace mir_interpreter
{

void Add(const mir::TensorVariant &lhs, const mir::TensorVariant &rhs, mir::TensorVariant &res);

} // namespace mir_interpreter

#endif //_NNC_CORE_BACKEND_INTERPRETER_ADD_
