################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Server/Connection.cpp \
../src/Server/Server.cpp 

OBJS += \
./src/Server/Connection.o \
./src/Server/Server.o 

CPP_DEPS += \
./src/Server/Connection.d \
./src/Server/Server.d 


# Each subdirectory must supply rules for building sources it contributes
src/Server/%.o: ../src/Server/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


