/*
 * seven_segment.c
 *
 * Created: 3/20/2023 8:43:59 PM
 *  Author: Dell
 */ 

#include "seven_segment.h"
#include "DIO.h"

#define common_anode
//#define common_cathode
void sevensegment_setdirection(unsigned char port)
{
	dio_setportdirection(port,1);
}
void sevensegment_show(unsigned char port,unsigned char numpattern)
{
	#if defined common_cathode
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	#elif defined common_anode
	unsigned char arr[]=~{0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	#endif
	dio_portwrite(port,arr[numpattern]);
}