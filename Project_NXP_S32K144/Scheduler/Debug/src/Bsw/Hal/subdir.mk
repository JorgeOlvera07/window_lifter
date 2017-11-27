################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Hal/hal_buttons.c" \
"../src/Bsw/Hal/hal_indicators.c" \
"../src/Bsw/Hal/hal_windowleds.c" \

C_SRCS += \
../src/Bsw/Hal/hal_buttons.c \
../src/Bsw/Hal/hal_indicators.c \
../src/Bsw/Hal/hal_windowleds.c \

OBJS_OS_FORMAT += \
./src/Bsw/Hal/hal_buttons.o \
./src/Bsw/Hal/hal_indicators.o \
./src/Bsw/Hal/hal_windowleds.o \

C_DEPS_QUOTED += \
"./src/Bsw/Hal/hal_buttons.d" \
"./src/Bsw/Hal/hal_indicators.d" \
"./src/Bsw/Hal/hal_windowleds.d" \

OBJS += \
./src/Bsw/Hal/hal_buttons.o \
./src/Bsw/Hal/hal_indicators.o \
./src/Bsw/Hal/hal_windowleds.o \

OBJS_QUOTED += \
"./src/Bsw/Hal/hal_buttons.o" \
"./src/Bsw/Hal/hal_indicators.o" \
"./src/Bsw/Hal/hal_windowleds.o" \

C_DEPS += \
./src/Bsw/Hal/hal_buttons.d \
./src/Bsw/Hal/hal_indicators.d \
./src/Bsw/Hal/hal_windowleds.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Hal/hal_buttons.o: ../src/Bsw/Hal/hal_buttons.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Hal/hal_buttons.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Hal/hal_buttons.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/Hal/hal_indicators.o: ../src/Bsw/Hal/hal_indicators.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Hal/hal_indicators.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Hal/hal_indicators.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/Hal/hal_windowleds.o: ../src/Bsw/Hal/hal_windowleds.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Hal/hal_windowleds.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Hal/hal_windowleds.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


