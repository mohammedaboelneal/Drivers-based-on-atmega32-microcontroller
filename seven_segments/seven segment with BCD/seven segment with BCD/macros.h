/*
 * macros.h
 *
 * Created: 3/25/2023 12:11:58 PM
 *  Author: Dell
 */ 


#ifndef MACROS_H_
#define MACROS_H_


#define setbit(reg,bit)		reg|=1<<bit
#define clrbit(reg,bit)		reg&=~(1<<bit)
#define readbit(reg,bit)	(reg>>bit)&1
#define set_Hnibble(reg)	reg|=0xF0
#define clr_Hnibble(reg)	reg&=~(0xF0)
#define set_Lnibble(reg)	reg|=0x0F
#define clr_Lnibble(reg)	reg&=~(0x0F)
#define set_Hnibble_val(reg,value)	reg=(reg&0x0F)|(value<<4)
#define set_Lnibble_val(reg,value)	reg=(reg&0xF0)|(value&0x0F)

#endif /* MACROS_H_ */