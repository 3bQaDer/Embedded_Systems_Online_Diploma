/*
 * CA.h
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

enum{
	DC_idle,
	DC_busy
}DC_state_id;

//declare init function for the motor
void DC_init();

//declare state functions CA
_define_(DC_idle);
_define_(DC_busy);

//state pointer to function
extern void (*DC_state)();

#endif /* DC_H_ */
