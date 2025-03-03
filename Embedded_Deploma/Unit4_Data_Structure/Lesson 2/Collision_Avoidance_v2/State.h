/*
 * State.h
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"

#define _define_(_state_FUN_)   void ST_##_state_FUN_()
#define _state_(_state_FUN_)    ST_##_state_FUN_

//states connections
void US_set_distance(int d);
void DC_set_speed(int s);

#endif /* STATE_H_ */
