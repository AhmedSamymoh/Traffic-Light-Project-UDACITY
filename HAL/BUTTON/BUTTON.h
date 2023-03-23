/*
 * BUTTON.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef HAL_BUTTON_BUTTON_H_
#define HAL_BUTTON_BUTTON_H_

#include"../../MCAL/DIO/DIO.h"

/*void BUTTON_init();*/

uint8_t BUTTON_Read(uint8_t ledPort_Pin);

#endif /* HAL_BUTTON_BUTTON_H_ */
