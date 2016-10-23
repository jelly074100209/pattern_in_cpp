/*
 * ConcreteMediator.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_MEDIATOR_CONCRETEMEDIATOR_H_
#define PATTERN_MEDIATOR_CONCRETEMEDIATOR_H_

#include "Mediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

class ConcreteMediator: public Mediator {
public:
	ConcreteMediator();
	virtual ~ConcreteMediator();
	virtual void Send(string message, Colleague* colleague);
private:
	ConcreteColleague1 *colleague1;
	ConcreteColleague2 *colleague2;
};

#endif /* PATTERN_MEDIATOR_CONCRETEMEDIATOR_H_ */
