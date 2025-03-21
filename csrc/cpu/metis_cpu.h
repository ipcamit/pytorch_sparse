#pragma once

#include "../extensions.h"

torch::Tensor partition_cpu(torch::Tensor rowptr, torch::Tensor col,
                            std::optional<torch::Tensor> optional_value,
                            std::optional<torch::Tensor> optional_node_weight,
                            int64_t num_parts, bool recursive);

torch::Tensor
mt_partition_cpu(torch::Tensor rowptr, torch::Tensor col,
                 std::optional<torch::Tensor> optional_value,
                 std::optional<torch::Tensor> optional_node_weight,
                 int64_t num_parts, bool recursive, int64_t num_workers);
