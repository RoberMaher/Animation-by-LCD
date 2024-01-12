/*
 * App.c
 *
 *  Created on: 12 / 1 / 2024
 *      Author: D E L L
 */

#include <util/delay.h>

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/HAL/LCD/LCD_Interface.h"
#include "../Include/ANIMATION/ANIMATION_Interface.h"

#define F_CPU 8000000UL




int main (void)
{
	MDIO_voidInit();
	HLCD_voidInit();

	ANIMATION_INTRO();

	_delay_ms(1000);

	HLCD_voidClearDisplay();

	ANIMATION_RUN();

	HLCD_voidClearDisplay();

	ANIMATION_PLAY();

	HLCD_voidClearDisplay();

	ANIMATION_DANCE();

	HLCD_voidClearDisplay();

	ANIMATION_KILL();

	ANIMATION_END();

	while(1)
	{

	}
}
