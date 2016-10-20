/*
 * Implementor.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_BRIDGE_IMPLEMENTOR_H_
#define PATTERN_BRIDGE_IMPLEMENTOR_H_

#include <iostream>
using namespace std;
class Implementor {
public:
	Implementor();
	virtual ~Implementor();
	virtual void OperationImp() = 0;
};

#endif /* PATTERN_BRIDGE_IMPLEMENTOR_H_ */
