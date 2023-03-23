/*
 * switch.c
 *
 * Created: 3/23/2023 9:13:26 AM
 *  Author: Dell
 */ 
#include "DIO.h"
#include "Switch.h"

void switch_init(unsigned char port,unsigned char pin)
{
	dio_setdirection(port,pin,0);
}

void switch_en_internalPullup(unsigned char port,unsigned char pin)
{
	dio_pinwrite(port,pin,1);
}

unsigned char switch_status(unsigned char port,unsigned char pin)
{
	return dio_pinread(port,pin);
}