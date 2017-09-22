################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../fwk/src/fwk.cpp 

OBJS += \
./fwk/src/fwk.o 

CPP_DEPS += \
./fwk/src/fwk.d 


# Each subdirectory must supply rules for building sources it contributes
fwk/src/%.o: ../fwk/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


