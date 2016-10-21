/*
 * ConcreteHandler2.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER2_H_
#define PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER2_H_

#include "Handler.h"

class ConcreteHandler2: public Handler {
public:
	ConcreteHandler2(Handler* inPHandler=0);
	virtual ~ConcreteHandler2();
	virtual void HandlerRequest();
};

#endif /* PATTERN_RESPONSIBILITY_CHAIN_CONCRETEHANDLER2_H_ */
