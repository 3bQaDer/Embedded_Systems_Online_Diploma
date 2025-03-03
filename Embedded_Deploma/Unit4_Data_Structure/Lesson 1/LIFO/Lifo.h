/*
 * Lifo.h
 *
 *  Created on: Jul 20, 2023
 *      Author: 3bQaDer
 */

#ifndef LIFO_H_
#define LIFO_H_

// Important Includes
#include "stdio.h"
#include "Stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"
//Consider that the user that will use that lifo will choose the data type the lifo will deal with

//select the element type (uint8_t , uint16_t , uint32_t , ....)
#define element_type uint32_t

//type definitions :
typedef struct {
	element_type* top;
	element_type* base;
	unsigned int count;
	unsigned int length;
}Lifo_buf_t;

typedef enum {
	Lifo_no_error ,
	Lifo_null ,
	Lifo_full ,
	Lifo_empty

}Lifo_buf_status;

//APIs :
Lifo_buf_status Lifo_init(Lifo_buf_t* Lifo_Buf ,element_type* buf , unsigned int length);
Lifo_buf_status Push(Lifo_buf_t* Lifo_Buf ,element_type item);
Lifo_buf_status Pop(Lifo_buf_t* Lifo_Buf ,element_type * item);
Lifo_buf_status IS_Full(Lifo_buf_t* Lifo_Buf);
Lifo_buf_status IS_Empty(Lifo_buf_t* Lifo_Buf);
#endif /* LIFO_H_ */
