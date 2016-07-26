/*
 * zadania.h
 *
 *  Created on: 23 cze 2016
 *      Author: Przemek
 */

#ifndef ZADANIA_H_
#define ZADANIA_H_

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#include "cmsis_os.h"


osThreadId Task_GPIO_12;
osThreadId Task_GPIO_13;
osThreadId Task_GPIO_15;


void Start_Task_GPIO_12(void const * argument);
void Start_Task_GPIO_13(void const * argument);
void Start_Task_GPIO_15(void const * argument);


#endif /* ZADANIA_H_ */
