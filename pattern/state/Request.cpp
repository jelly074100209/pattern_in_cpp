/*
 * Request.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "Request.h"

Request::Request(State* state) {
	// TODO Auto-generated constructor stub
	this->current_state = state;
}

Request::~Request() {
	// TODO Auto-generated destructor stub
}

void Request::Start() {
	this->current_state->Handle(this);
}
