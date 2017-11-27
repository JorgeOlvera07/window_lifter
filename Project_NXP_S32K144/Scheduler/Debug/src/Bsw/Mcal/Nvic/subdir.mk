################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mcal/Nvic/Nvic.c" \

C_SRCS += \
../src/Bsw/Mcal/Nvic/Nvic.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mcal/Nvic/Nvic.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mcal/Nvic/Nvic.d" \

OBJS += \
./src/Bsw/Mcal/Nvic/Nvic.o \

OBJS_QUOTED += \
"./src/Bsw/Mcal/Nvic/Nvic.o" \

C_DEPS += \
./src/Bsw/Mcal/Nvic/Nvic.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mcal/Nvic/Nvic.o: ../src/Bsw/Mcal/Nvic/Nvic.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mcal/Nvic/Nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mcal/Nvic/Nvic.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


