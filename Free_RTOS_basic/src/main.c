#include "main.h"

void SystemClock_Config(void);


int main(void)
{

  HAL_Init();

  SystemClock_Config();


  GPIO_Config();

  osThreadDef(Task_GPIO_12, Start_Task_GPIO_12, osPriorityNormal, 0, configMINIMAL_STACK_SIZE);
  Task_GPIO_12 = osThreadCreate(osThread(Task_GPIO_12), NULL);


  osThreadDef(Task_GPIO_13, Start_Task_GPIO_13, osPriorityBelowNormal, 0, configMINIMAL_STACK_SIZE);
  Task_GPIO_13 = osThreadCreate(osThread(Task_GPIO_13), NULL);

  osThreadDef(Task_GPIO_15, Start_Task_GPIO_15, osPriorityBelowNormal, 0, configMINIMAL_STACK_SIZE);
  Task_GPIO_15 = osThreadCreate(osThread(Task_GPIO_15), NULL);


  osKernelStart();

}



