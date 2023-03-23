/*
 * App.c
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */

#include"App.h"

bool yellow_Flag = 0;
bool Flag = 0;



/*****************************************************************************************
#define PEDESTRIAN_BUTTON 		PORTD_2

#define CARS_RED 				PORTA_2
#define CARS_YELLOW				PORTA_1
#define CARS_GREEN 				PORTA_0

#define PEDESTRIANS_RED 		PORTA_2
#define PEDESTRIANS_YELLOW		PORTA_1
#define PEDESTRIANS_GREEN 		PORTA_0

*****************************************************************************************/


void app_initializations(void){
	Dio_init();

	Timer0_Init();

	Interrupt_init();

	Interrupt_GlobleEN();
}



void  APP_start()
{

	Blinking_Yellow();

	LED_off(CARS_YELLOW);
	LED_off(PEDESTRIANS_YELLOW);

	LED_on(CARS_RED);
	LED_on(PEDESTRIANS_GREEN);

	Timer0_Delay_5sec();

	LED_off(CARS_RED);
	LED_off(PEDESTRIANS_GREEN);

	Blinking_Yellow();

	LED_off(CARS_YELLOW);
	LED_off(PEDESTRIANS_YELLOW);

	LED_on(CARS_GREEN);
	LED_on(PEDESTRIANS_RED);
	Flag = 1;

	Timer0_Delay_5sec();

	LED_off(CARS_GREEN);
	LED_off(PEDESTRIANS_RED);
	Flag = 0;



}

void PEDESTRIANS_Mode()
{
	//CHECK IF THERE SOMEONE PRESSED THE BUTTON WHILE RED LED IS ON
	if(Flag)

	{
		LED_off(CARS_GREEN);
		Blinking_Yellow();
		LED_off(CARS_YELLOW);
		LED_off(PEDESTRIANS_YELLOW);
		LED_off(PEDESTRIANS_RED);

		LED_on(CARS_RED);
		LED_on(PEDESTRIANS_GREEN);
		Timer0_Delay_5sec();


	}else if(yellow_Flag || BIT_IS_SET(PORT_D,0))
	{
		LED_off(CARS_GREEN);
		LED_on(PEDESTRIANS_RED);


		Blinking_Yellow();

		LED_off(CARS_YELLOW);
		LED_off(PEDESTRIANS_YELLOW);
		LED_off(PEDESTRIANS_RED);

		LED_on(PEDESTRIANS_GREEN);
		LED_on(CARS_RED);

		Timer0_Delay_5sec();//then return to the Normal mode with yellow LEDs
	}

	LED_off(CARS_RED);
	Blinking_Yellow();

	LED_off(CARS_YELLOW);
	LED_off(PEDESTRIANS_YELLOW);

	LED_off(PEDESTRIANS_GREEN);
	LED_on(CARS_GREEN);
	LED_on(PEDESTRIANS_RED);

	Timer0_Delay_5sec();

	LED_off(CARS_GREEN);
	LED_off(PEDESTRIANS_RED);

	 APP_start();
}

ISR(INT0_vect)
{
	PEDESTRIANS_Mode();
}


void Blinking_Yellow()
{
	yellow_Flag = 1;
	uint8_t index = 5;
	while(index){
	Dio_Pin_Toggle(PEDESTRIANS_YELLOW);
	Dio_Pin_Toggle(CARS_YELLOW);
	Timer0_Delay_1sec();
	index--;
	}
	yellow_Flag = 0;
}

