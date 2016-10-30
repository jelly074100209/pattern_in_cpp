/*
 * GetState.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STATE_GETSTATE_H_
#define PATTERN_STATE_GETSTATE_H_

#include "State.h"
#include "PostState.h"

class GetState: public State {
public:
	GetState();
	virtual ~GetState();
	virtual void Handle(Request* request);
};

#endif /* PATTERN_STATE_GETSTATE_H_ */
