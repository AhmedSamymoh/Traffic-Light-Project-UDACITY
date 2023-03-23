/*
 * DIO_config.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef MCAL_DIO_DIO_CONFIG_H_
#define MCAL_DIO_DIO_CONFIG_H_

#include "DIO_types.h"

#define PIN_COUNT 7

#define Story_1 0
#define Story_2 1
#define Story_3 2
#define Story_4 3

#define PEDESTRIAN_BUTTON 		PORTD_2

#define CARS_RED 				PORTA_2
#define CARS_YELLOW				PORTA_1
#define CARS_GREEN 				PORTA_0

#define PEDESTRIANS_RED 		PORTB_2
#define PEDESTRIANS_YELLOW		PORTB_1
#define PEDESTRIANS_GREEN 		PORTB_0

typedef struct{
	Dio_port_t port;
	Dio_pin_t pin;
	Dio_dir_t direction;
}Dio_pin_config;


#endif /* MCAL_DIO_DIO_CONFIG_H_ */
