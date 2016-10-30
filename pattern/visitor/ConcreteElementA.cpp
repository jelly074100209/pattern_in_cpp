/*
 * ConcreteElementA.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "ConcreteElementA.h"

ConcreteElementA::ConcreteElementA() {
	// TODO Auto-generated constructor stub
}

ConcreteElementA::~ConcreteElementA() {
	// TODO Auto-generated destructor stub
}

void ConcreteElementA::Accept(Visitor* visitor) {
	visitor->VisitConcreteElementA(this);
}

void ConcreteElementA::OperationA() {
	cout<<"concreteElementA operation"<<endl;
}
