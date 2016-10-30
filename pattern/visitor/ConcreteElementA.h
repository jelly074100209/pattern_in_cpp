/*
 * ConcreteElementA.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_CONCRETEELEMENTA_H_
#define PATTERN_VISITOR_CONCRETEELEMENTA_H_

#include "Element.h"

class Visitor;
class ConcreteElementA: public Element {
public:
	ConcreteElementA();
	virtual ~ConcreteElementA();
	virtual void Accept(Visitor*);
	void OperationA();
};

#endif /* PATTERN_VISITOR_CONCRETEELEMENTA_H_ */
