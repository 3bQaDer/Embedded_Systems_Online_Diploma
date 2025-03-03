/*
 * CA.c
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#include "DC.h"

static int DC_speed = 0;

//state pointer to function
void (*DC_state)();

//functions definitions

void DC_init(){
	//init PWM
	printf("DC_init /n");
}

void DC_set_speed(int s){
	DC_speed = s;
	DC_state = _state_(DC_busy);
	printf("CA---------Speed = %d --------> DC \n",DC_speed);

}

_define_(DC_idle){
	//state name
	DC_state_id = DC_idle;
	//state action
	//CAll PWM to make speed = DC_speed
	printf("DC_idle state : speed = %d \n",DC_speed);


}

_define_(DC_busy){
	//state name
	DC_state_id = DC_busy;
	//state action
	//CAll PWM to change the speed
	printf("DC_busy state : speed = %d \n",DC_speed);
	DC_state = _state_(DC_idle);


}


