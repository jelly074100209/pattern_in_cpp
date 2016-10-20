/*
 * Adaptee.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_ADAPTER_ADAPTEE_H_
#define PATTERN_ADAPTER_ADAPTEE_H_

#include <iostream>
using namespace std;

class Adaptee {
public:
	Adaptee();
	virtual ~Adaptee();
	void SpecialRequest();
};

#endif /* PATTERN_ADAPTER_ADAPTEE_H_ */
