/*
 * Visitor.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_VISITOR_H_
#define PATTERN_VISITOR_VISITOR_H_

#include "Element.h"

class Element;
class Visitor {
public:
	Visitor();
	virtual ~Visitor();
	virtual void VisitConcreteElementA(Element*) = 0;
	virtual void VisitConcreteElementB(Element*) = 0;
};

#endif /* PATTERN_VISITOR_VISITOR_H_ */
