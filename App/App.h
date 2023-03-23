/*
 * App.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef APP_APP_H_
#define APP_APP_H_

#include "avr/io.h"

#include "../HAL/LED/LED.h"

#include "../HAL/BUTTON/BUTTON.h"

/*

#define CARS_RED 				PORTA_2
#define CARS_YELLOW				PORTA_1
#define CARS_GREEN 				PORTA_0

#define PEDESTRIANS_RED 		PORTA_2
#define PEDESTRIANS_YELLOW		PORTA_1
#define PEDESTRIANS_GREEN 		PORTA_0
*/

void app_initializations(void);

void Blinking_Yellow(void);

void  APP_start(void);

void PEDESTRIANS_Mode(void);

#endif /* APP_APP_H_ */
