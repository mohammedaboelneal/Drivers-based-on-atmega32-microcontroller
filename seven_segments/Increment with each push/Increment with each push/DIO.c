/*
 * DIO.c
 *
 * Created: 3/23/2023 8:49:19 AM
 *  Author: Dell
 */ 
#include<avr/io.h>
#include "DIO.h"
#include "macos.h"
#define F_CPU 8000000UL
#include <util/delay.h>

void dio_setdirection(unsigned char port,unsigned char pin,unsigned char direction)
{
	switch (port)
	{
		case 'A':
		if(direction)
		{
			setbit(DDRA,pin);
		}
		else
		{
			clrbit(DDRA,pin);
		}
		break;
		case 'B':
		if(direction)
		{
			setbit(DDRB,pin);
		}
		else
		{
			clrbit(DDRB,pin);
		}
		break;
		case 'C':
		if(direction)
		{
			setbit(DDRC,pin);
		}
		else
		{
			clrbit(DDRC,pin);
		}
		break;
		case 'D':
		if(direction)
		{
			setbit(DDRD,pin);
		}
		else
		{
			clrbit(DDRD,pin);
		}
		break;
		default:
		break;
	}
}

void dio_port_dir(unsigned char port,unsigned char dir)
{
	switch(port)
	{
		case 'A':
		if(dir)
		{
			set_port(DDRA);
		}
		else
		{
			clr_port(DDRA);
		}
		break;
		case 'B':
		if(dir)
		{
			set_port(DDRB);
		}
		else
		{
			clr_port(DDRB);
		}
		break;
		case 'C':
		if(dir)
		{
			set_port(DDRC);
		}
		else
		{
			clr_port(DDRC);
		}
		break;
		case 'D':
		if(dir)
		{
			set_port(DDRD);
		}
		else
		{
			clr_port(DDRD);
		}
		break;
		default:
		break;
	}
}

void dio_pinwrite(unsigned char port,unsigned char pin,unsigned char value)
{
	switch (port)
	{
		case 'A':
		if(value)
		{
			setbit(PORTA,pin);
		}
		else
		{
			clrbit(PORTA,pin);
		}
		break;
		case 'B':
		if(value)
		{
			setbit(PORTB,pin);
		}
		else
		{
			clrbit(PORTB,pin);
		}
		break;
		case 'C':
		if(value)
		{
			setbit(PORTC,pin);
		}
		else
		{
			clrbit(PORTC,pin);
		}
		break;
		case 'D':
		if(value)
		{
			setbit(PORTD,pin);
		}
		else
		{
			clrbit(PORTD,pin);
		}
		break;
		default:
		break;
	}
}

void dio_portwrite(unsigned char port,unsigned char value)
{
	switch(port)
	{
		case 'A':
		PORTA=value;
		break;
		case 'B':
		PORTB=value;
		break;
		case 'C':
		PORTC=value;
		break;
		case 'D':
		PORTD=value;
		break;
		default:
		break;
	}
}

unsigned char dio_pinread(unsigned char port,unsigned char pin)
{
	unsigned char returned_value=0;
	switch(port)
	{
		case 'A':
		returned_value=readbit(PINA,pin);
		break;
		case 'B':
		returned_value=readbit(PINB,pin);
		break;
		case 'C':
		returned_value=readbit(PINC,pin);
		break;
		case 'D':
		returned_value=readbit(PIND,pin);
		break;
		default:
		break;
	}
	return returned_value;
}
