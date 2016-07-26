/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include "stm32f4xx_hal_gpio.h"
			

int main(void)
{
	HAL_Init();

	__GPIOD_CLK_ENABLE();

	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Pin 	= GPIO_PIN_14;
	GPIO_InitStruct.Mode 	= GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull 	= GPIO_NOPULL;
	GPIO_InitStruct.Speed 	= GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);



	while(1)
	{
		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
		HAL_Delay(500);
	}
}
