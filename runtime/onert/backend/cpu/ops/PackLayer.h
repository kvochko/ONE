/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ONERT_BACKEND_CPU_OPS_PACKLAYER_H__
#define __ONERT_BACKEND_CPU_OPS_PACKLAYER_H__

#include "../Tensor.h"

#include <exec/IFunction.h>

namespace onert
{
namespace backend
{
namespace cpu
{
namespace ops
{

class PackLayer : public ::onert::exec::IFunction
{
public:
  PackLayer();

public:
  void packFloat32();

  void packQuant8();

  void configure(const std::vector<const Tensor *> &inputs, int32_t axis, Tensor *output);

  void run();

private:
  std::vector<const Tensor *> _inputs;
  Tensor *_output;
  int32_t _axis;
};

} // namespace ops
} // namespace cpu
} // namespace backend
} // namespace onert

#endif // __ONERT_BACKEND_CPU_OPS_PACKLAYER_H__
