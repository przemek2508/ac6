/*
 * zadania.c
 *
 *  Created on: 23 cze 2016
 *      Author: Przemek
 */
#include "zadania.h"



void Start_Task_GPIO_12(void const * argument)
{

  while(1)
  {
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
	osDelay(500);
  }

}

void Start_Task_GPIO_13(void const * argument)
{
	while(1)
	  {
		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
		osDelay(350);
	  }
}



void Start_Task_GPIO_15(void const * argument)
{
	while(1)
	  {
		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
		osDelay(50);
	  }
}
