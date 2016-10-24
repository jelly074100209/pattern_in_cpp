/*
 * ConcreteVisitor1.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_CONCRETEVISITOR1_H_
#define PATTERN_VISITOR_CONCRETEVISITOR1_H_

#include "Visitor.h"

class ConcreteVisitor1: public Visitor {
public:
	ConcreteVisitor1();
	virtual ~ConcreteVisitor1();
	virtual void VisitConcreteElementA(Element*);
	virtual void VisitConcreteElementB(Element*);
};

#endif /* PATTERN_VISITOR_CONCRETEVISITOR1_H_ */
