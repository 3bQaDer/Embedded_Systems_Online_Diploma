/*
 * main.c
 *
 *  Created on: Sep 1, 2023
 *      Author: 3bQaDer
 */


#include "Collision_Avoidance_v1.h"

void setup(){
	//init all the drivers
	//init IRQ
	//init HAL US_Driver DC_Driver
	//init BLOCK
	//set state pointer for each block
	CA_state = _state_(CA_waiting);
}
int main(void) {
	volatile int d;
	setup();

	while(1){

		//call state for each block
		CA_state();

		//delay
		for(d=0;d<10000;d++);
	}



	return 0;
}
