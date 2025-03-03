/*
 * Collision_Avoidance_v1.h
 *
 *  Created on: Sep 1, 2023
 *      Author: 3bQaDer
 */

#ifndef COLLISION_AVOIDANCE_V1_H_
#define COLLISION_AVOIDANCE_V1_H_
#include "state.h"

enum{
	CA_waiting,
	CA_driving
}CA_state_id;


//declare state functions CA
_define_(CA_waiting);
_define_(CA_driving);

//state pointer to function
extern void (*CA_state)();


#endif /* COLLISION_AVOIDANCE_V1_H_ */
