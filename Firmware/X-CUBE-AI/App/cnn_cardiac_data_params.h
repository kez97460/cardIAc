/**
  ******************************************************************************
  * @file    cnn_cardiac_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Nov 24 15:52:09 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef CNN_CARDIAC_DATA_PARAMS_H
#define CNN_CARDIAC_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_CNN_CARDIAC_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_cnn_cardiac_data_weights_params[1]))
*/

#define AI_CNN_CARDIAC_DATA_CONFIG               (NULL)


#define AI_CNN_CARDIAC_DATA_ACTIVATIONS_SIZES \
  { 3300, }
#define AI_CNN_CARDIAC_DATA_ACTIVATIONS_SIZE     (3300)
#define AI_CNN_CARDIAC_DATA_ACTIVATIONS_COUNT    (1)
#define AI_CNN_CARDIAC_DATA_ACTIVATION_1_SIZE    (3300)



#define AI_CNN_CARDIAC_DATA_WEIGHTS_SIZES \
  { 8132, }
#define AI_CNN_CARDIAC_DATA_WEIGHTS_SIZE         (8132)
#define AI_CNN_CARDIAC_DATA_WEIGHTS_COUNT        (1)
#define AI_CNN_CARDIAC_DATA_WEIGHT_1_SIZE        (8132)



#define AI_CNN_CARDIAC_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_cnn_cardiac_activations_table[1])

extern ai_handle g_cnn_cardiac_activations_table[1 + 2];



#define AI_CNN_CARDIAC_DATA_WEIGHTS_TABLE_GET() \
  (&g_cnn_cardiac_weights_table[1])

extern ai_handle g_cnn_cardiac_weights_table[1 + 2];


#endif    /* CNN_CARDIAC_DATA_PARAMS_H */
