/*
 * seven_segment.h
 *
 * Created: 3/23/2023 9:35:49 AM
 *  Author: Dell
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

void seg_portdirection(unsigned char port);
void seg_write_on_port(unsigned char port,unsigned char num_pattern);


#endif /* SEVEN_SEGMENT_H_ */