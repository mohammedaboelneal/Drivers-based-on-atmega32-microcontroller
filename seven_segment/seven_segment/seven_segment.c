/*
 * seven_segment.c
 *
 * Created: 3/20/2023 8:43:59 PM
 *  Author: Dell
 */ 

#include "seven_segment.h"
#include "DIO.h"
#define F_CPU 8000000UL
#include <util/delay.h>

#define common_anode
//#define common_cathode

void sevensegment_setdirection(unsigned char port)
{
	dio_setportdirection(port,1);
}
void sevensegment_show(unsigned char port,unsigned char numpattern)
{
	#ifdef common_cathode
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	#elif defined common_anode
	unsigned char arr[]={~0x3f,~0x06,~0x5b,~0x4f,~0x66,~0x6d,~0x7d,~0x47,~0x7f,~0x6f};
	#endif
	dio_portwrite(port,arr[numpattern]);
}

void test(void)
{
	sevensegment_setdirection('D');
	unsigned char counter=0;
	while(1)
	{
		for(counter=0;counter<=9;counter++)
		{
			sevensegment_show('D',counter);
			_delay_ms(1000);
		}
	}
	
}