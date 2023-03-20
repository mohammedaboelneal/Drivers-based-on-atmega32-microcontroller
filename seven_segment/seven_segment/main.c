/*
 * seven_segment.c
 *
 * Created: 3/20/2023 3:32:34 PM
 *  Author: Dell
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "seven_segment.h"

void main(void)
{
	sevensegment_setdirection('D');
	unsigned char counter=0;
	while(1)
	{
		for(unsigned char counter=0;counter<=9;counter++)
		{
			sevensegment_show('D',counter);
			_delay_ms(1000);
		}
	}
}