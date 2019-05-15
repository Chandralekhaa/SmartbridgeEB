/*
 * GccApplication8.c
 *
 * Created: 10-05-2019 11:21:03
 * Author : User
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#define LED_OUTPUT PORTB
#define PIR_Input PINC


int main(void)

{
    /* Replace with your application code */
	DDRC=0X00; //set the PIR port as input port
	DDRB=0Xff; //set the LED port as output port
    while (1) 
    {
		LED_OUTPUT=PIR_Input; //when sensor is detected led will be high
	}
}
