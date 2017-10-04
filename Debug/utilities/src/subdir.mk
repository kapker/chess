################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../utilities/src/utilities.cpp 

OBJS += \
./utilities/src/utilities.o 

CPP_DEPS += \
./utilities/src/utilities.d 


# Each subdirectory must supply rules for building sources it contributes
utilities/src/%.o: ../utilities/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


