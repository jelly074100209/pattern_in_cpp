/*
 * ConcreteStrategyA.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STRATEGY_CONCRETESTRATEGYA_H_
#define PATTERN_STRATEGY_CONCRETESTRATEGYA_H_

#include "Strategy.h"

class ConcreteStrategyA: public Strategy {
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	virtual void AlgorithmInterface();
};

#endif /* PATTERN_STRATEGY_CONCRETESTRATEGYA_H_ */
