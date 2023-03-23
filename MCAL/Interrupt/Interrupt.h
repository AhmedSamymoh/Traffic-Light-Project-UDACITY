/*
 * Interrupt.h
 *
 *  Created on: Mar 21, 2023
 *      Author: CAVO TECH
 */

#ifndef MCAL_INTERRUPT_INTERRUPT_H_
#define MCAL_INTERRUPT_INTERRUPT_H_

#include"../DIO/DIO.h"
#include "avr/interrupt.h"

#define EXT_INT0	__vector_1
#define EXT_INT1	__vector_2
#define EXT_INT2	__vector_3
#define TIMER_0_OVERFLOW __vector_11



void Interrupt_init();

void Interrupt_GlobleEN();

void Interrupt_GlobleDIS();


/*void Interrupt_Overflow();*/


#endif /* MCAL_INTERRUPT_INTERRUPT_H_ */
