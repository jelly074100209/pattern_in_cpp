/*
 * ConcreteColleague2.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_MEDIATOR_CONCRETECOLLEAGUE2_H_
#define PATTERN_MEDIATOR_CONCRETECOLLEAGUE2_H_

#include <iostream>
#include "Colleague.h"

using namespace std;

class ConcreteColleague2: public Colleague {
public:
	ConcreteColleague2(Mediator* mediator);
	virtual ~ConcreteColleague2();
	void Send(string message);
	void Notify(string message);
};

#endif /* PATTERN_MEDIATOR_CONCRETECOLLEAGUE2_H_ */
