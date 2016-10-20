/*
 * ConcreteImplementorA.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_BRIDGE_CONCRETEIMPLEMENTORA_H_
#define PATTERN_BRIDGE_CONCRETEIMPLEMENTORA_H_

#include "Implementor.h"

class ConcreteImplementorA: public Implementor {
public:
	ConcreteImplementorA();
	virtual ~ConcreteImplementorA();
	virtual void OperationImp();
};

#endif /* PATTERN_BRIDGE_CONCRETEIMPLEMENTORA_H_ */
