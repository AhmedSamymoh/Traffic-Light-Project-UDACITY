/*
 * DIO.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_


#include <avr/io.h>
#include <util/delay.h>
#include "../../UTILITES/BitMath.h"
#include "../../UTILITES/StdTypes.h"
#include "DIO_types.h"
#include "DIO_config.h"

void Dio_init();
void Dio_Write(channel_t ch,Dio_state_t state);
void Dio_Pin_Toggle(channel_t ch);
Dio_state_t Dio_Read(channel_t ch);



#endif /* MCAL_DIO_DIO_H_ */
