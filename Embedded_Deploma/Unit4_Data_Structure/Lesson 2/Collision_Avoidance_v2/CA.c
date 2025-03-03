/*
 * CA.c
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */


#include "CA.h"


static int CA_speed = 0;
static int CA_distance = 0;
static int CA_threshold = 50;

//state pointer to function
void (*CA_state)();

void US_set_distance(int d){
	CA_distance = d;
	(CA_distance <= CA_threshold)?(CA_state=_state_(CA_waiting)):(CA_state=_state_(CA_driving));
	printf("US---------distance = %d --------> CA \n",CA_distance);
}
_define_(CA_waiting){

	CA_state_id = CA_waiting;
	printf("CA_waiting state : distance = %d , speed = %d \n",CA_distance,CA_speed);

	CA_speed=0;
	DC_set_speed(CA_speed);

}
_define_(CA_driving){


	CA_state_id = CA_driving;
	printf("CA_driving state : distance = %d , speed = %d \n",CA_distance,CA_speed);

	CA_speed=30;
	DC_set_speed(CA_speed);

}

