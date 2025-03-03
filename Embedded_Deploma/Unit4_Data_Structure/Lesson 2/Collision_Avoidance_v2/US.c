/*
 * CA.c
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */
#include "US.h"


static int US_distance = 0;

int US_get_distance_random(int l, int r, int count);       // A function to generate a random number



//state pointer to function
void (*US_state)();

//functions definitions
void US_init(){
	//init Ultra Sonic drivers
	printf("US_init /n");
}

_define_(US_busy){

	US_state_id = US_busy;

	US_distance = US_get_distance_random(45,55,1);
	printf("US_busy state : distance = %d \n",US_distance);
	US_set_distance(US_distance);
	US_state = _state_(US_busy);

}



int US_get_distance_random(int l, int r, int count){
	int i;
	int rand_num;
	for(i=0;i<count;i++){
		rand_num=(rand()%(r-l+1))+l;

	}
	return rand_num;
}
