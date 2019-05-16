/*
 * GccApplication1.c
 *
 * Created: 15-05-2019 14:06:49
 * Author : User
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB=0XFF;
    while (1) 
    {
		PORTB=(1<<PB1);
		_delay_ms(5000);
		PORTB=(0<<PB1);
		_delay_ms(5000);
		PORTB=(0<<PB2);
		_delay_ms(5000);
		PORTB=(1<<PB2);
		_delay_ms(5000);
    }
}

