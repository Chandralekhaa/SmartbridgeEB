/*
 * GccApplication5.c
 *
 * Created: 09-05-2019 18:47:34
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
		PORTA=0X01;
		_delay_ms(1000);
		PORTA=0X02;
		_delay_ms(1000);
		PORTA=0X04;
		_delay_ms(1000);
		PORTA=0X08;
		_delay_ms(1000);
		PORTA=0X10;
		_delay_ms(1000);
		PORTA=0X20;
		_delay_ms(1000);
		PORTA=0X40;
		_delay_ms(1000);
		PORTA=0X80;
		_delay_ms(1000);
		
    }
}

