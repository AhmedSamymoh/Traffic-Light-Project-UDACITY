/*
 * timer.c
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */



#include"timer.h"
#include <avr/interrupt.h>

#include"../../UTILITES/BitMath.h"

uint8_t Overflow_Counter;

/*****************************************************************************************
						 			Timer0 Init

*****************************************************************************************/
//Time Tick Duration = Prescaler / F_CPU


void Timer0_Init(void)
{
	TCCR0 |= 0x00;//NORMAL MODE


}
/*****************************************************************************************
						 			Delay Functions

*****************************************************************************************/
void Timer0_Delay_1sec(void)
{
	uint32_t overflowcounter=0;
	//Prescaler 256
	TCCR0 = (1 << CS02);
	TCNT0 = 154; // initial Value
	while (overflowcounter < 122)
	{
			while((TIFR & (1<<0)) == 0);
			TIFR |= (1<<0);

			overflowcounter++;
	}

	overflowcounter = 0;
	TCCR0 =0x00;
}



void Timer0_Delay_5sec(void)
{
	uint32_t overflowcounter=0;
	//Prescaler 1024
	TCCR0 = (1 << CS02) | (1 << CS00);
	TCNT0 = 2; // initial Value
	while (overflowcounter < 153)
	{
			while((TIFR & (1<<0)) == 0);
			TIFR |= (1<<0);

			overflowcounter++;
	}

	overflowcounter = 0;
	TCCR0 =0x00;
}




/*

void Timer0_Delay(uint16_t milliseconds) {

    //to Calculate the no of overflows needed to delay for the given time
    double tick_time = 1024.0 / 8000000;
    double max_delay = tick_time * 256;
    uint16_t num_overflows ;
    uint8_t Init_value;

    if (milliseconds < max_delay) {
        num_overflows = 1;
        Init_value = 256 - round((double)milliseconds / tick_time);
    } else {
        num_overflows = ceil((double)milliseconds / max_delay);
        Init_value = 256 - round((double)milliseconds / (tick_time * num_overflows));
    }

    TCCR0 |= ((1<<0) | (1<<2));
    Overflow_Counter = 0;

    while (Overflow_Counter < num_overflows){
    	while (( TIFR & (1<<0) )==0 )
    			{
    				TIFR |= (1<<0);
    				Overflow_Counter++;//	 wait for the flag
    			}
    			//clear the overflow flag

    }
    while (overflowcounter < 153)
    		{
    			while((TIFR & (1<<0)) == 0);
    			TIFR |= (1<<0);

    			overflowcounter++;
    		}

    Overflow_Counter = 0;
    TCCR0 = 0x00;

}

*/


