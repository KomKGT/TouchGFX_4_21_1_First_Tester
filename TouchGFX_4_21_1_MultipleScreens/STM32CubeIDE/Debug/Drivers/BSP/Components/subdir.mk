################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/21032023_TouchGFX_WorkSpace/TouchGFX_4_21_1_First/TouchGFX_4_21_1_MultipleScreens/Drivers/BSP/Components/ili9341/ili9341.c \
D:/21032023_TouchGFX_WorkSpace/TouchGFX_4_21_1_First/TouchGFX_4_21_1_MultipleScreens/Drivers/BSP/Components/stmpe811/stmpe811.c 

C_DEPS += \
./Drivers/BSP/Components/ili9341.d \
./Drivers/BSP/Components/stmpe811.d 

OBJS += \
./Drivers/BSP/Components/ili9341.o \
./Drivers/BSP/Components/stmpe811.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/ili9341.o: D:/21032023_TouchGFX_WorkSpace/TouchGFX_4_21_1_First/TouchGFX_4_21_1_MultipleScreens/Drivers/BSP/Components/ili9341/ili9341.c Drivers/BSP/Components/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/stmpe811.o: D:/21032023_TouchGFX_WorkSpace/TouchGFX_4_21_1_First/TouchGFX_4_21_1_MultipleScreens/Drivers/BSP/Components/stmpe811/stmpe811.c Drivers/BSP/Components/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -I../../TouchGFX/generated/videos/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components

clean-Drivers-2f-BSP-2f-Components:
	-$(RM) ./Drivers/BSP/Components/ili9341.cyclo ./Drivers/BSP/Components/ili9341.d ./Drivers/BSP/Components/ili9341.o ./Drivers/BSP/Components/ili9341.su ./Drivers/BSP/Components/stmpe811.cyclo ./Drivers/BSP/Components/stmpe811.d ./Drivers/BSP/Components/stmpe811.o ./Drivers/BSP/Components/stmpe811.su

.PHONY: clean-Drivers-2f-BSP-2f-Components

