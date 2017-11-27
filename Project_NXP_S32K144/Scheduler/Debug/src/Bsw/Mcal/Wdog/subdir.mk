################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mcal/Wdog/Wdog.c" \

C_SRCS += \
../src/Bsw/Mcal/Wdog/Wdog.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mcal/Wdog/Wdog.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mcal/Wdog/Wdog.d" \

OBJS += \
./src/Bsw/Mcal/Wdog/Wdog.o \

OBJS_QUOTED += \
"./src/Bsw/Mcal/Wdog/Wdog.o" \

C_DEPS += \
./src/Bsw/Mcal/Wdog/Wdog.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mcal/Wdog/Wdog.o: ../src/Bsw/Mcal/Wdog/Wdog.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mcal/Wdog/Wdog.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mcal/Wdog/Wdog.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


