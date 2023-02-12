/*
 * Author: Abdelrahman Kamal
 * Program: Turn on a led connected to pin0 in PortA
 * Details: Example 1[Hello-World] - Chapter 3: GPIO-Basics
 * by using ATmega Microcontroller (1MHZ)
 */
 
#include <stdio.h>
#include "GPIO.h"
#include "LED.h"

int main(void)
{   
    LED_init ('A', 0);
    
    while (1)
    {
        LED_on ('A', 0);
    }
    
    return 0;
}

