/*
 * Abstraction.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_BRIDGE_ABSTRACTION_H_
#define PATTERN_BRIDGE_ABSTRACTION_H_

#include "Implementor.h"

class Abstraction {
protected:
	Implementor *imp;
public:
	Abstraction();
	virtual ~Abstraction();
	virtual void Operation();
	void SetImplementor(Implementor*);
};

#endif /* PATTERN_BRIDGE_ABSTRACTION_H_ */
