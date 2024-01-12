/*
 * ANIMATION_Program.c
 *
 *  Created on: Jan 12, 2024
 *      Author: Rober Maher
 */

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include <util/delay.h>

// Include DIO
#include "../Include/MCAL/DIO/DIO_Interface.h"

#include "../Include/HAL/LCD/LCD_Interface.h"
#include "../Include/HAL/LCD/LCD_Private.h"
#include "../Include/HAL/LCD/LCD_Cfg.h"


void ANIMATION_INTRO(void)
{
	u8 customChar[] = {
			0b00101,
			0b11111,
			0b10100,
			0b00100,
			0b00100,
			0b01010,
			0b10001,
			0b00000
	};



	HLCD_voidDisplayString("Hey!My Name is ");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL1);
	HLCD_voidDisplayString("Roby...");
	HLCD_voidSendSpecialSymbol(customChar,LCD_PATTERN0, LCD_ROW2, LCD_COL8);
}

void ANIMATION_RUN(void)
{
	u8 customChar1[] = {
			0b10100,
			0b11111,
			0b00101,
			0b00100,
			0b00111,
			0b01001,
			0b01000,
			0b00000
	};
	u8 customChar2[] = {
			0b00101,
			0b11111,
			0b10100,
			0b00100,
			0b11100,
			0b10010,
			0b00010,
			0b00000
	};

	HLCD_voidDisplayString("I Can Run...");

	for (u8 i = 0; i < 15; i++)
	{
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidSendSpecialSymbol(customChar1, LCD_PATTERN0, LCD_ROW2, LCD_COL1 + i);
		_delay_ms(300);
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidDisplayString(" ");
		i++;
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidSendSpecialSymbol(customChar2, LCD_PATTERN0, LCD_ROW2, LCD_COL1 + i);
		_delay_ms(300);
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidDisplayString(" ");
	}
}


void ANIMATION_PLAY(void)
{
	u8 customChar1[] = {
			0b01010,
			0b01111,
			0b00011,
			0b01010,
			0b01110,
			0b01010,
			0b01010,
			0b00000
	};
	u8 customChar2[] = {
			0b01010,
			0b01111,
			0b01011,
			0b00010,
			0b01110,
			0b01010,
			0b01010,
			0b00000
	};

	HLCD_voidDisplayString("I Can Play ");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL1);
	HLCD_voidDisplayString("FootBall...");


	for(int i=0 ; i<=10 ; i++)
	{
		HLCD_voidSendSpecialSymbol(customChar1,LCD_PATTERN0, LCD_ROW2, LCD_COL16);
		_delay_ms(200);
		HLCD_voidGoToPos(LCD_ROW2,LCD_COL16);

		HLCD_voidSendSpecialSymbol(customChar2,LCD_PATTERN0, LCD_ROW2, LCD_COL16);
		_delay_ms(200);
		HLCD_voidGoToPos(LCD_ROW2,LCD_COL16);
	}
}

void ANIMATION_DANCE(void)
{
	u8 customChar1[] = {
			0b10100,
			0b11111,
			0b00101,
			0b00100,
			0b00110,
			0b01010,
			0b01000,
			0b00000
	};
	u8 customChar2[] = {
			0b00101,
			0b11111,
			0b10100,
			0b00100,
			0b01100,
			0b01010,
			0b00010,
			0b00000
	};

	HLCD_voidDisplayString("I Can Dance ^-^ ");

	for(int i=0 ; i<=10 ; i++)
	{
		HLCD_voidSendSpecialSymbol(customChar1,LCD_PATTERN0, LCD_ROW2, LCD_COL16);
		_delay_ms(300);
		HLCD_voidGoToPos(LCD_ROW2,LCD_COL16);

		HLCD_voidSendSpecialSymbol(customChar2,LCD_PATTERN0, LCD_ROW2, LCD_COL16);
		_delay_ms(300);
		HLCD_voidGoToPos(LCD_ROW2,LCD_COL16);
	}
}

void ANIMATION_KILL(void)
{
	u8 customChar1[] = {
			0b00000,
			0b00100,
			0b01110,
			0b10101,
			0b00100,
			0b01010,
			0b10001,
			0b00000
	};
	u8 customChar2[] = {
			0b00000,
			0b00100,
			0b01110,
			0b10101,
			0b00100,
			0b01010,
			0b10001,
			0b00000
	};
	u8 customChar3[] = {
			0b00000,
			0b00100,
			0b01111,
			0b10100,
			0b00100,
			0b01010,
			0b10001,
			0b00000
	};
	u8 customChar4[] = {
			0b00000,
			0b00000,
			0b00001,
			0b10010,
			0b11111,
			0b10010,
			0b00001,
			0b00000
	};
	u8 customChar5[] = {
			0b00000,
			0b00000,
			0b00000,
			0b00011,
			0b00000,
			0b00011,
			0b00000,
			0b00000
	};
	u8 pistol[] = {
			0b00000,
			0b00000,
			0b11100,
			0b11000,
			0b10000,
			0b00000,
			0b00000,
			0b00000
	};
	u8 bullet[] = {
			0b00000,
			0b00000,
			0b01100,
			0b00000,
			0b00000,
			0b00000,
			0b00000,
			0b00000
	};

	HLCD_voidDisplayString("Once a Day, Roby");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL1);
	HLCD_voidDisplayString("Meets Bad Man");

	_delay_ms(2000);
	HLCD_voidClearDisplay();

	HLCD_voidDisplayString("And,WhatHappened");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL1);
	HLCD_voidDisplayString("Was Horrible !");

	_delay_ms(2000);
	HLCD_voidClearDisplay();

	HLCD_voidSendSpecialSymbol(customChar1,LCD_PATTERN0, LCD_ROW2, LCD_COL1);
	HLCD_voidSendSpecialSymbol(customChar2,LCD_PATTERN1, LCD_ROW2, LCD_COL16);

	HLCD_voidGoToPos(LCD_ROW1,LCD_COL7);
	HLCD_voidDisplayString("Don't Kill");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL10);
	HLCD_voidDisplayString("Me!");

	_delay_ms(2000);
	HLCD_voidClearDisplay();

	HLCD_voidSendSpecialSymbol(customChar1,LCD_PATTERN0, LCD_ROW2, LCD_COL1);
	HLCD_voidSendSpecialSymbol(customChar2,LCD_PATTERN1, LCD_ROW2, LCD_COL16);

	HLCD_voidGoToPos(LCD_ROW1,LCD_COL3);
	HLCD_voidDisplayString("GAMEOVER");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL3);
	HLCD_voidDisplayString("Roby...");

	_delay_ms(2000);
	HLCD_voidClearDisplay();

	HLCD_voidSendSpecialSymbol(customChar1,LCD_PATTERN0, LCD_ROW2, LCD_COL1);
	HLCD_voidSendSpecialSymbol(customChar2,LCD_PATTERN2, LCD_ROW2, LCD_COL16);

	_delay_ms(300);

	HLCD_voidSendSpecialSymbol(customChar3,LCD_PATTERN0, LCD_ROW2, LCD_COL1);
	HLCD_voidSendSpecialSymbol(pistol,LCD_PATTERN1, LCD_ROW2, LCD_COL2);

	_delay_ms(300);

	for (u8 i = 2; i < 15; i++)
	{
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidSendSpecialSymbol(bullet, LCD_PATTERN4, LCD_ROW2, LCD_COL1 + i);
		_delay_ms(100);
		HLCD_voidGoToPos(LCD_ROW2, LCD_COL1 + i);
		HLCD_voidDisplayString(" ");
	}

	HLCD_voidSendSpecialSymbol(customChar5,LCD_PATTERN5, LCD_ROW2, LCD_COL15);
	HLCD_voidSendSpecialSymbol(customChar4,LCD_PATTERN2, LCD_ROW2, LCD_COL16);

	HLCD_voidClearDisplay();

	HLCD_voidSendSpecialSymbol(customChar5,LCD_PATTERN5, LCD_ROW2, LCD_COL15);
	HLCD_voidSendSpecialSymbol(customChar4,LCD_PATTERN2, LCD_ROW2, LCD_COL16);

}

void ANIMATION_END(void)
{

	HLCD_voidGoToPos(LCD_ROW1,LCD_COL1);
	HLCD_voidDisplayString("R.I.P");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL1);
	HLCD_voidDisplayString("Roby!");
	_delay_ms(3000);
	HLCD_voidClearDisplay();

	HLCD_voidGoToPos(LCD_ROW1,LCD_COL3);
	HLCD_voidDisplayString("Created By");
	HLCD_voidGoToPos(LCD_ROW2,LCD_COL3);
	HLCD_voidDisplayString("Rober Maher");
}


