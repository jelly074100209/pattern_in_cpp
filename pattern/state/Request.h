/*
 * Request.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STATE_REQUEST_H_
#define PATTERN_STATE_REQUEST_H_

#include "State.h"

class State;
class Request {
public:
	State* current_state;
public:
	Request(State* state);
	virtual ~Request();
	void Start();
};

#endif /* PATTERN_STATE_REQUEST_H_ */
