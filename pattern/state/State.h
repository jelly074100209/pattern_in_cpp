/*
 * State.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STATE_STATE_H_
#define PATTERN_STATE_STATE_H_

#include <iostream>
#include "Request.h"

using namespace std;

class Request;
class State {
public:
	State();
	virtual ~State();
	virtual void Handle(Request* request) = 0;
};

#endif /* PATTERN_STATE_STATE_H_ */
