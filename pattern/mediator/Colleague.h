/*
 * Colleague.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_MEDIATOR_COLLEAGUE_H_
#define PATTERN_MEDIATOR_COLLEAGUE_H_

#include "Mediator.h"
class Mediator;
class Colleague {
protected:
	Mediator *mediator;
public:
	Colleague();
	virtual ~Colleague();
};

#endif /* PATTERN_MEDIATOR_COLLEAGUE_H_ */
