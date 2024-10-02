/**
  ******************************************************************************
  * @file    pca_cardiac_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Oct  2 14:38:18 2024
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

#ifndef PCA_CARDIAC_DATA_PARAMS_H
#define PCA_CARDIAC_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_PCA_CARDIAC_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_pca_cardiac_data_weights_params[1]))
*/

#define AI_PCA_CARDIAC_DATA_CONFIG               (NULL)


#define AI_PCA_CARDIAC_DATA_ACTIVATIONS_SIZES \
  { 296, }
#define AI_PCA_CARDIAC_DATA_ACTIVATIONS_SIZE     (296)
#define AI_PCA_CARDIAC_DATA_ACTIVATIONS_COUNT    (1)
#define AI_PCA_CARDIAC_DATA_ACTIVATION_1_SIZE    (296)



#define AI_PCA_CARDIAC_DATA_WEIGHTS_SIZES \
  { 4116, }
#define AI_PCA_CARDIAC_DATA_WEIGHTS_SIZE         (4116)
#define AI_PCA_CARDIAC_DATA_WEIGHTS_COUNT        (1)
#define AI_PCA_CARDIAC_DATA_WEIGHT_1_SIZE        (4116)



#define AI_PCA_CARDIAC_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_pca_cardiac_activations_table[1])

extern ai_handle g_pca_cardiac_activations_table[1 + 2];



#define AI_PCA_CARDIAC_DATA_WEIGHTS_TABLE_GET() \
  (&g_pca_cardiac_weights_table[1])

extern ai_handle g_pca_cardiac_weights_table[1 + 2];


#endif    /* PCA_CARDIAC_DATA_PARAMS_H */
