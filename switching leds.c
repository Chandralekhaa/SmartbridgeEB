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
#include <util/delay.h>


int main(void)

{
    /* Replace with your application code */
	DDRC=0X01; //first pin of port c as output
	DDRD=0X00; //all pins of port d as input
    while (1) 
    {
		if((PIND&(1<<PD0))==0) //if switch is pressed
		{
			PORTC=0X01; //turns on led
			_delay_ms(3000); 
			PORTC=0X00; //turns off led
        }
	}
}
