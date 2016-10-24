/*
 * StrategeContext.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STRATEGY_STRATEGYCONTEXT_H_
#define PATTERN_STRATEGY_STRATEGYCONTEXT_H_

#include "Strategy.h"

class StrategyContext {
private:
	Strategy* strategy;
public:
	StrategyContext(Strategy*);
	virtual ~StrategyContext();
	void ContextInterface();
};

#endif /* PATTERN_STRATEGY_STRATEGYCONTEXT_H_ */
