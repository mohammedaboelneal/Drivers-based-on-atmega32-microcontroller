/*
 * DIO.h
 *
 * Created: 3/20/2023 5:53:03 PM
 *  Author: Dell
 */ 


#ifndef DIO_H_
#define DIO_H_
void dio_setpindirection(unsigned char port,unsigned char pin,unsigned char direction);
void dio_setportdirection(unsigned char port,unsigned char direction);
void dio_pinwrite(unsigned char port,unsigned char pin,unsigned char value);
void dio_portwrite(unsigned char port,unsigned char value);
void dio_pintoggle(unsigned char port,unsigned char pin);
void dio_porttoggle(unsigned char port);
unsigned char dio_pinread(unsigned char port,unsigned char pin);
unsigned char dio_portread(unsigned char port);

#endif /* DIO_H_ */