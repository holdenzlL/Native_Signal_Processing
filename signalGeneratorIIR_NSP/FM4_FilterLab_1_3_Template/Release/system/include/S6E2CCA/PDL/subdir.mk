################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/include/S6E2CCA/PDL/clk.c \
../system/include/S6E2CCA/PDL/dstc.c \
../system/include/S6E2CCA/PDL/i2s.c \
../system/include/S6E2CCA/PDL/interrupts_fm4_type_b.c \
../system/include/S6E2CCA/PDL/mfs.c \
../system/include/S6E2CCA/PDL/pdl.c \
../system/include/S6E2CCA/PDL/system_s6e2cc.c \
../system/include/S6E2CCA/PDL/wm8731.c 

OBJS += \
./system/include/S6E2CCA/PDL/clk.o \
./system/include/S6E2CCA/PDL/dstc.o \
./system/include/S6E2CCA/PDL/i2s.o \
./system/include/S6E2CCA/PDL/interrupts_fm4_type_b.o \
./system/include/S6E2CCA/PDL/mfs.o \
./system/include/S6E2CCA/PDL/pdl.o \
./system/include/S6E2CCA/PDL/system_s6e2cc.o \
./system/include/S6E2CCA/PDL/wm8731.o 

C_DEPS += \
./system/include/S6E2CCA/PDL/clk.d \
./system/include/S6E2CCA/PDL/dstc.d \
./system/include/S6E2CCA/PDL/i2s.d \
./system/include/S6E2CCA/PDL/interrupts_fm4_type_b.d \
./system/include/S6E2CCA/PDL/mfs.d \
./system/include/S6E2CCA/PDL/pdl.d \
./system/include/S6E2CCA/PDL/system_s6e2cc.d \
./system/include/S6E2CCA/PDL/wm8731.d 


# Each subdirectory must supply rules for building sources it contributes
system/include/S6E2CCA/PDL/%.o: ../system/include/S6E2CCA/PDL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -munaligned-access -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -D__FPU_PRESENT -DARM_MATH_CM4 -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\cmsis" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\platform" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\S6E2CCA\PDL" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\S6E2CCA\startup" -std=gnu11 -Wmissing-prototypes -Wstrict-prototypes -Wbad-function-cast -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


