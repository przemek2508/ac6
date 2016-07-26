################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include src/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Free_RTOS_basic.elf

dependents:
	-cd C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Release && $(MAKE) all

# Tool invocations
Free_RTOS_basic.elf: $(OBJS) $(USER_OBJS) C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Release/libstm32f4discovery_hal_lib.a
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -L"C:\Users\Przemek\Desktop\MIKROKONTROLERY\workmench\stm32f4discovery_hal_lib\Release" -T"C:\Users\Przemek\Desktop\MIKROKONTROLERY\workmench\Free_RTOS_basic\LinkerScript.ld" -Wl,-Map=output.map -Wl,--gc-sections -lm -o "Free_RTOS_basic.elf" @"objects.list" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O binary "Free_RTOS_basic.elf" "Free_RTOS_basic.bin"
	arm-none-eabi-size -B "Free_RTOS_basic.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build
C:/Users/Przemek/Desktop/MIKROKONTROLERY/workmench/stm32f4discovery_hal_lib/Release/libstm32f4discovery_hal_lib.a:

-include ../makefile.targets
