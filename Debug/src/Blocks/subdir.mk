################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Blocks/BedRock.cpp \
../src/Blocks/Block.cpp 

OBJS += \
./src/Blocks/BedRock.o \
./src/Blocks/Block.o 

CPP_DEPS += \
./src/Blocks/BedRock.d \
./src/Blocks/Block.d 


# Each subdirectory must supply rules for building sources it contributes
src/Blocks/%.o: ../src/Blocks/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


