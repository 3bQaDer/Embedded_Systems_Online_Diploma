/*
 * Fifo.c
 *
 *  Created on: Jul 21, 2023
 *      Author: 3bQaDer
 */

#include "Fifo.h"


Lifo_buf_status Fifo_init(Fifo_Buf_t* Fifo_buf ,element_type* buf  , unsigned int length ){

	//check if the buffer exist or not
	if(buf==NULL)
		return Fifo_null;

	//connect the fifo buffer to the predefined buffer
	Fifo_buf->base=buf;
	Fifo_buf->head=buf;
	Fifo_buf->tail=buf;
	Fifo_buf->count=0;
	Fifo_buf->length=length ;
	return Fifo_no_error;
}
Lifo_buf_status enqueue(Fifo_Buf_t* Fifo_buf, unsigned int item){

	if (!Fifo_buf->base|| !Fifo_buf->head ||!Fifo_buf->tail )
		return Fifo_null;
	if(is_Full(Fifo_buf)==Fifo_full)
		return Fifo_full;
	//store the value of the item at the head position
	*(Fifo_buf->head)=item;
	Fifo_buf->head++;
	Fifo_buf->count++;
	return Fifo_no_error;

}
Lifo_buf_status dequeue(Fifo_Buf_t* Fifo_buf, unsigned int* item){

	//check if the fifo is valid
	if (!Fifo_buf->base|| !Fifo_buf->head ||!Fifo_buf->tail )
		return Fifo_null;

	//check if the fifo is empty
	if (is_Empty(Fifo_buf)==Fifo_empty)
		return Fifo_empty;

	//read the item from the tail position of the queue
	*item = *(Fifo_buf->tail);
	Fifo_buf->tail++;
	Fifo_buf->count--;
	return Fifo_no_error;
}
void print_Fifo(Fifo_Buf_t* Fifo_buf){
	//check if the fifo is valid
	if (!Fifo_buf->base|| !Fifo_buf->head ||!Fifo_buf->tail )
		printf("invalid fifo or fifo doesn't exist");
	//check if the fifo is empty
	if (Fifo_buf->count == 0 )
		printf("The fifo is empty");

	//printing the content of the fifo :
	unsigned int i = 1;
	element_type* temp = Fifo_buf->tail;
	while(temp !=  Fifo_buf-> head &&Fifo_buf-> count != 0){
		printf("\nitem number %d is %x",i, *temp);
		temp++;
		i++;
	}
	printf("\n-------------\n");
}

Lifo_buf_status is_Full(Fifo_Buf_t* Fifo_buf){
	//check if the fifo is valid
	if (!Fifo_buf->base|| !Fifo_buf->head ||!Fifo_buf->tail )
		return Fifo_null;

	//check if the fifo is full
	if (Fifo_buf->count == Fifo_buf->length )
		return Fifo_full;
	return Fifo_no_error;
}
Lifo_buf_status is_Empty(Fifo_Buf_t* Fifo_buf){
	//check if the fifo is valid
	if (!Fifo_buf->base|| !Fifo_buf->head ||!Fifo_buf->tail )
		return Fifo_null;

	//check if the fifo is empty
	if (Fifo_buf->count == 0 )
		return Fifo_empty;
	return Fifo_no_error;
	return 0;
}
