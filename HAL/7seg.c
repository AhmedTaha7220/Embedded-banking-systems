/*
 * 7seg.c
 *
 *  Created on: May 8, 2023
 *      Author: Mega Store
 */
#include "7seg.h"

static void zero(void);
static void one (void);
static void two (void);
static void three (void);
static void four (void);
static void five (void);
static void six (void);
static void seven(void);
static void eight (void);
static void nine (void);
void write_number (uint8 num){
	switch (num){
	case 0:
		zero();
		break;
	case 1:
		one();
		break;
	case 2:
		two();
		break;
	case 3:
		three();
		break;
	case 4:
		four();
		break;
	case 5:
		five();
		break;
	case 6:
		six();
		break;
	case 7:
		seven();
		break;
	case 8:
		eight();
		break;
	case 9:
		nine();
		break;
	default: zero();
		   }

}
static void zero(){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	SET_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	CLEAR_BIT(PORTA,g);
}
void one(void){
	CLEAR_BIT(PORTA,a);
	CLEAR_BIT(PORTA,b);
	CLEAR_BIT(PORTA,c);
	CLEAR_BIT(PORTA,d);
	SET_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	CLEAR_BIT(PORTA,g);
}
void two(void){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	CLEAR_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	SET_BIT(PORTA,e);
	CLEAR_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void three(){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	CLEAR_BIT(PORTA,e);
	CLEAR_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void four(){
	CLEAR_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	CLEAR_BIT(PORTA,d);
	CLEAR_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void five(){
	SET_BIT(PORTA,a);
	CLEAR_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	CLEAR_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void six(){
	SET_BIT(PORTA,a);
	CLEAR_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	SET_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void seven(){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	CLEAR_BIT(PORTA,d);
	CLEAR_BIT(PORTA,e);
	CLEAR_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
static void eight(){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	SET_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
void nine(){
	SET_BIT(PORTA,a);
	SET_BIT(PORTA,b);
	SET_BIT(PORTA,c);
	SET_BIT(PORTA,d);
	CLEAR_BIT(PORTA,e);
	SET_BIT(PORTA,f);
	SET_BIT(PORTA,g);
}
