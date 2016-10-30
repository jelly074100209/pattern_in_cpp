/*
 * ObjectStructure.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_VISITOR_OBJECTSTRUCTURE_H_
#define PATTERN_VISITOR_OBJECTSTRUCTURE_H_

#include <list>
#include "Element.h"
using namespace std;

class ObjectStructure {
private:
	list<Element*> element_list;
public:
	ObjectStructure();
	virtual ~ObjectStructure();
	void Attach(Element* element);
	void Detach(Element* element);
	void Accept(Visitor* visitor);
};

#endif /* PATTERN_VISITOR_OBJECTSTRUCTURE_H_ */
