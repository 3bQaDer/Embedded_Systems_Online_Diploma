/*
 * CA.h
 *
 *  Created on: Sep 4, 2023
 *      Author: 3bQaDer
 */

#ifndef US_H_
#define US_H_
#include "state.h"

enum{
	US_busy
}US_state_id;

//declare init function for ultra sonic sensor
void US_init();

//declare state functions CA
_define_(US_busy);

//state pointer to function
extern void (*US_state)();

#endif /* US_H_ */
