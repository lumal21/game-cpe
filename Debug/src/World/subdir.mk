################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/World/Chunk.cpp \
../src/World/World.cpp 

OBJS += \
./src/World/Chunk.o \
./src/World/World.o 

CPP_DEPS += \
./src/World/Chunk.d \
./src/World/World.d 


# Each subdirectory must supply rules for building sources it contributes
src/World/%.o: ../src/World/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


