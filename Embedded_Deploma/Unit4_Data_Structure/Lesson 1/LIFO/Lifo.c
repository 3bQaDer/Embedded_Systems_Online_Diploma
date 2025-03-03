/*
 * main.c
 *
 *  Created on: Jul 20, 2023
 *      Author: 3bQaDer
 */
#include "lifo.h"
//An API to check if a certain Lifo buffer is full or not
Lifo_buf_status IS_Full(Lifo_buf_t* Lifo_Buf){
	//Check if the lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->top)
		return Lifo_null;
	//Check if the lifo is full
	if(Lifo_Buf->count ==Lifo_Buf->length)
		return Lifo_full;
	return Lifo_no_error;
}

//An API to check if a certain Lifo buffer is empty or not
Lifo_buf_status IS_Empty(Lifo_buf_t* Lifo_Buf){
	//Check if the lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->top)
		return Lifo_null;
	//Check if the lifo is full
	if(Lifo_Buf->count == 0)
		return Lifo_empty;
	return Lifo_no_error;
}

//An API to connect the lifo to a previous declared buffer to use it as lifo buffer
Lifo_buf_status Lifo_init(Lifo_buf_t* Lifo_Buf ,element_type* buf , unsigned int length ){
	//Check if the buffer is already exist
	if(buf==NULL)
		return Lifo_null;
	//initialize the Lifo to the buffer
	Lifo_Buf -> base = buf;
	Lifo_Buf -> top = buf;
	Lifo_Buf -> count = 0;
	Lifo_Buf->length=length;
	return Lifo_no_error;

}

/* An API to store the data in the Lifo buffer by pushing the element to the lifo
in the location determined by the top pointer and then move that pointer to the next location*/
Lifo_buf_status Push(Lifo_buf_t* Lifo_Buf , element_type item ){
	//Check if the lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->top)
		return Lifo_null;
	//Check if the lifo is full
	if(IS_Full(Lifo_Buf)==Lifo_full)
		return Lifo_full;
	//Add the item
	*(Lifo_Buf->top)=item;
	Lifo_Buf->top++;
	Lifo_Buf->count++;
	return Lifo_no_error;
}

/*An API to read the elements from the lifo by using the top pointer to determine the location to get the item from
 by moving to its previous location  */
Lifo_buf_status Pop(Lifo_buf_t* Lifo_Buf ,element_type* item){
	//Check if the lifo is valid
	if(!Lifo_Buf->base || !Lifo_Buf->top)
		return Lifo_null;
	//Check if the lifo is empty
	if(IS_Empty(Lifo_Buf)==Lifo_empty)
		return Lifo_full;
	//Get the item
	Lifo_Buf->top--;
	*item = *(Lifo_Buf->top);
	Lifo_Buf->count--;
	return Lifo_no_error;
}

