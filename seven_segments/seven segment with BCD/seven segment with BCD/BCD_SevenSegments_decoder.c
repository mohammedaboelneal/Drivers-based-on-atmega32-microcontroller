/*
 * BCD_SevenSegments_decoder.c
 *
 * Created: 3/25/2023 2:08:37 PM
 *  Author: Dell
 */ 
#include "BCD_SevenSegments_decoder.h"
#include <util/delay.h>

void BCD_Lnibble_dir(unsigned char port)
{
	dio_Lnibble_dir(port);
}

void BCD_Lnibble_val(unsigned char port,unsigned char value)
{
	dio_Lnibble_val(port,value);
}

void BCD_Hnibble_dir(unsigned char port)
{
	dio_Hnibble_dir(port);
}

void BCD_Hnibble_val(unsigned char port,unsigned char value)
{
	dio_Hnibble_val(port,value);
}

void BCD_Lnibble_Bitdir(unsigned char port)
{
	dio_pindir(port,0,1);
	dio_pindir(port,1,1);
	dio_pindir(port,2,1);
	dio_pindir(port,3,1);
}

void BCD_Lnibble_Bitval(unsigned char port,unsigned char value)
{
	dio_pinval(port,0,dio_readbit(value,0));
	dio_pinval(port,1,dio_readbit(value,1));
	dio_pinval(port,2,dio_readbit(value,2));
	dio_pinval(port,3,dio_readbit(value,3));
}

void BCD_Hnibble_Bitdir(unsigned char port)
{
	dio_pindir(port,4,1);
	dio_pindir(port,5,1);
	dio_pindir(port,6,1);
	dio_pindir(port,7,1);
}

void BCD_Hnibble_Bitval(unsigned char port,unsigned char value)
{
	dio_pinval(port,4,dio_readbit(value,0));//0~9 numbers in the low nibble
	dio_pinval(port,5,dio_readbit(value,1));
	dio_pinval(port,6,dio_readbit(value,2));
	dio_pinval(port,7,dio_readbit(value,3));
}


void test_case(void)
{
	//1st test case
	BCD_Lnibble_dir('A');
	while(1)
	{
		for(unsigned char counter=0;counter<=9;counter++)
		{
			BCD_Lnibble_val('A',counter);
			_delay_ms(2000);
		}
	}
	
	//2nd test case
	
	/*BCD_Lnibble_Bitdir('A')
	while(1)
	{
		for(unsigned char counter=0;counter<=9;counter++)
		{
			BCD_Lnibble_Bitval('A',counter);
		}
		_delay_ms(1300);
	}*/
}