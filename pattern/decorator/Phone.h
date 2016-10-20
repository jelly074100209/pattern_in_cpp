/*
 * Phone.h
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#ifndef PATTERN_DECORATOR_PHONE_H_
#define PATTERN_DECORATOR_PHONE_H_

#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	Phone();
	virtual ~Phone();
	virtual void ShowDecorate() = 0;
};

#endif /* PATTERN_DECORATOR_PHONE_H_ */
