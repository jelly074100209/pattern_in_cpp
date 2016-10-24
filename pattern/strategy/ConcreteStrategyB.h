/*
 * ConcreteStrategyB.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STRATEGY_CONCRETESTRATEGYB_H_
#define PATTERN_STRATEGY_CONCRETESTRATEGYB_H_

#include "Strategy.h"

class ConcreteStrategyB: public Strategy {
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	virtual void AlgorithmInterface();
};

#endif /* PATTERN_STRATEGY_CONCRETESTRATEGYB_H_ */
