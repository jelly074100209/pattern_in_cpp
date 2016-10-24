/*
 * ConcreteTemplateMethod.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_TEMPLATE_CONCRETETEMPLATEMETHOD_H_
#define PATTERN_TEMPLATE_CONCRETETEMPLATEMETHOD_H_

#include "TemplateMethod.h"

class ConcreteTemplateMethod: public TemplateMethod {
public:
	ConcreteTemplateMethod();
	virtual ~ConcreteTemplateMethod();
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
};

#endif /* PATTERN_TEMPLATE_CONCRETETEMPLATEMETHOD_H_ */
