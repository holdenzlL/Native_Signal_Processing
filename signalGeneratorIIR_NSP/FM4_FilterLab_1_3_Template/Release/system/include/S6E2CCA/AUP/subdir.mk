################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/include/S6E2CCA/AUP/delay.c \
../system/include/S6E2CCA/AUP/dstc.c 

OBJS += \
./system/include/S6E2CCA/AUP/delay.o \
./system/include/S6E2CCA/AUP/dstc.o 

C_DEPS += \
./system/include/S6E2CCA/AUP/delay.d \
./system/include/S6E2CCA/AUP/dstc.d 


# Each subdirectory must supply rules for building sources it contributes
system/include/S6E2CCA/AUP/%.o: ../system/include/S6E2CCA/AUP/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -munaligned-access -specs=nano.specs -specs=nosys.specs -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_0_9\system\include\cmsis" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_0_9\system\include\platform" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_0_9\system\include\S6E2CCA\AUP" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_0_9\system\include\S6E2CCA\PDL" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_0_9\system\include\S6E2CCA\startup" -std=gnu11 -Wmissing-prototypes -Wstrict-prototypes -Wbad-function-cast -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


