/**
  ******************************************************************************
  * @file    cnn_cardiac.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Nov 24 15:52:09 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "cnn_cardiac.h"
#include "cnn_cardiac_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_cnn_cardiac
 
#undef AI_CNN_CARDIAC_MODEL_SIGNATURE
#define AI_CNN_CARDIAC_MODEL_SIGNATURE     "0x4fa07cad2b263a9bfd17cda13d0d10a7"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sun Nov 24 15:52:09 2024"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_CNN_CARDIAC_N_BATCHES
#define AI_CNN_CARDIAC_N_BATCHES         (1)

static ai_ptr g_cnn_cardiac_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_cnn_cardiac_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_layer_10_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 181, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 644, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  nl_3_nl_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 644, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  pool_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 212, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 132, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  nl_10_nl_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 132, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  pool_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 44, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  gemm_14_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  nl_14_nl_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  gemm_15_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 5, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  nl_16_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 5, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 84, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 336, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  gemm_14_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1408, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  gemm_14_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  gemm_15_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 160, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  gemm_15_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 5, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_layer_10_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 181), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &serving_default_input_layer_10_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_layer_10_output0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 181, 1), AI_STRIDE_INIT(4, 4, 4, 4, 724),
  1, &serving_default_input_layer_10_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 161, 1), AI_STRIDE_INIT(4, 4, 4, 16, 2576),
  1, &conv2d_1_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 161), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_1_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  nl_3_nl_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 161), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &nl_3_nl_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  nl_3_nl_output0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 161, 1), AI_STRIDE_INIT(4, 4, 4, 16, 2576),
  1, &nl_3_nl_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  pool_5_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 53, 1), AI_STRIDE_INIT(4, 4, 4, 16, 848),
  1, &pool_5_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 33, 1), AI_STRIDE_INIT(4, 4, 4, 16, 528),
  1, &conv2d_8_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output0, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 33), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_8_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  nl_10_nl_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 33), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &nl_10_nl_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  nl_10_nl_output0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 33, 1), AI_STRIDE_INIT(4, 4, 4, 16, 528),
  1, &nl_10_nl_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  pool_12_output, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 11, 1), AI_STRIDE_INIT(4, 4, 4, 16, 176),
  1, &pool_12_output_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  pool_12_output0, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 44, 1, 1), AI_STRIDE_INIT(4, 4, 4, 176, 176),
  1, &pool_12_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  gemm_14_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &gemm_14_output_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  nl_14_nl_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &nl_14_nl_output_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  gemm_15_output, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &gemm_15_output_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  nl_16_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &nl_16_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 21, 1, 4), AI_STRIDE_INIT(4, 4, 4, 16, 336),
  1, &conv2d_1_weights_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_weights, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 4, 21, 1, 4), AI_STRIDE_INIT(4, 4, 16, 64, 1344),
  1, &conv2d_8_weights_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_bias, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &conv2d_8_bias_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  gemm_14_weights, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 44, 32, 1, 1), AI_STRIDE_INIT(4, 4, 176, 5632, 5632),
  1, &gemm_14_weights_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  gemm_14_bias, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &gemm_14_bias_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  gemm_15_weights, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 32, 5, 1, 1), AI_STRIDE_INIT(4, 4, 128, 640, 640),
  1, &gemm_15_weights_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  gemm_15_bias, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 5, 1, 1), AI_STRIDE_INIT(4, 4, 4, 20, 20),
  1, &gemm_15_bias_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_16_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_16_layer, 16,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm,
  &nl_16_chain,
  NULL, &nl_16_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  gemm_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_14_nl_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &gemm_15_weights, &gemm_15_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  gemm_15_layer, 15,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &gemm_15_chain,
  NULL, &nl_16_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_14_nl_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_14_nl_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_14_nl_layer, 14,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &nl_14_nl_chain,
  NULL, &gemm_15_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  gemm_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_12_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &gemm_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &gemm_14_weights, &gemm_14_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  gemm_14_layer, 14,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &gemm_14_chain,
  NULL, &nl_14_nl_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_10_nl_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_12_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_12_layer, 12,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_12_chain,
  NULL, &gemm_14_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(3, 1), 
  .pool_stride = AI_SHAPE_2D_INIT(3, 1), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_10_nl_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_10_nl_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_10_nl_layer, 10,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &nl_10_nl_chain,
  NULL, &pool_12_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_8_weights, &conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_8_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_8_chain,
  NULL, &nl_10_nl_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_3_nl_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_5_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_5_layer, 5,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_5_chain,
  NULL, &conv2d_8_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(3, 1), 
  .pool_stride = AI_SHAPE_2D_INIT(3, 1), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_3_nl_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_3_nl_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_3_nl_layer, 3,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &nl_3_nl_chain,
  NULL, &pool_5_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_input_layer_10_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_1_chain,
  NULL, &nl_3_nl_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 8132, 1, 1),
    8132, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3300, 1, 1),
    3300, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CNN_CARDIAC_IN_NUM, &serving_default_input_layer_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CNN_CARDIAC_OUT_NUM, &nl_16_output),
  &conv2d_1_layer, 0xdcf5b619, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 8132, 1, 1),
      8132, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3300, 1, 1),
      3300, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CNN_CARDIAC_IN_NUM, &serving_default_input_layer_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_CNN_CARDIAC_OUT_NUM, &nl_16_output),
  &conv2d_1_layer, 0xdcf5b619, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool cnn_cardiac_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_cnn_cardiac_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    serving_default_input_layer_10_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    serving_default_input_layer_10_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    conv2d_1_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    conv2d_1_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    nl_3_nl_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    nl_3_nl_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    pool_5_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    pool_5_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 724);
    conv2d_8_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    conv2d_8_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    nl_10_nl_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 528);
    nl_10_nl_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 528);
    pool_12_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    pool_12_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    gemm_14_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 176);
    gemm_14_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 176);
    nl_14_nl_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    nl_14_nl_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    gemm_15_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 128);
    gemm_15_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 128);
    nl_16_output_array.data = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    nl_16_output_array.data_start = AI_PTR(g_cnn_cardiac_activations_map[0] + 0);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}




/******************************************************************************/
AI_DECLARE_STATIC
ai_bool cnn_cardiac_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_cnn_cardiac_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 0);
    conv2d_1_weights_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 0);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 336);
    conv2d_1_bias_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 336);
    conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_weights_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 352);
    conv2d_8_weights_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 352);
    conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_bias_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 1696);
    conv2d_8_bias_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 1696);
    gemm_14_weights_array.format |= AI_FMT_FLAG_CONST;
    gemm_14_weights_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 1712);
    gemm_14_weights_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 1712);
    gemm_14_bias_array.format |= AI_FMT_FLAG_CONST;
    gemm_14_bias_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 7344);
    gemm_14_bias_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 7344);
    gemm_15_weights_array.format |= AI_FMT_FLAG_CONST;
    gemm_15_weights_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 7472);
    gemm_15_weights_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 7472);
    gemm_15_bias_array.format |= AI_FMT_FLAG_CONST;
    gemm_15_bias_array.data = AI_PTR(g_cnn_cardiac_weights_map[0] + 8112);
    gemm_15_bias_array.data_start = AI_PTR(g_cnn_cardiac_weights_map[0] + 8112);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/



AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_cnn_cardiac_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CNN_CARDIAC_MODEL_NAME,
      .model_signature   = AI_CNN_CARDIAC_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 27876,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0xdcf5b619,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}



AI_API_ENTRY
ai_bool ai_cnn_cardiac_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_CNN_CARDIAC_MODEL_NAME,
      .model_signature   = AI_CNN_CARDIAC_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 27876,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0xdcf5b619,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_error ai_cnn_cardiac_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}


AI_API_ENTRY
ai_error ai_cnn_cardiac_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    AI_CONTEXT_OBJ(&AI_NET_OBJ_INSTANCE),
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}


AI_API_ENTRY
ai_error ai_cnn_cardiac_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
  ai_error err;
  ai_network_params params;

  err = ai_cnn_cardiac_create(network, AI_CNN_CARDIAC_DATA_CONFIG);
  if (err.type != AI_ERROR_NONE) {
    return err;
  }
  
  if (ai_cnn_cardiac_data_params_get(&params) != true) {
    err = ai_cnn_cardiac_get_error(*network);
    return err;
  }
#if defined(AI_CNN_CARDIAC_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; activations && idx<params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
  }
#endif
#if defined(AI_CNN_CARDIAC_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; weights && idx<params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
  }
#endif
  if (ai_cnn_cardiac_init(*network, &params) != true) {
    err = ai_cnn_cardiac_get_error(*network);
  }
  return err;
}


AI_API_ENTRY
ai_buffer* ai_cnn_cardiac_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_buffer* ai_cnn_cardiac_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_handle ai_cnn_cardiac_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}


AI_API_ENTRY
ai_bool ai_cnn_cardiac_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = AI_NETWORK_OBJ(ai_platform_network_init(network, params));
  ai_bool ok = true;

  if (!net_ctx) return false;
  ok &= cnn_cardiac_configure_weights(net_ctx, params);
  ok &= cnn_cardiac_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_cnn_cardiac_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}


AI_API_ENTRY
ai_i32 ai_cnn_cardiac_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_CNN_CARDIAC_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

