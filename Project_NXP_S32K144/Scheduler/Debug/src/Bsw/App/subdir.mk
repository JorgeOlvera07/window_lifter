################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/App/app_buttonscontrol.c" \
"../src/Bsw/App/app_indicatorscontrol.c" \
"../src/Bsw/App/app_windowcontrol.c" \

C_SRCS += \
../src/Bsw/App/app_buttonscontrol.c \
../src/Bsw/App/app_indicatorscontrol.c \
../src/Bsw/App/app_windowcontrol.c \

OBJS_OS_FORMAT += \
./src/Bsw/App/app_buttonscontrol.o \
./src/Bsw/App/app_indicatorscontrol.o \
./src/Bsw/App/app_windowcontrol.o \

C_DEPS_QUOTED += \
"./src/Bsw/App/app_buttonscontrol.d" \
"./src/Bsw/App/app_indicatorscontrol.d" \
"./src/Bsw/App/app_windowcontrol.d" \

OBJS += \
./src/Bsw/App/app_buttonscontrol.o \
./src/Bsw/App/app_indicatorscontrol.o \
./src/Bsw/App/app_windowcontrol.o \

OBJS_QUOTED += \
"./src/Bsw/App/app_buttonscontrol.o" \
"./src/Bsw/App/app_indicatorscontrol.o" \
"./src/Bsw/App/app_windowcontrol.o" \

C_DEPS += \
./src/Bsw/App/app_buttonscontrol.d \
./src/Bsw/App/app_indicatorscontrol.d \
./src/Bsw/App/app_windowcontrol.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/App/app_buttonscontrol.o: ../src/Bsw/App/app_buttonscontrol.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/App/app_buttonscontrol.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/App/app_buttonscontrol.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/App/app_indicatorscontrol.o: ../src/Bsw/App/app_indicatorscontrol.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/App/app_indicatorscontrol.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/App/app_indicatorscontrol.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/App/app_windowcontrol.o: ../src/Bsw/App/app_windowcontrol.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/App/app_windowcontrol.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/App/app_windowcontrol.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


