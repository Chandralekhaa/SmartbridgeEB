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
void PWM_init()
{
	//set fast PWM mode with non inverted output
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);//set oc0 pin as output
}
int main(void)
{
    /* Replace with your application code */
	DDRC=0XFF; //All pins of port c as output
	DDRD=0X00; //all pins of port d as input
    while (1) 
    {
		PWM_init();
		if((PIND&(1<<PD0))==0) //if switch is pressed
		{
			OCR0=100;
        }
		if((PIND&(1<<PD1))==0) //if switch is pressed
		{
			OCR0=150;
		}
	}
}
