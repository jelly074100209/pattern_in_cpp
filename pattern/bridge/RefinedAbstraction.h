/*
 * RefinedAbstraction.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_BRIDGE_REFINEDABSTRACTION_H_
#define PATTERN_BRIDGE_REFINEDABSTRACTION_H_

#include "Abstraction.h"

class RefinedAbstraction: public Abstraction {
public:
	RefinedAbstraction();
	virtual ~RefinedAbstraction();
	void Operation();
};

#endif /* PATTERN_BRIDGE_REFINEDABSTRACTION_H_ */
