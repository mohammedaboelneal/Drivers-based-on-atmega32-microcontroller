/*
 * DIO.h
 *
 * Created: 3/23/2023 8:34:00 AM
 *  Author: Mohammed Aboelniel
 */ 


#ifndef DIO_H_
#define DIO_H_

void dio_setdirection(unsigned char port,unsigned char pin,unsigned char direction);

void dio_port_dir(unsigned char port,unsigned char dir);

void dio_pinwrite(unsigned char port,unsigned char pin,unsigned char value);

void dio_portwrite(unsigned char port,unsigned char value);

unsigned char dio_pinread(unsigned char port,unsigned char pin);

#endif /* DIO_H_ */