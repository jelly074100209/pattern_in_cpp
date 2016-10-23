/*
 * ConcreteColleague1.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_MEDIATOR_CONCRETECOLLEAGUE1_H_
#define PATTERN_MEDIATOR_CONCRETECOLLEAGUE1_H_

#include <iostream>
#include "Colleague.h"

using namespace std;

class ConcreteColleague1: public Colleague {
public:
	ConcreteColleague1(Mediator* mediator);
	virtual ~ConcreteColleague1();
	void Send(string message);
	void Notify(string message);
};

#endif /* PATTERN_MEDIATOR_CONCRETECOLLEAGUE1_H_ */
