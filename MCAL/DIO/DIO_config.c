/*
 * DIO_config.c
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */


#include "DIO_config.h"


Dio_pin_config pin[PIN_COUNT]=
{
		//Three LEDs for cars - Green, Yellow, and Red
		{PORT_A,PIN_0,OUTPUT},
		{PORT_A,PIN_1,OUTPUT},
		{PORT_A,PIN_2,OUTPUT},
		//Three LEDs for pedestrians - Green, Yellow, and Red
		{PORT_B,PIN_0,OUTPUT},
		{PORT_B,PIN_1,OUTPUT},
		{PORT_B,PIN_2,OUTPUT},
		//One push button connected to INT0 pin for pedestrian
		{PORT_D,PIN_2,OUTPUT}
};


