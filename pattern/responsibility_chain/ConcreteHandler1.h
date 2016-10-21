/*
 * ConcreteHandler1.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER1_H_
#define PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER1_H_

#include "Handler.h"

class ConcreteHandler1: public Handler {
public:
	ConcreteHandler1(Handler* inPHandler=0);
	virtual ~ConcreteHandler1();
	virtual void HandlerRequest();
};

#endif /* PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER1_H_ */
