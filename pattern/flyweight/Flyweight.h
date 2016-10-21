/*
 * Flyweight.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_FLYWEIGHT_FLYWEIGHT_H_
#define PATTERN_FLYWEIGHT_FLYWEIGHT_H_

#include <iostream>
#include <string>
using namespace std;

class Flyweight {
public:
	Flyweight();
	virtual ~Flyweight();
	virtual void operation() = 0;
};

#endif /* PATTERN_FLYWEIGHT_FLYWEIGHT_H_ */
