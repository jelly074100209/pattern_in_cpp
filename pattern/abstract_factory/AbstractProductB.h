/*
 * AbstractProductB.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_ABSTRACTPRODUCTB_H_
#define PATTERN_ABSTRACTPRODUCTB_H_

#include <iostream>
using namespace std;

class AbstractProductB {
public:
	AbstractProductB();
	virtual ~AbstractProductB();
	virtual void display() = 0;
};

#endif /* PATTERN_ABSTRACTPRODUCTB_H_ */
