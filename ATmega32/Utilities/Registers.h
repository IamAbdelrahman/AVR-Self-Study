/*
 * Registers.h
 *
 *  Created on: Oct 10, 2022
 *      Author: ak
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "Platform_Types.h"

#define FCPU    16000000
#define SET_BIT(X, BIT_NO)   (X |= (1 << BIT_NO))
#define CLR_BIT(X, BIT_NO)  (X &= ~(1 << BIT_NO))
#define TOGGLE_BIT(X, BIT_NO)   (X ^= (1 << BIT_NO))
#define READ_BIT(X, BIT_NO) ((X & (1 << BIT_NO) >> BIT_NO))

/* PORT A Registers */
#define PORTA *((vuint8_t*)0x3B)	
#define DDRA *((vuint8_t*)0x3A)	
#define PINA *((vuint8_t*)0x39)	

/* PORT B Registers */

#define PORTB *((vuint8_t*)0x38)	
#define DDRB *((vuint8_t*)0x37)	
#define PINB *((vuint8_t*)0x36)	

/* PORT C Registers */

#define PORTC *((vuint8_t*)0x35)	//8-bit register
#define DDRC *((vuint8_t*)0x34)	//8-bit register
#define PINC *((vuint8_t*)0x33)	//8-bit register

/* PORT D Registers */

#define PORTD *((vuint8_t*)0x32)	//8-bit register
#define DDRD *((vuint8_t*)0x31)	//8-bit register
#define PIND *((vuint8_t*)0x30)	//8-bit register

/* Timer Registers */

#define TCCR0 *((vuint8_t*)0x53)	//8-bit register
#define TCNT0 *((vuint8_t*)0x52)	//8-bit register
#define TIFR *((vuint8_t*)0x58)	//8-bit register


#endif /* REGISTERS_H_ */