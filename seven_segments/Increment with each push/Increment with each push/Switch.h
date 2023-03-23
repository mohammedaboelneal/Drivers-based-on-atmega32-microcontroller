/*
 * Switch.h
 *
 * Created: 3/23/2023 9:07:34 AM
 *  Author: Mohammed Aboelniel
 */ 


#ifndef SWITCH_H_
#define SWITCH_H_

void switch_init(unsigned char port,unsigned char pin);
void switch_en_internalPullup(unsigned char port,unsigned char pin);
unsigned char switch_status(unsigned char port,unsigned char pin);

#endif /* SWITCH_H_ */