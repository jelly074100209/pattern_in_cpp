/*
 * ConcreteElementB.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_CONCRETEELEMENTB_H_
#define PATTERN_VISITOR_CONCRETEELEMENTB_H_

#include "Element.h"

class Visitor;
class ConcreteElementB: public Element {
public:
	ConcreteElementB();
	virtual ~ConcreteElementB();
	virtual void Accept(Visitor* visitor);
	void OperationB();
};

#endif /* PATTERN_VISITOR_CONCRETEELEMENTB_H_ */
