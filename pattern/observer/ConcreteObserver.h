/*
 * ConcreteObserver.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_OBSERVER_CONCRETEOBSERVER_H_
#define PATTERN_OBSERVER_CONCRETEOBSERVER_H_

#include "Observer.h"

class ConcreteObserver: public Observer {
public:
	ConcreteObserver();
	virtual ~ConcreteObserver();
	virtual void Update();
};

#endif /* PATTERN_OBSERVER_CONCRETEOBSERVER_H_ */
