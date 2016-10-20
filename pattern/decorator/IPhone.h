/*
 * IPhone.h
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#ifndef PATTERN_DECORATOR_IPHONE_H_
#define PATTERN_DECORATOR_IPHONE_H_

#include "Phone.h"

class IPhone: public Phone {
private:
	string m_name;
public:
	IPhone();
	IPhone(string name);
	virtual ~IPhone();
	virtual void ShowDecorate();
};

#endif /* PATTERN_DECORATOR_IPHONE_H_ */
