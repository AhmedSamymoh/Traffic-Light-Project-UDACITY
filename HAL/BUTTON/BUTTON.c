/*
 * BUTTON.c
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#include"BUTTON.h"


/*
void BUTTON_init()
{
	Dio_init();
}
*/

uint8_t BUTTON_Read(uint8_t ledPort_Pin)
{
	Dio_Read(ledPort_Pin);
}
