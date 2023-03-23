/*
 * timer.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#ifndef MCAL_TIMER_TIMER_H_
#define MCAL_TIMER_TIMER_H_

#include "../DIO/DIO.h"
#include"../Interrupt/Interrupt.h"


//*********************************   NORMAL MODE   **************************************


void Timer0_Delay_5sec(void);

void Timer0_Delay_1sec(void);

void Timer0_Init(void);

/*void Testing_Timers(void);*/

#endif /* MCAL_TIMER_TIMER_H_ */
