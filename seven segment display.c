/*
 * GccApplication2.c
 *
 * Created: 13-05-2019 21:27:47
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
		PORTA=0XFD;
		_delay_ms(1000);
		PORTA=0X61;
		_delay_ms(1000);
		PORTA=0XDB;
		_delay_ms(1000);
		PORTA=0XF3;
		_delay_ms(1000);
		PORTA=0X67;
		_delay_ms(1000);
		PORTA=0XB7;
		_delay_ms(1000);
		PORTA=0XBF;
		_delay_ms(1000);
		PORTA=0XE1;
		_delay_ms(1000);
		PORTA=0XFF;
		_delay_ms(1000);
		PORTA=0XF7;
		_delay_ms(1000);
		PORTA=0XEF;
		_delay_ms(1000);
		PORTA=0X3F;
		_delay_ms(1000);
		PORTA=0X9D;
		_delay_ms(1000);
		PORTA=0X7B;
		_delay_ms(1000);
		PORTA=0XDF;
		_delay_ms(1000);
		PORTA=0X8F;
		_delay_ms(1000);
		PORTA=0XF7;
		_delay_ms(1000);
    }
}

