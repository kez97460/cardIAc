/**
  ******************************************************************************
  * @file    pca_cardiac_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Oct  2 16:13:44 2024
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

#ifndef PCA_CARDIAC_DATA_H
#define PCA_CARDIAC_DATA_H

#include "pca_cardiac_config.h"
#include "pca_cardiac_data_params.h"

AI_DEPRECATED
#define AI_PCA_CARDIAC_DATA_ACTIVATIONS(ptr_)  \
  ai_pca_cardiac_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_PCA_CARDIAC_DATA_WEIGHTS(ptr_)  \
  ai_pca_cardiac_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_pca_cardiac_weights_array_u64[515];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup pca_cardiac_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_pca_cardiac_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup pca_cardiac_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_pca_cardiac_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup pca_cardiac_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_pca_cardiac_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup pca_cardiac_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_pca_cardiac_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* PCA_CARDIAC_DATA_H */

