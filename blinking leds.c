/*
 * GccApplication2.c
 *
 * Created: 09-05-2019 14:15:24
 * Author : User
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB= 0XFF;
    while (1) 
    {
		PORTB=0XFF;
		_delay_ms(100);
		PORTB=0X00;
		_delay_ms(100);
    }
}

