/*
 * DecoratorPhone.h
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#ifndef PATTERN_DECORATOR_DECORATORPHONE_H_
#define PATTERN_DECORATOR_DECORATORPHONE_H_

#include "Phone.h"

class DecoratorPhone: public Phone {
protected:
	Phone *m_phone;
public:
	DecoratorPhone();
	DecoratorPhone(Phone*);
	virtual ~DecoratorPhone();
	virtual void ShowDecorate();
};

#endif /* PATTERN_DECORATOR_DECORATORPHONE_H_ */
