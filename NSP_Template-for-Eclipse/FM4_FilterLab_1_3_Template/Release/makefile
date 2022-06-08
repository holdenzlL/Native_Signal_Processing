################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include system/include/platform/subdir.mk
-include system/include/S6E2CCA/startup/subdir.mk
-include system/include/S6E2CCA/PDL/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
FM4_FilterLab_1_3.hex \

SECONDARY_SIZE += \
FM4_FilterLab_1_3.siz \


# All Target
all: FM4_FilterLab_1_3.elf secondary-outputs

# Tool invocations
FM4_FilterLab_1_3.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mthumb-interwork -mfloat-abi=hard -mfpu=fpv4-sp-d16 -munaligned-access -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -T "D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\ldscripts\s6e2cca_ram.ld" -nostartfiles -Xlinker --gc-sections -L"D:\User\Geschaeft\Hochschule_Karlsruhe\GNUARMEclipse_Photon\eclipse\workspace_FM4\FM4_FilterLab_1_3\libs" -Wl,-Map,"FM4_FilterLab_1_3.map" -Xlinker --cref -u _printf_float -u _scanf_float -lm -o "FM4_FilterLab_1_3.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

FM4_FilterLab_1_3.hex: FM4_FilterLab_1_3.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O ihex "FM4_FilterLab_1_3.elf"  "FM4_FilterLab_1_3.hex"
	@echo 'Finished building: $@'
	@echo ' '

FM4_FilterLab_1_3.siz: FM4_FilterLab_1_3.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "FM4_FilterLab_1_3.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(CPP_DEPS) FM4_FilterLab_1_3.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
