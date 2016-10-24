/*
 * TemplateMethod.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_TEMPLATE_TEMPLATEMETHOD_H_
#define PATTERN_TEMPLATE_TEMPLATEMETHOD_H_

#include <iostream>
using namespace std;

class TemplateMethod {
public:
	TemplateMethod();
	virtual ~TemplateMethod();
	void TemplateAlgorithm();
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

#endif /* PATTERN_TEMPLATE_TEMPLATEMETHOD_H_ */
