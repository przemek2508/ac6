################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gpio.c \
../src/main.c \
../src/rcc.c \
../src/stm32f4xx_it.c \
../src/syscalls.c \
../src/system_stm32f4xx.c \
../src/zadania.c 

OBJS += \
./src/gpio.o \
./src/main.o \
./src/rcc.o \
./src/stm32f4xx_it.o \
./src/syscalls.o \
./src/system_stm32f4xx.o \
./src/zadania.o 

C_DEPS += \
./src/gpio.d \
./src/main.d \
./src/rcc.d \
./src/stm32f4xx_it.d \
./src/syscalls.d \
./src/system_stm32f4xx.d \
./src/zadania.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F407VGTx -DSTM32F4 -DSTM32F4DISCOVERY -DSTM32 -DUSE_HAL_DRIVER -DSTM32F407xx -DUSE_RTOS_SYSTICK -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/Free_RTOS_basic/inc" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/CMSIS/core" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/CMSIS/device" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/HAL_Driver/Inc/Legacy" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/HAL_Driver/Inc" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ampire480272" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ampire640480" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/Common" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/cs43l22" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/exc7200" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ft6x06" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ili9325" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ili9341" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/l3gd20" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/lis302dl" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/lis3dsh" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ls016b8uy" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/lsm303dlhc" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/mfxstm32l152" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/n25q128a" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/n25q256a" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/n25q512a" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/otm8009a" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ov2640" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/s25fl512s" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/s5k5cag" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/st7735" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/st7789h2" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/stmpe1600" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/stmpe811" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/ts3510" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/Components/wm8994" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Utilities/STM32F4-Discovery" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/Free_RTOS_basic/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/Free_RTOS_basic/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/Free_RTOS_basic/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


