/*
 * GccApplication1.c
 *
 * Created: 16-05-2019 11:24:54
 * Author : User
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define LED PORTB
char buffer[10];

void USARTInit(uint16_t ubbr_value)
{
	//set baud rate
	UBRRL = ubbr_value;
	UBRRH = (ubbr_value>>8);
	UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	//enable the rx and tx
	UCSRB = (1<<RXEN)|(1<<TXEN);
}

char USARTReadChar()
{
	//wait until data is available
	while(!(UCSRA&(1<<RXC)))
	{
		//DO NOTHING
	}
	return UDR;
}
void USARTWriteChar(char data)
{
	while(!(UCSRA&(1<<UDRE)))
	{
		//do nothing
	}
	UDR=data;
}

int main(void)
{
    USARTInit(77);
	DDRB=0XFF;
	char data;
	LED=0;
    while (1) 
    {
		data=USARTReadChar();
		if(data=='1')
		{
			PORTB=1<<PB0;
		}
		else if(data=='2')
		{
			PORTB=0<<PB0;
		}
		else if(data=='3')
		{
			PORTB=1<<PB1;
		}
		else if(data=='4')
		{
			PORTB=0<<PB1;
		}
    }
	return 0;
}

