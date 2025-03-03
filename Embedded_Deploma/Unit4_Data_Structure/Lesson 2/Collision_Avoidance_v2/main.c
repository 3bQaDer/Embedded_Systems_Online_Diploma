/*
 * main.c
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#include "CA.h"
#include "DC.h"
#include "US.h"

void setup(){
	//init all the drivers
	//init IRQ
	//init HAL US_Driver DC_Driver
	//init BLOCK
	US_init();
	DC_init();
	//set state pointer for each block
	CA_state = _state_(CA_waiting);
	US_state = _state_(US_busy);
	DC_state = _state_(DC_idle);

}

int main(){
	volatile int d;

	setup();

	while(1){

		//call state for each block
		US_state();
		CA_state();
		DC_state();

		//delay
		for(d=0;d<10000;d++);

	}
return 0 ;
}
