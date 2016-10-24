/*
 * Strategy.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_STRATEGY_STRATEGY_H_
#define PATTERN_STRATEGY_STRATEGY_H_

#include <iostream>
using namespace std;

class Strategy {
public:
	Strategy();
	virtual ~Strategy();
	virtual void AlgorithmInterface() = 0;
};

#endif /* PATTERN_STRATEGY_STRATEGY_H_ */
