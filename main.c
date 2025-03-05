/*---------------------------------------------------------------------------
 * Copyright (c) 2021-2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include "main.h"
#include "arm_nnfunctions.h"

static int count = 0;

static void hello(void) {
  while (count <= 100) {
    printf("Hello World %d\r\n", count);
    count++;
  }
}

static void cmsis_nn_test(void) {
  printf("%s\r\n", __func__);
  // arm_max_pool_s16(0, 0, 0, 0, 0, 0, 0);
  // arm_cmsis_nn_status arm_max_pool_s16(const cmsis_nn_context *ctx,
  //   const cmsis_nn_pool_params *pool_params,
  //   const cmsis_nn_dims *input_dims,
  //   const int16_t *src,
  //   const cmsis_nn_dims *filter_dims,
  //   const cmsis_nn_dims *output_dims,
  //   int16_t *dst)

}

int main (void) {
  //stdio_init();                         // Initialize stdio

  // app_main();                           // Execute Application main

  // for (;;) {}

  //hello();
  cmsis_nn_test();
}
