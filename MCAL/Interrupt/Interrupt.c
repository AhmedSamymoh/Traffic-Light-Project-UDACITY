/*
 * Interrupt.c
 *
 *  Created on: Mar 21, 2023
 *      Author: CAVO TECH
 */


#include "Interrupt.h"


/*****************************************************************************************
						 			Interrupt Init

*****************************************************************************************/

void Interrupt_init()
{

	GICR  |=	(1 << INT0);  //Pin INT0 as an external interrupt
	MCUCR |= 	(1 << ISC01); //Falling Edge
	GIFR   =	(1 << INTF0);
}


void Interrupt_GlobleEN()
{
	SET_BIT(SREG,7);
}
void Interrupt_GlobleDIS()
{
	CLEAR_BIT(SREG,7);
}

/*void Interrupt_Overflow()
{
	TIMSK |= (1 << TOIE0);
}*/
