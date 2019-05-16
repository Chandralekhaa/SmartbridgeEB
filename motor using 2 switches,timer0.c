/*
 * GccApplication1.c
 *
 * Created: 16-05-2019 09:22:13
 * Author : User
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	//set fast PWM mode with non inverted output
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);//set oc0 pin as output
}
int main(void)
{
	DDRB=0XFF;
	DDRD&=~1<<PD0;
	DDRD&=~1<<PD1;
	PWM_init();
	PORTB=0<<PB0;
    while (1) 
    {
		if((PIND&(1<<PD0))==0)
		{
			OCR0=150;
			_delay_ms(1000);
		}
		if((PIND&(1<<PD1))==0)
		{
			OCR0=250;
			_delay_ms(1000);
		}
		
    }
}

