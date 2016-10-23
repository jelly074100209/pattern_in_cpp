/*
 * Mediator.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_MEDIATOR_MEDIATOR_H_
#define PATTERN_MEDIATOR_MEDIATOR_H_

#include <string>
#include "Colleague.h"

using namespace std;
class Colleague;
class Mediator {
public:
	Mediator();
	virtual ~Mediator();
	virtual void Send(string message, Colleague* colleague) = 0;
};

#endif /* PATTERN_MEDIATOR_MEDIATOR_H_ */
