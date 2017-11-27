################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mef/mef_windowlifter.c" \

C_SRCS += \
../src/Bsw/Mef/mef_windowlifter.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mef/mef_windowlifter.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mef/mef_windowlifter.d" \

OBJS += \
./src/Bsw/Mef/mef_windowlifter.o \

OBJS_QUOTED += \
"./src/Bsw/Mef/mef_windowlifter.o" \

C_DEPS += \
./src/Bsw/Mef/mef_windowlifter.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mef/mef_windowlifter.o: ../src/Bsw/Mef/mef_windowlifter.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mef/mef_windowlifter.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mef/mef_windowlifter.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


