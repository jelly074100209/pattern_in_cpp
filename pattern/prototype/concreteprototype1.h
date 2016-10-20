/*
 * concreteprototype1.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_PROTOTYPE_CONCRETEPROTOTYPE1_H_
#define PATTERN_PROTOTYPE_CONCRETEPROTOTYPE1_H_

#include "prototype.h"

class concreteprototype1: public prototype {
public:
	concreteprototype1();
	concreteprototype1(const concreteprototype1&);
	virtual ~concreteprototype1();
	virtual prototype* clone();
};

#endif /* PATTERN_PROTOTYPE_CONCRETEPROTOTYPE1_H_ */
