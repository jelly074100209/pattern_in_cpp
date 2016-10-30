/*
 * ConcreteSubjector.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_OBSERVER_CONCRETESUBJECTOR_H_
#define PATTERN_OBSERVER_CONCRETESUBJECTOR_H_

#include "Subjector.h"

class ConcreteSubjector: public Subjector {
public:
	ConcreteSubjector();
	virtual ~ConcreteSubjector();
};

#endif /* PATTERN_OBSERVER_CONCRETESUBJECTOR_H_ */
