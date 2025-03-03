/*
 * main.c
 *
 *  Created on: Jul 21, 2023
 *      Author: 3bQaDer
 */

#include "Lifo.h"

int main () {
	unsigned int buff [5];
	Lifo_buf_t first_buf ;

	Lifo_init( &first_buf, buff, 5);

	for (int i = 0; i<7 ; i++)
	{
		if(Push( &first_buf ,i) == Lifo_no_error)
			printf("item %d has been pushed successfully\n",i);
	}
	unsigned int temp;
	printf("\n ------------------ \n\n");
	for (int i = 0; i<7 ; i++)
	{
		if(Pop( &first_buf ,&temp) == Lifo_no_error)
			printf("item %d has been popped from the buffer successfully\n",i);
	}




	return 0;
}
