/*
 * BCD_SevenSegment.h
 *
 * Created: 3/25/2023 2:07:32 PM
 *  Author: Dell
 */ 


#ifndef BCD_SEVENSEGMENT_H_
#define BCD_SEVENSEGMENT_H_

void BCD_Lnibble_dir(unsigned char port);
void BCD_Lnibble_val(unsigned char port,unsigned char value);

void BCD_Hnibble_dir(unsigned char port);
void BCD_Hnibble_val(unsigned char port,unsigned char value);



void BCD_Lnibble_Bitdir(unsigned char port);
void BCD_Lnibble_Bitval(unsigned char port,unsigned char value);

void BCD_Hnibble_Bitdir(unsigned char port);
void BCD_Hnibble_Bitval(unsigned char port,unsigned char value);


#endif /* BCD_SEVENSEGMENT_H_ */