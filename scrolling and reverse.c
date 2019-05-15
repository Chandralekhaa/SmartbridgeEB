/*
 * GccApplication7.c
 *
 * Created: 09-05-2019 19:10:37
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
		PORTA=1<<PIN0;
		_delay_ms(1000);
		PORTA=0<<PIN0;
		_delay_ms(1000);
		PORTA=1<<PIN1;
		_delay_ms(1000);
		PORTA=0<<PIN1;
		_delay_ms(1000);
		PORTA=1<<PIN2;
		_delay_ms(1000);
		PORTA=0<<PIN2;
		_delay_ms(1000);
		PORTA=1<<PIN3;
		_delay_ms(1000);
		PORTA=0<<PIN3;
		_delay_ms(1000);
		PORTA=1<<PIN4;
		_delay_ms(1000);
		PORTA=0<<PIN4;
		_delay_ms(1000);
		PORTA=1<<PIN5;
		_delay_ms(1000);
		PORTA=0<<PIN5;
		_delay_ms(1000);
		PORTA=1<<PIN6;
		_delay_ms(1000);
		PORTA=0<<PIN6;
		_delay_ms(1000);
		PORTA=1<<PIN7;
		_delay_ms(1000);
		PORTA=0<<PIN7;
		_delay_ms(1000);
		PORTA=1<<PIN6;
		_delay_ms(1000);
		PORTA=0<<PIN6;
		_delay_ms(1000);
		PORTA=1<<PIN5;
		_delay_ms(1000);
		PORTA=0<<PIN5;
		_delay_ms(1000);
		PORTA=1<<PIN4;
		_delay_ms(1000);
		PORTA=0<<PIN4;
		_delay_ms(1000);
		PORTA=1<<PIN3;
		_delay_ms(1000);
		PORTA=0<<PIN3;
		_delay_ms(1000);
		PORTA=1<<PIN2;
		_delay_ms(1000);
		PORTA=0<<PIN2;
		_delay_ms(1000);
		PORTA=1<<PIN1;
		_delay_ms(1000);
		PORTA=0<<PIN1;
		_delay_ms(1000);
		PORTA=1<<PIN0;
		_delay_ms(1000);
		PORTA=0<<PIN0;
		_delay_ms(1000);
		
		
		
    }
}

