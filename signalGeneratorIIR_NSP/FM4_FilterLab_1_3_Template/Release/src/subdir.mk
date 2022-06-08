################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/DFT_FFT.c \
../src/DFT_complex.c \
../src/DFT_real.c \
../src/fft_convolution.c 

OBJS += \
./src/DFT_FFT.o \
./src/DFT_complex.o \
./src/DFT_real.o \
./src/fft_convolution.o 

C_DEPS += \
./src/DFT_FFT.d \
./src/DFT_complex.d \
./src/DFT_real.d \
./src/fft_convolution.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -munaligned-access -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -D__FPU_PRESENT -DARM_MATH_CM4 -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\cmsis" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\platform" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\S6E2CCA\PDL" -I"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\system\include\S6E2CCA\startup" -std=gnu11 -Wmissing-prototypes -Wstrict-prototypes -Wbad-function-cast -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


