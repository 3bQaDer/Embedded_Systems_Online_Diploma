/*
 * CA.h
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#ifndef CA_H_
#define CA_H_
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

#endif /* CA_H_ */
