/*
 * GccApplication6.c
 *
 * Created: 09-05-2019 19:00:38
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
	DDRA=0XFF;
    while (1) 
    {
		PORTA=0X55;
		_delay_ms(1000);
		PORTA=0XAA;
		_delay_ms(1000);
		
    }
}

