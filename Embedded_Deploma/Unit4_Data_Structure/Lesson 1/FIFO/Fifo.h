/*
 * Fifo.h
 *
 *  Created on: Jul 21, 2023
 *      Author: 3bQaDer
 */

#ifndef FIFO_H_
#define FIFO_H_


//Libraries
#include "stdio.h"
#include "Stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"

//User configurations
//select the element type (uint8_t , uint16_t , uint32_t , ....)
#define element_type uint32_t

//type definitions
typedef struct {
	unsigned int count ;
	unsigned int length;
	element_type* base ;
	element_type* head ;
	element_type* tail ;
}Fifo_Buf_t;

typedef enum {
	Fifo_no_error ,
	Fifo_null ,
	Fifo_full ,
	Fifo_empty
}Lifo_buf_status;

Lifo_buf_status Fifo_init(Fifo_Buf_t* Fifo_buf ,element_type* buf , unsigned int length );
Lifo_buf_status enqueue(Fifo_Buf_t* Fifo_buf, unsigned int item);
Lifo_buf_status dequeue(Fifo_Buf_t* Fifo_buf, unsigned int* item);
void print_Fifo(Fifo_Buf_t* Fifo_buf);
Lifo_buf_status is_Full(Fifo_Buf_t* Fifo_buf);
Lifo_buf_status is_Empty(Fifo_Buf_t* Fifo_buf);

#endif /* FIFO_H_ */
