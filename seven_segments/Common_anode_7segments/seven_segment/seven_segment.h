/*
 * seven_segment.h
 *
 * Created: 3/20/2023 8:43:40 PM
 *  Author: Dell
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

void sevensegment_setdirection(unsigned char port);
void sevensegment_show(unsigned char port,unsigned char numpattern);

#endif /* SEVEN_SEGMENT_H_ */