################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO/DIO.c \
../MCAL/DIO/DIO_config.c 

OBJS += \
./MCAL/DIO/DIO.o \
./MCAL/DIO/DIO_config.o 

C_DEPS += \
./MCAL/DIO/DIO.d \
./MCAL/DIO/DIO_config.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/DIO/%.o: ../MCAL/DIO/%.c MCAL/DIO/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


