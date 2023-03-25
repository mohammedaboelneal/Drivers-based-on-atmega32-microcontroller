/*
 * seven_segment.c
 *
 * Created: 3/23/2023 9:45:30 AM
 *  Author: Dell
 */ 
#include "DIO.h"
#include "seven_segment.h"
#include "Switch.h"
#include <util/delay.h>
#define F_CPU 8000000UL
#include<avr/io.h>


#define CA	//common anode
//#define CC	//common cathode 

void seg_portdirection(unsigned char port)
{
	dio_port_dir(port,1);
}

void seg_write_on_port(unsigned char port,unsigned char num_pattern)
{
	#ifdef CA
	unsigned char arr[]={~0x3f,~0x06,~0x5b,~0x4f,~0x66,~0x6d,~0x7d,~0x47,~0x7f,~0x6f};
	#elif defined CC
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	#endif
	dio_portwrite(port,arr[num_pattern]);
}



void test(void)
{
	seg_portdirection('A');
	switch_init('D',0);
	switch_en_internalPullup('D',0);
	unsigned char counter=0;
	while(1)
	{
		seg_write_on_port('A',counter);
		if ((switch_status('D',0))==0)
		{
			counter++;
		}
		if (counter>9)
		{
			counter=0;
		}
		_delay_ms(1500);
	}
}