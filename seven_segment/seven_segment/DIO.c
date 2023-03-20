/*
 * DIO.c
 *
 * Created: 3/20/2023 6:16:31 PM
 *  Author: Dell
 */ 
#include<avr/io.h>
#include "DIO.h"
#include "macros.h"
void dio_setpindirection(unsigned char port,unsigned char pin,unsigned char direction)
{
	switch(port)
	{
		case 'A':
		if (direction)
		{
			setbit(DDRA,pin);
		}
		else
		{
			clearbit(DDRA,pin);
		}
		break;
		case 'B':
		if (direction)
		{
			setbit(DDRB,pin);
		}
		else
		{
			clearbit(DDRB,pin);
		}
		break;
		case 'C':
		if (direction)
		{
			setbit(DDRC,pin);
		}
		else
		{
			clearbit(DDRC,pin);
		}
		break;
		case 'D':
		if (direction)
		{
			setbit(DDRD,pin);
		}
		else
		{
			clearbit(DDRD,pin);
		}
		break;
		default:
		break;
	}
}
void dio_setportdirection(unsigned char port,unsigned char direction)
{
	switch (port)
	{
		case 'A':
		if (direction)
		{
			DDRA=0xFF;
		}
		else
		{
			DDRA=0x00;
		}
		break;
		case 'B':
		if (direction)
		{
			DDRB=0xFF;
		}
		else
		{
			DDRB=0x00;
		}
		break;
		case 'C':
		if (direction)
		{
			DDRC=0xFF;
		}
		else
		{
			DDRC=0x00;
		}
		break;
		case 'D':
		if (direction)
		{
			DDRD=0xFF;
		}
		else
		{
			DDRD=0x00;
		}
		break;
		default:
		break;
	}
}
void dio_pinwrite(unsigned char port,unsigned char pin,unsigned char value)
{
	switch(port)
	{
		case 'A':
		if (value)
		{
			setbit(PORTA,pin);
		}
		else
		{
			clearbit(PORTA,pin);
		}
		break;
		case 'B':
		if (value)
		{
			setbit(PORTB,pin);
		}
		else
		{
			clearbit(PORTB,pin);
		}
		break;
		case 'C':
		if (value)
		{
			setbit(PORTC,pin);
		}
		else
		{
			clearbit(PORTC,pin);
		}
		break;
		case 'D':
		if (value)
		{
			setbit(PORTD,pin);
		}
		else
		{
			clearbit(PORTD,pin);
		}
		break;
		default:
		break;
	}
}
void dio_portwrite(unsigned char port,unsigned char value)
{
	swich(port)
	{
		case 'A':
		setport(PORTA,value);
		break;
		case 'B':
		setport(PORTB,value);
		break;
		case 'C':
		setport(PORTC,value);
		break;
		case 'D':
		setport(PORTD,value);
		break;
		default:
		break;
	}
}
void dio_pintoggle(unsigned char port,unsigned char pin)
{
	switch (port)
	{
	case 'A':
	togglebit(PORTA,pin);
	break;
	case 'B':
	togglebit(PORTB,pin);
	break;
	case 'C':
	togglebit(PORTC,pin);
	break;
	case 'D':
	togglebit(PORTD,pin);
	break;
	default:
	break;
	}
}
void dio_porttoggle(unsigned char port)
{
	swich(port)
	{
		case'A':
		toggleport(PORTA);
		break;
		case'B':
		toggleport(PORTB);
		break;
		case'C':
		toggleport(PORTC);
		break;
		case'D':
		toggleport(PORTD);
		break;
		default:
		break;
	}
}
unsigned char dio_pinread(unsigned char port,unsigned char pin)
{
	unsigned char ret_value;
	switch(port)
	{
		case 'A':
		ret_value=readbit(PINA,pin);
		break;
		case 'B':
		ret_value=readbit(PINB,pin);
		break;
		case 'C':
		ret_value=readbit(PINC,pin);
		break;
		case 'D':
		ret_value=readbit(PIND,pin);
		break;
		default:
		break;
	}
	return ret_value;
}
unsigned char dio_portread(unsigned char port)
{
	unsigned char ret_value;
	switch char(port)
	{
		case 'A':
		ret_value=PINA;
		break;
		case 'B':
		ret_value=PINB;
		break;
		case 'C':
		ret_value=PINC;
		break;
		case 'D':
		ret_value=PIND;
		break;
		default:
		break;
	}
}