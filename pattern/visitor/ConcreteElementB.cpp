/*
 * ConcreteElementB.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "ConcreteElementB.h"

ConcreteElementB::ConcreteElementB() {
	// TODO Auto-generated constructor stub
}

ConcreteElementB::~ConcreteElementB() {
	// TODO Auto-generated destructor stub
}

void ConcreteElementB::Accept(Visitor* visitor) {
	visitor->VisitConcreteElementB(this);
}

void ConcreteElementB::OperationB() {
	cout<<"ConcreteElementB operation"<<endl;
}
