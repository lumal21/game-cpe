################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Protocol/Chat.cpp \
../src/Protocol/Chunk.cpp \
../src/Protocol/Entities.cpp \
../src/Protocol/Item.cpp \
../src/Protocol/LogonReponse.cpp \
../src/Protocol/LogonRequest.cpp \
../src/Protocol/Ping.cpp \
../src/Protocol/PlayerInfo.cpp \
../src/Protocol/Pong.cpp \
../src/Protocol/Protocol.cpp \
../src/Protocol/RegisterReponse.cpp \
../src/Protocol/RegisterRequest.cpp \
../src/Protocol/Respawn.cpp \
../src/Protocol/UpdateMoving.cpp 

OBJS += \
./src/Protocol/Chat.o \
./src/Protocol/Chunk.o \
./src/Protocol/Entities.o \
./src/Protocol/Item.o \
./src/Protocol/LogonReponse.o \
./src/Protocol/LogonRequest.o \
./src/Protocol/Ping.o \
./src/Protocol/PlayerInfo.o \
./src/Protocol/Pong.o \
./src/Protocol/Protocol.o \
./src/Protocol/RegisterReponse.o \
./src/Protocol/RegisterRequest.o \
./src/Protocol/Respawn.o \
./src/Protocol/UpdateMoving.o 

CPP_DEPS += \
./src/Protocol/Chat.d \
./src/Protocol/Chunk.d \
./src/Protocol/Entities.d \
./src/Protocol/Item.d \
./src/Protocol/LogonReponse.d \
./src/Protocol/LogonRequest.d \
./src/Protocol/Ping.d \
./src/Protocol/PlayerInfo.d \
./src/Protocol/Pong.d \
./src/Protocol/Protocol.d \
./src/Protocol/RegisterReponse.d \
./src/Protocol/RegisterRequest.d \
./src/Protocol/Respawn.d \
./src/Protocol/UpdateMoving.d 


# Each subdirectory must supply rules for building sources it contributes
src/Protocol/%.o: ../src/Protocol/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


