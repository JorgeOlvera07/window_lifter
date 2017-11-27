################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Services/SchM/SchM.c" \
"../src/Bsw/Services/SchM/SchM_Cfg.c" \
"../src/Bsw/Services/SchM/SchM_Tasks.c" \

C_SRCS += \
../src/Bsw/Services/SchM/SchM.c \
../src/Bsw/Services/SchM/SchM_Cfg.c \
../src/Bsw/Services/SchM/SchM_Tasks.c \

OBJS_OS_FORMAT += \
./src/Bsw/Services/SchM/SchM.o \
./src/Bsw/Services/SchM/SchM_Cfg.o \
./src/Bsw/Services/SchM/SchM_Tasks.o \

C_DEPS_QUOTED += \
"./src/Bsw/Services/SchM/SchM.d" \
"./src/Bsw/Services/SchM/SchM_Cfg.d" \
"./src/Bsw/Services/SchM/SchM_Tasks.d" \

OBJS += \
./src/Bsw/Services/SchM/SchM.o \
./src/Bsw/Services/SchM/SchM_Cfg.o \
./src/Bsw/Services/SchM/SchM_Tasks.o \

OBJS_QUOTED += \
"./src/Bsw/Services/SchM/SchM.o" \
"./src/Bsw/Services/SchM/SchM_Cfg.o" \
"./src/Bsw/Services/SchM/SchM_Tasks.o" \

C_DEPS += \
./src/Bsw/Services/SchM/SchM.d \
./src/Bsw/Services/SchM/SchM_Cfg.d \
./src/Bsw/Services/SchM/SchM_Tasks.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Services/SchM/SchM.o: ../src/Bsw/Services/SchM/SchM.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Services/SchM/SchM.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Services/SchM/SchM.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/Services/SchM/SchM_Cfg.o: ../src/Bsw/Services/SchM/SchM_Cfg.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Services/SchM/SchM_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Services/SchM/SchM_Cfg.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Bsw/Services/SchM/SchM_Tasks.o: ../src/Bsw/Services/SchM/SchM_Tasks.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Services/SchM/SchM_Tasks.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Services/SchM/SchM_Tasks.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


