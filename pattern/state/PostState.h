/*
 * PostState.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STATE_POSTSTATE_H_
#define PATTERN_STATE_POSTSTATE_H_

#include "State.h"

class PostState: public State {
public:
	PostState();
	virtual ~PostState();
	virtual void Handle(Request* request);
};

#endif /* PATTERN_STATE_POSTSTATE_H_ */
