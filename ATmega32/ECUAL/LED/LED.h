#ifndef DIO_DRIVERS_ECUAL_LED_H_
#define DIO_DRIVERS_ECUAL_LED_H_

#include "GPIO.h"	

/***************************LED_init**********************************
 * This function is used to initialize the status of the led connected to
 * any pin in any port register in the microcontroller. It must be an output
 * device by calling the function DIO_init() and passing a high value (1)
 * to it
 *
 * Inputs: (ledport): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(ledpin): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * 
 * Return: Void
***************************LED_init**********************************/
void LED_init (uint8_t ledport, uint8_t ledpin); 


/***************************LED_on**********************************
 * This function is used to turn on the the led connected to
 * any pin in any port register in the microcontroller through calling the
 * function DIO_write() and passing high value (1) to it.
 *
 * Inputs: (ledport): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(ledpin): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * 
 * Return: Void
***************************LED_on**********************************/
void LED_on (uint8_t ledport, uint8_t ledpin);

/***************************LED_off**********************************
 * This function is used to turn off the the led connected to
 * any pin in any port register in the microcontroller through calling the
 * function DIO_write() and passing low value (0) to it.
 *
 * Inputs: (ledport): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(ledpin): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * 
 * Return: Void
***************************LED_off**********************************/
void LED_off (uint8_t ledport, uint8_t ledpin);

/***************************LED_toggle**********************************
 * This function is used to toggle the the led connected to
 * any pin in any port register in the microcontroller through calling the
 * function DIO_toggle().
 *
 * Inputs: (ledport): This is a character. It must be one of 
 * these characters 'A', 'B', 'C', and 'D' as they represent the
 * name of the ports of the microcontroller.
 *(ledpin): It represents the pin number of each port
 * and takes a number from 0 : 7.
 * 
 * Return: Void
***************************LED_toggle**********************************/
void LED_toggle (uint8_t ledport, uint8_t ledpin);


#endif /* DIO_DRIVERS_ECUAL_LED_H_ */