/*
 * gpio.c
 *
 *  Created on: 23 cze 2016
 *      Author: Przemek
 */
#include "gpio.h"

void GPIO_Config(void)
{

  __GPIOD_CLK_ENABLE();

  GPIO_InitTypeDef GPIO_InitStruct;

  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}
