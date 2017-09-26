################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../interpreter/src/interpreter.cpp 

OBJS += \
./interpreter/src/interpreter.o 

CPP_DEPS += \
./interpreter/src/interpreter.d 


# Each subdirectory must supply rules for building sources it contributes
interpreter/src/%.o: ../interpreter/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


