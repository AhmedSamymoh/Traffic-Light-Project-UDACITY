/*
 * LED.c
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#include "LED.h"
/*
void LED_init()
{
	 Dio_init();
}
*/

void LED_on(uint8_t ledPort_Pin)
{

	Dio_Write(ledPort_Pin , HIGH);

}


void LED_off(uint8_t ledPort_Pin)
{
	Dio_Write(ledPort_Pin , LOW);
}

/*void LED_toggle(uint8_t ledPort_Pin)*/
