/*
 * DecoratorPhoneA.h
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#ifndef PATTERN_DECORATOR_DECORATORPHONEA_H_
#define PATTERN_DECORATOR_DECORATORPHONEA_H_

#include "DecoratorPhone.h"

class DecoratorPhoneA: public DecoratorPhone {
public:
	DecoratorPhoneA();
	DecoratorPhoneA(Phone *phone);
	virtual ~DecoratorPhoneA();
private:
	void AddDecorate();
};

#endif /* PATTERN_DECORATOR_DECORATORPHONEA_H_ */
