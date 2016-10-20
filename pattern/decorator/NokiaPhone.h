/*
 * NokiaPhone.h
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#ifndef PATTERN_DECORATOR_NOKIAPHONE_H_
#define PATTERN_DECORATOR_NOKIAPHONE_H_

#include "Phone.h"

class NokiaPhone: public Phone {
private:
	string m_name;
public:
	NokiaPhone();
	NokiaPhone(string name);
	virtual ~NokiaPhone();
	virtual void ShowDecorate();
};

#endif /* PATTERN_DECORATOR_NOKIAPHONE_H_ */
