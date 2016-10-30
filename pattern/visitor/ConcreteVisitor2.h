/*
 * ConcreteVisitor2.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_CONCRETEVISITOR2_H_
#define PATTERN_VISITOR_CONCRETEVISITOR2_H_

#include "Visitor.h"

class ConcreteVisitor2: public Visitor {
public:
	ConcreteVisitor2();
	virtual ~ConcreteVisitor2();
	virtual void VisitConcreteElementA(Element*);
	virtual void VisitConcreteElementB(Element*);
};

#endif /* PATTERN_VISITOR_CONCRETEVISITOR2_H_ */
