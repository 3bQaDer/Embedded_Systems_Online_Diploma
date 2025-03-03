/*
 ============================================================================
 Name        : Collision_Avoidance.c
 Author      : Mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "Collision_Avoidance_v1.h"


static int CA_speed = 0;
static int CA_distance = 0;
static int CA_threshold = 50;

//state pointer to function
void (*CA_state)();

int US_get_distance_random(int l, int r, int count);       // A function to generate a random number

_define_(CA_waiting){

	//state name
	CA_state_id = CA_waiting;

	//state action
	CA_speed=0;
	//DC_Motor speed

	//event check
	//US_get_distance(CA_distance)
	CA_distance = US_get_distance_random(45,55,1);
	(CA_distance <= CA_threshold)?(CA_state=_state_(CA_waiting)):(CA_state=_state_(CA_driving));
	printf("CA_waiting state : distance = %d , speed = %d \n",CA_distance,CA_speed);

}
_define_(CA_driving){

	//state name
	CA_state_id = CA_driving;

	//state action
	CA_speed=30;
	//DC_Motor speed

	//event check
	//US_get_distance(CA_distance)
	CA_distance = US_get_distance_random(45,55,1);
	(CA_distance > CA_threshold)?(CA_state=_state_(CA_driving)):(CA_state=_state_(CA_waiting));
	printf("CA_driving state : distance = %d , speed = %d \n",CA_distance,CA_speed);
}


int US_get_distance_random(int l, int r, int count){
	int i;
	int rand_num;
	for(i=0;i<count;i++){
		rand_num=(rand()%(r-l+1))+l;

	}
	return rand_num;
}

