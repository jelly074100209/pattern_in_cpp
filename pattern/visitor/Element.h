/*
 * Element.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_ELEMENT_H_
#define PATTERN_VISITOR_ELEMENT_H_

#include <iostream>
#include "Visitor.h"
using namespace std;

class Visitor;
class Element {
public:
	Element();
	virtual ~Element();
	virtual void Accept(Visitor* visitor) = 0;
};

#endif /* PATTERN_VISITOR_ELEMENT_H_ */
