################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mcal/Port/Port.c" \

C_SRCS += \
../src/Bsw/Mcal/Port/Port.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mcal/Port/Port.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mcal/Port/Port.d" \

OBJS += \
./src/Bsw/Mcal/Port/Port.o \

OBJS_QUOTED += \
"./src/Bsw/Mcal/Port/Port.o" \

C_DEPS += \
./src/Bsw/Mcal/Port/Port.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mcal/Port/Port.o: ../src/Bsw/Mcal/Port/Port.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mcal/Port/Port.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mcal/Port/Port.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


