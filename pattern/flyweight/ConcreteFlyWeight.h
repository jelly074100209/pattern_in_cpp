/*
 * ConcreteFlyWeight.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_FLYWEIGHT_CONCRETEFLYWEIGHT_H_
#define PATTERN_FLYWEIGHT_CONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

class ConcreteFlyWeight: public Flyweight {
public:
	ConcreteFlyWeight();
	virtual ~ConcreteFlyWeight();
	virtual void operation();
};

#endif /* PATTERN_FLYWEIGHT_CONCRETEFLYWEIGHT_H_ */
