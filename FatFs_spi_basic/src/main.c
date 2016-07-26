/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4_discovery.h"
#include "ff.h"
#include "diskio.h"
#include "ff_gen_drv.h"

#define HAL_SD_MODULE_ENABLED
			
void SPI_Config(void);

FATFS mynewdiskFatFs;
/* File system object for User logical drive */
FIL MyFile;
/* File object */
char mynewdiskPath[4];
/* User logical drive path */
Diskio_drvTypeDef mynewdisk_Driver;


int main(void)
{
	SPI_Config();

	  uint32_t wbytes;
	/* File write counts */
	  uint8_t wtext[] = "text to write logical disk";
	/* File write buffer */
	if(FATFS_LinkDriver(&mynewdisk_Driver, mynewdiskPath) == 0)
	  {
	    if(f_mount(&mynewdiskFatFs, (TCHAR const*)mynewdiskPath, 0) == FR_OK)
	    {
	      if(f_open(&MyFile, "STM32.TXT", FA_CREATE_ALWAYS | FA_WRITE) == FR_OK)
	      {
	        if(f_write(&MyFile, wtext, sizeof(wtext), (void *)&wbytes) == FR_OK);
	        {
	          f_close(&MyFile);
	        }
	      }
	    }
	  }
	  FATFS_UnLinkDriver(mynewdiskPath);

	for(;;);
}



void SPI_Config(void)
{
	SPI_HandleTypeDef   hspi;
	HAL_SPI_MspInit(&hspi);

	GPIO_InitTypeDef GPIO_InitStruct;
	SPI_InitTypeDef SPI_InitStructure;


	  // Konfiguracja wyprowadzen i kontrolera SPI:

	  // Wlaczenie sygnalow zegarowych dla peryferiow
	__SPI1_CLK_ENABLE();
	__GPIOA_CLK_ENABLE();
	__GPIOC_CLK_ENABLE();


	  // PA4 jako CS
	GPIO_InitStruct.Pin = GPIO_PIN_12;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	//SCK, MISO and MOSI
	GPIO_InitStruct.Pin = GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);



    // Konfiguracja SPI
	SPI_InitStructure.Direction = SPI_DIRECTION_2LINES;
    SPI_InitStructure.Mode = SPI_MODE_MASTER;
	SPI_InitStructure.DataSize = SPI_DATASIZE_8BIT;
	SPI_InitStructure.CLKPolarity = SPI_POLARITY_HIGH;
	SPI_InitStructure.CLKPhase = SPI_PHASE_2EDGE;
	SPI_InitStructure.NSS = SPI_NSS_SOFT;
	SPI_InitStructure.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_4;
	SPI_InitStructure.FirstBit = SPI_FIRSTBIT_MSB;
	SPI_InitStructure.CRCPolynomial = 7;
	HAL_SPI_Init(&hspi);


}
