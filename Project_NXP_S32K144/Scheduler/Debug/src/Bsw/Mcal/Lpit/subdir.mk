################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mcal/Lpit/Lpit.c" \

C_SRCS += \
../src/Bsw/Mcal/Lpit/Lpit.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mcal/Lpit/Lpit.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mcal/Lpit/Lpit.d" \

OBJS += \
./src/Bsw/Mcal/Lpit/Lpit.o \

OBJS_QUOTED += \
"./src/Bsw/Mcal/Lpit/Lpit.o" \

C_DEPS += \
./src/Bsw/Mcal/Lpit/Lpit.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mcal/Lpit/Lpit.o: ../src/Bsw/Mcal/Lpit/Lpit.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mcal/Lpit/Lpit.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mcal/Lpit/Lpit.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


