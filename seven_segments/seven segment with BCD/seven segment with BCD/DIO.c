/*
 * DIO.c
 *
 * Created: 3/25/2023 1:19:26 PM
 *  Author: Dell
 */ 
#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "macros.h"
#include "DIO.h"

void dio_pindir(unsigned char port,unsigned char pin,unsigned char dir)
{
	switch(port)
	{
		case 'A':
		if(dir)
		{
			setbit(DDRA,pin);
		}
		else
		{
			clrbit(DDRA,pin);
		}
		case 'B':
		if(dir)
		{
			setbit(DDRB,pin);
		}
		else
		{
			clrbit(DDRB,pin);
		}
		case 'C':
		if(dir)
		{
			setbit(DDRC,pin);
		}
		else
		{
			clrbit(DDRC,pin);
		}
		case 'D':
		if(dir)
		{
			setbit(DDRD,pin);
		}
		else
		{
			clrbit(DDRD,pin);
		}
		default:
		break;
	}
}

void dio_pinval(unsigned char port,unsigned char pin,unsigned char val)
{
	switch(port)
	{
		case 'A':
		if(val)
		{
			setbit(PORTA,pin);
		}
		else
		{
			clrbit(PORTA,pin);
		}
		case 'B':
		if(val)
		{
			setbit(PORTB,pin);
		}
		else
		{
			clrbit(PORTB,pin);
		}
		case 'C':
		if(val)
		{
			setbit(PORTC,pin);
		}
		else
		{
			clrbit(PORTC,pin);
		}
		case 'D':
		if(val)
		{
			setbit(PORTD,pin);
		}
		else
		{
			clrbit(PORTD,pin);
		}
		default:
		break;
	}
}

unsigned char dio_readbit(unsigned char port,unsigned char pin)
{
	unsigned char ret=0;
	switch(port)
	{
		case 'A':
		ret=readbit(PINA,pin);
		break;
		case 'B':
		ret=readbit(PINB,pin);
		break;
		case 'C':
		ret=readbit(PINC,pin);
		break;
		case 'D':
		ret=readbit(PIND,pin);
		break;
		default:
		break;
	}
	return ret;
}

void dio_Hnibble_dir(unsigned char port)
{
	switch(port)
	{
		case 'A':
		set_Hnibble(DDRA);
		break;
		case 'B':
		set_Hnibble(DDRB);
		break;
		case 'C':
		set_Hnibble(DDRC);
		break;
		case 'D':
		set_Hnibble(DDRD);
		break;
		default:
		break;
	}
}

void dio_Lnibble_dir(unsigned char port)
{
	switch(port)
	{
		case 'A':
		set_Lnibble(DDRA);
		break;
		case 'B':
		set_Lnibble(DDRB);
		break;
		case 'C':
		set_Lnibble(DDRC);
		break;
		case 'D':
		set_Lnibble(DDRD);
		break;
		default:
		break;
	}
}

void dio_Hnibble_val(unsigned char port,unsigned char value)
{
	switch(port)
	{
		case 'A':
		set_Hnibble_val(PORTA,value);
		break;
		case 'B':
		set_Hnibble_val(PORTB,value);
		break;
		case 'C':
		set_Hnibble_val(PORTC,value);
		break;
		case 'D':
		set_Hnibble_val(PORTD,value);
		break;
		default:
		break;
	}	
}

void dio_Lnibble_val(unsigned char port,unsigned char value)
{
	switch(port)
	{
		case 'A':
		set_Lnibble_val(PORTA,value);
		break;
		case 'B':
		set_Lnibble_val(PORTB,value);
		break;
		case 'C':
		set_Lnibble_val(PORTC,value);
		break;
		case 'D':
		set_Lnibble_val(PORTD,value);
		break;
		default:
		break;
	}	
}
