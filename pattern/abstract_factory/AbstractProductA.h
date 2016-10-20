/*
 * AbstractProductA.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_ABSTRACTPRODUCTA_H_
#define PATTERN_ABSTRACTPRODUCTA_H_
#include <iostream>
using namespace std;
class AbstractProductA {
public:
	AbstractProductA();
	virtual ~AbstractProductA();
	virtual void display()=0;
};

#endif /* PATTERN_ABSTRACTPRODUCTA_H_ */
