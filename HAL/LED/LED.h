/*
 * LED.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_

#include "avr/io.h"

#include "avr/interrupt.h"

#include"../../MCAL/DIO/DIO.h"

#include"../../MCAL/Timer/timer.h"

#include "../../MCAL/Interrupt/Interrupt.h"

/*void LED_init();*/

void LED_on(uint8_t ledPort_Pin);

void LED_off(uint8_t ledPort_Pin);
/*
void LED_togglr(uint8_t ledPort_Pin);*/

#endif /* HAL_LED_LED_H_ */
