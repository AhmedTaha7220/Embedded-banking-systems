/*
 * 7seg.h
 *
 *  Created on: May 8, 2023
 *      Author: Mega Store
 */

#ifndef HAL_7SEG_H_
#define HAL_7SEG_H_
#include "../LIB/std_types.h"
#include "../LIB/micro_config.h"
#include "../LIB/mem_map.h"
#include "../MCAL/common_macros.h"
//First assigning pins to 7seg pins
#define a 1
#define b 2
#define c 3
#define d 4
#define e 5
#define f 6
#define g 7
#define dot 0

//7seg registers
#define DDRreg DDRA
#define PORTreg PORTA

void write_number (uint8 num);

#endif /* HAL_7SEG_H_ */
