/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
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

#include "luci/Import/Nodes/CircleResizeNearestNeighbor.h"

#include <luci/IR/Nodes/CircleConst.h>
#include <luci/IR/Nodes/CircleResizeNearestNeighbor.h>

namespace luci
{

bool CircleResizeNearestNeighborGraphBuilder::validate(const ValidateArgs &args) const
{
  if (args.op.inputs.size() != 2)
    return false;

  if (args.op.outputs.size() != 1)
    return false;

  return true;
}

CircleNode *CircleResizeNearestNeighborGraphBuilder::build_node(
    const circle::OperatorT &op, const std::vector<CircleNode *> &inputs, loco::Graph *graph) const
{
  auto *node = graph->nodes()->create<CircleResizeNearestNeighbor>();
  node->input(inputs[0]);
  node->size(inputs[1]);

  const auto *options = op.builtin_options.AsResizeNearestNeighborOptions();
  node->align_corners(options->align_corners);

  return node;
}

} // namespace luci
