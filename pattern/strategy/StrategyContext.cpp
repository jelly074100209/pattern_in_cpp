/*
 * StrategeContext.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "StrategyContext.h"

StrategyContext::StrategyContext(Strategy* strategy) {
	// TODO Auto-generated constructor stub
	this->strategy = strategy;

}

StrategyContext::~StrategyContext() {
	// TODO Auto-generated destructor stub
}

void StrategyContext::ContextInterface() {
	this->strategy->AlgorithmInterface();
}
