#include "GPIO.h"

void DIO_init (uint8_t portName, uint8_t pinNumber, uint8_t direction) 
{
    switch (portName) 
    {

        case 'A':

            if (direction == OUT)
                SET_BIT(DDRA, pinNumber);

            else if (direction == IN)
                CLR_BIT(DDRA, pinNumber);

            break;

        case 'B':
            if (direction == OUT)
                SET_BIT(DDRB, pinNumber);

            else if (direction == IN)
                CLR_BIT(DDRB, pinNumber);

            break;

        case 'C':
            if (direction == OUT)
                SET_BIT(DDRC, pinNumber);

            else if (direction == IN)
                CLR_BIT(DDRC, pinNumber);

            break;

        case 'D':
            if (direction == OUT)
                SET_BIT(DDRD, pinNumber);

            else if (direction == IN)
                CLR_BIT(DDRD, pinNumber);

            break;
            
        default:
            
            break;
    }
}

void DIO_write (uint8_t portName, uint8_t pinNumber, uint8_t value) 
{
    switch (portName) 
    {
        case 'A':

            if (value == HIGH)
                SET_BIT(PORTA, pinNumber);

            else if (value == LOW)
                CLR_BIT(PORTA, pinNumber);
            
            break;

        case 'B':
            if (value == HIGH)
                SET_BIT(PORTB, pinNumber);

            else if (value == LOW)
                CLR_BIT(PORTB, pinNumber);
            
            break;

        case 'C':
            if (value == HIGH)
                SET_BIT(PORTC, pinNumber);

            else if (value == LOW)
                CLR_BIT(PORTC, pinNumber);

            break;

        case 'D':
            if (value == HIGH)
                SET_BIT(PORTD, pinNumber);

            else if (value == LOW)
                CLR_BIT(PORTD, pinNumber);

            break;
            
        default:
            
            break;
    }
}

void DIO_toggle (uint8_t portName, uint8_t pinNumber) //toggle dio pins
{
    switch (portName) {

        case 'A':
            
            TOGGLE_BIT(PORTA, pinNumber);
            
            break;

        case 'B':
            
            TOGGLE_BIT(PORTB, pinNumber);
            
            break;

        case 'C':
            
            TOGGLE_BIT(PORTC, pinNumber);
            
            break;

        case 'D':
            
            TOGGLE_BIT(PORTD, pinNumber);
            
            break;
            
        default:
            
            break;
    }
}

void DIO_read (uint8_t portName, uint8_t pinNumber, uint8_t* value) {
    switch (portName) {

        case 'A':

            *value = READ_BIT(PINA, pinNumber);

            break;

        case 'B':

            *value = READ_BIT(PINB, pinNumber);

            break;

        case 'C':

            *value = READ_BIT(PINC, pinNumber);

            break;

        case 'D':

            *value = READ_BIT(PIND, pinNumber);

            break;
            
        default:
            
            break;
    }

}


