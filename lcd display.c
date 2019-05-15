/*
 * GccApplication10.c
 *
 * Created: 10-05-2019 14:19:49
 * Author : User
 */ 

#include <avr/io.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <util/delay.h>
#define RS 7
#define E 5
void send_command(unsigned char command);
void send_character(unsigned char character);
int main(void)
{
    /* Replace with your application code */
	DDRC=0XFF;
	DDRD=0XFF;
	_delay_ms(50);
	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);
	//data to print
	send_character(0X43);
	send_character(0X48);
	send_character(0X41);
	send_character(0X4E);
	send_character(0X44);
	send_character(0X55);
}
	void send_command(unsigned char command)
    {
		PORTC=command;
	    PORTD&=~(0<<RS);
	    PORTD|=(1<<E);
	    _delay_ms(50);
	    PORTD&=~(1<<E);
	    PORTC=0;
	} 
	void send_character(unsigned char character)
	{
		PORTC=character;
		PORTD|=(1<<RS);
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD&=~(1<<E);
		PORTC=0;
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


