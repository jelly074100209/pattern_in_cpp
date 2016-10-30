/*
 * ObjectStructure.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "ObjectStructure.h"

ObjectStructure::ObjectStructure() {
	// TODO Auto-generated constructor stub

}

ObjectStructure::~ObjectStructure() {
	// TODO Auto-generated destructor stub
}

void ObjectStructure::Attach(Element* element) {
	this->element_list.push_back(element);
}

void ObjectStructure::Detach(Element* element) {
	this->element_list.pop_back();
}

void ObjectStructure::Accept(Visitor* visitor) {
	list<Element*>::iterator iter;
	for(iter=element_list.begin(); iter!=element_list.end(); iter++) {
		(*iter)->Accept(visitor);
	}
}
