/*
 * Timer_Tist.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef MCAL_TIMER_TIMER_TIST_H_
#define MCAL_TIMER_TIMER_TIST_H_

#include"timer.h"
#include "../DIO/DIO.h"



void Testing_Timers(void)
{

		LED_on(PORTA_1);
		Dio_Write(PORTA_1,HIGH);
		Timer0_Delay_5sec();
		LED_off(PORTA_1);
		Timer0_Delay_1sec();
}



#endif /* MCAL_TIMER_TIMER_TIST_H_ */
