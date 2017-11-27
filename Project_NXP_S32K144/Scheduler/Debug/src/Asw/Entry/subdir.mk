################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Asw/Entry/Main.c" \

C_SRCS += \
../src/Asw/Entry/Main.c \

OBJS_OS_FORMAT += \
./src/Asw/Entry/Main.o \

C_DEPS_QUOTED += \
"./src/Asw/Entry/Main.d" \

OBJS += \
./src/Asw/Entry/Main.o \

OBJS_QUOTED += \
"./src/Asw/Entry/Main.o" \

C_DEPS += \
./src/Asw/Entry/Main.d \


# Each subdirectory must supply rules for building sources it contributes
src/Asw/Entry/Main.o: ../src/Asw/Entry/Main.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Asw/Entry/Main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Asw/Entry/Main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


