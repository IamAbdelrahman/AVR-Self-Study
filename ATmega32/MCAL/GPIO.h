/* 
 * File:   GPIO.h
 * Author: ak
 *
 * Created on February 12, 2023, 12:16 AM
 */

#ifndef GPIO_H
#define	GPIO_H
#include "Registers.h"
#include "Platform_Types.h"

#define IN 0
#define OUT 1

#define HIGH 1
#define LOW 0

/***************************DIO_init**********************************
 * This function initialize the pins of the port registers
 * through configuring the pin as an output pin or an input pin
 *
 * Inputs: (portName): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(pinNumber): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * (direction): It represents the state of the pin
 * whether it's out or in and you can use numbers 0 or 1
 * otherwise you can use the macro directly for well-readability
 * 
 * Return: Void
 ***************************DIO_init**********************************/
void DIO_init (uint8_t portName, uint8_t pinNumber, uint8_t direction);	


/***************************DIO_write**********************************
 * This function is used to pull each pin high or low of the port registers
 * through writing on it 1(high) or 0(low).
 *
 * Inputs: (portName): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(pinNumber): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * (value): It represents the state of the pin
 * whether it's high or low and you can use numbers 0 or 1
 * otherwise you can use the macro directly for well-readability
 * 
 * Return: Void
***************************DIO_write**********************************/
void DIO_write (uint8_t portName, uint8_t pinNumber, uint8_t value); 


/***************************DIO_toggle**********************************
 * This function is used to toggle each pin from high to low
 * through using the toggle_bit equation (defined in registers file).
 *
 * Inputs: (portName): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(pinNumber): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * 
 * Return: Void
***************************DIO_toggle**********************************/
void DIO_toggle (uint8_t portName, uint8_t pinNumber); 


/***************************DIO_read**********************************
 * This function is used to know the status of each pin high or low of the 
 * port registers through reading from it 1(high) or 0(low).
 *
 * Inputs: (portName): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(pinNumber): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * (*value): This pointer will store the state of the pin
 * whether it's high or low ( 0 or 1) by reading from each pin
 * 
 * Return: Void
***************************DIO_read**********************************/
void DIO_read (uint8_t portName, uint8_t pinNumber, uint8_t* value); 

#endif	/* GPIO_H */

