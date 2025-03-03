/*
 * main.c
 *
 *  Created on: Jul 21, 2023
 *      Author: 3bQaDer
 */


#include "Fifo.h"
int main(){
	Fifo_Buf_t UART_fifo;
	unsigned int i;
	element_type temp;
	element_type UART_buf[5];

	if(Fifo_init(&UART_fifo,UART_buf,5) == Fifo_no_error)
		printf("Fifo init successfully \n\n");
	for(i=0;i<7;i++){

		if(enqueue(&UART_fifo,i)==Fifo_no_error){
			printf("fifo enqueue --------- done \n");
		}else{
			printf("fifo enqueue --------- failed \n");
		}
	}
	print_Fifo(&UART_fifo);
	if(dequeue(&UART_fifo,&temp)==Fifo_no_error)
		printf("\nitem %x has been dequeued successfully\n",temp);
	if(dequeue(&UART_fifo,&temp)==Fifo_no_error)
		printf("\nitem %x has been dequeued successfully\n",temp);
	print_Fifo(&UART_fifo);

	return 0;
}
