/*
 * macros.h
 *
 * Created: 3/20/2023 5:11:06 PM
 *  Author: Dell
 */ 


#ifndef MACROS_H_
#define MACROS_H_

#define registersize	8
#define setbit(reg,bit)		reg|=1<<bit
#define setport(reg,val)		reg|=val
#define clearbit(reg,bit)	reg&=~(1<<bit)
#define clearport(reg)		reg&=0x00
#define togglebit(reg,bit)	reg^=1<<bit
#define toggleport(reg)		reg^=0xFF
#define readbit(reg,bit)	(reg>>bit)&1
#define isbitset(reg,bit)	(reg>>bit)&1
#define isbitcreared(reg,bit)	(reg>>bit)|0
#define rotateleft(reg,num)		reg=(reg<<num)|(reg>>(registersize-num))
#define rotateright(reg,num)	reg=(reg>>num)|(reg<<(registersize-num))

#endif /* MACROS_H_ */