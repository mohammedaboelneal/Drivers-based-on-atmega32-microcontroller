/*
 * macos.h
 *
 * Created: 3/23/2023 8:23:41 AM
 *  Author: Mohammed Aboelniel
 */ 


#ifndef MACOS_H_
#define MACOS_H_

#define regsize	8
#define setbit(reg,bit)		reg|=1<<bit
#define set_port(reg)		reg=0xFF
#define clr_port(reg)		reg=0x00
#define port_val(reg,value)		reg=value
#define clrbit(reg,bit)		reg&=~(1<<bit)
#define readbit(reg,bit)	(reg>>bit)&1


#endif /* MACOS_H_ */