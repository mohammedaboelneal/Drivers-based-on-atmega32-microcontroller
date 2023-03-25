/*
 * DIO.h
 *
 * Created: 3/25/2023 12:59:21 PM
 *  Author: Dell
 */ 


#ifndef DIO_H_
#define DIO_H_

void dio_pindir(unsigned char port,unsigned char pin,unsigned char dir);
void dio_pinval(unsigned char port,unsigned char pin,unsigned char val);
unsigned char dio_readbit(unsigned char port,unsigned char pin);
void dio_Hnibble_dir(unsigned char port);
void dio_Lnibble_dir(unsigned char port);
void dio_Hnibble_val(unsigned char port,unsigned char value);
void dio_Lnibble_val(unsigned char port,unsigned char value);

#endif /* DIO_H_ */